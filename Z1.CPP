
/* * TREAD-O-QUEST: MASTER HYBRID NAVIGATOR
 * Logic: 
 * - Memory: Handles B2, B4, and D5 via junction counting.
 * - Hybrid: Auto-detects floor color (White vs Black) and flips steering.
 * - Precision: Pre-turn braking + high-torque kickstart.
 */

const int ENA = 5, IN1 = 2, IN2 = 3;   
const int ENB = 6, IN3 = 4, IN4 = 7;   
const int S_FL = A0, S_ML = A1, S_MR = A2, S_FR = A3;
const int START_BTN = 12;

// --- TUNING ---
const int THRESHOLD = 500;   
int cruiseSpeed = 130;     
int slowCruise = 70;       
int turnSpeed = 230;       
int juncTurnSpeed = 160;   
int Boost = 35;  
int lastDir = 0;          // Motor balance  

void setup() {
  pinMode(ENA, OUTPUT); pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT); pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT);
  pinMode(START_BTN, INPUT_PULLUP);
  while (digitalRead(START_BTN) == HIGH); 
  delay(1000); 
}

void loop() {
  int vFL = analogRead(S_FL); 
  int vML = analogRead(S_ML); 
  int vMR = analogRead(S_MR); 
  int vFR = analogRead(S_FR); 

 if ((vFL < THRESHOLD && vML < THRESHOLD && vMR < THRESHOLD && vFR < THRESHOLD) || 
      (vFL > THRESHOLD && vML > THRESHOLD && vMR > THRESHOLD && vFR > THRESHOLD)) {
    
    moveForward(slowCruise, slowCruise); // Brake to kill momentum
    delay(100); 
    pivotRight(turnSpeed);               // Execute Priority Turn
    lastDir = 2;
    
    // Small delay to ensure the robot clears the intersection 
    // before re-reading sensors.
    delay(100); 
  }

  // --- 2. HYBRID STEERING LOGIC ---
  
  // SCENARIO A: BLACK FLOOR (Islands A, C, D)
  // Detected when outer sensors are mostly Black (> THRESHOLD)
  else if (vFL > THRESHOLD && vFR > THRESHOLD) {
    if (vML < THRESHOLD && vMR < THRESHOLD) moveForward(cruiseSpeed, cruiseSpeed); // Straight
    else if (vML < THRESHOLD) moveForward(85, cruiseSpeed); // Nudge Left
    else if (vMR < THRESHOLD) moveForward(cruiseSpeed, 85); // Nudge Right
    else if (vFL < THRESHOLD) { moveForward(slowCruise, slowCruise); delay(60); pivotLeft(turnSpeed); }
    else if (vFR < THRESHOLD) { moveForward(slowCruise, slowCruise); delay(60); pivotRight(turnSpeed); }
  }

  // SCENARIO B: WHITE FLOOR (Island B1)
  // Detected when outer sensors are mostly White (< THRESHOLD)
  else {
    
    if (vML > THRESHOLD && vMR > THRESHOLD) moveForward(cruiseSpeed, cruiseSpeed); // Straight on Black line
    else if (vML > THRESHOLD) moveForward(85, cruiseSpeed); // Nudge Left toward Black
    else if (vMR > THRESHOLD) moveForward(cruiseSpeed, 85); // Nudge Right toward Black
    else if (vFL > THRESHOLD) { moveForward(slowCruise, slowCruise); delay(60); pivotLeft(turnSpeed); }
    else if (vFR > THRESHOLD) { moveForward(slowCruise, slowCruise); delay(60); pivotRight(turnSpeed); }
  }
}

// --- CALIBRATED MOTOR FUNCTIONS ---

void moveForward(int l, int r) {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW);
  analogWrite(ENA, constrain(l + Boost, 0, 255)); 
  analogWrite(ENB, constrain(r + Boost, 0, 255));
}

void pivotLeft(int spd) {
  digitalWrite(IN1, LOW);  digitalWrite(IN2, HIGH); 
  digitalWrite(IN3, HIGH); digitalWrite(IN4, LOW); 
  analogWrite(ENA, 255); analogWrite(ENB, 255); delay(45); // Stall breaker
  analogWrite(ENA, constrain(spd + Boost, 0, 255));
  analogWrite(ENB, constrain(spd + Boost, 0, 255));
}

void pivotRight(int spd) {
  digitalWrite(IN1, HIGH); digitalWrite(IN2, LOW); 
  digitalWrite(IN3, LOW);  digitalWrite(IN4, HIGH); 
  analogWrite(ENA, 255); analogWrite(ENB, 255); delay(45); // Stall breaker
  analogWrite(ENA, constrain(spd + Boost, 0, 255));
  analogWrite(ENB,constrain(spd + Boost, 0, 255) );
}

void stopBot() {
  analogWrite(ENA, 0); analogWrite(ENB, 0);
  digitalWrite(IN1, LOW); digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW); digitalWrite(IN4, LOW);
}