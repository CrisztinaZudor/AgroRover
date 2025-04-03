//Includerea bibliotecilor  
#include <Servo.h> 
#include <NewPing.h> 

// Definirea pinilor pentru driverele de motor 
const int Motor1Pin2 = 53;  
const int Motor1Pin1 = 52;  
const int Motor1EnA = 2;  

const int Motor2Pin2 = 51;  
const int Motor2Pin1 = 50;  
const int Motor2EnB = 3;  

const int Motor3Pin2 = 48; 
const int Motor3Pin1 = 49; 
const int Motor3EnA = 4; 

const int Motor4Pin2 = 47; 
const int Motor4Pin1 = 46; 
const int Motor4EnB = 5; 

const int Motor5Pin2 = 43; 
const int Motor5Pin1 = 42; 
const int Motor5EnA = 6; 

const int Motor6Pin2 = 45; 
const int Motor6Pin1 = 44; 
const int Motor6EnB = 7; 

#define TRIGGER_PIN  A1 
#define ECHO_PIN A2 
#define MAX_DISTANCE 200 

Servo servo_motor; 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 

boolean goesForward = false; 
int distance = 100; 

void setup() { 
Serial.begin(9600); 

// Configurarea pinilor 
pinMode(Motor1Pin1, OUTPUT); 
pinMode(Motor1Pin2, OUTPUT); 
pinMode(Motor1EnA, OUTPUT); 

pinMode(Motor2Pin1, OUTPUT); 
pinMode(Motor2Pin2, OUTPUT); 
pinMode(Motor2EnB, OUTPUT); 

pinMode(Motor3Pin1, OUTPUT); 
pinMode(Motor3Pin2, OUTPUT); 
pinMode(Motor3EnA, OUTPUT); 

pinMode(Motor4Pin1, OUTPUT); 
pinMode(Motor4Pin2, OUTPUT); 
pinMode(Motor4EnB, OUTPUT); 

pinMode(Motor5Pin1, OUTPUT); 
pinMode(Motor5Pin2, OUTPUT); 
pinMode(Motor5EnA, OUTPUT); 

pinMode(Motor6Pin1, OUTPUT); 
pinMode(Motor6Pin2, OUTPUT); 
pinMode(Motor6EnB, OUTPUT); 

// Configurarea pinilor pentru servo motor 
servo_motor.attach(9); 
servo_motor.write(130); 
delay(2000); 

// Calibrare prin citirea distantei initiale 
distance = readPing(); 
delay(100); 
distance = readPing(); 
delay(100); 
distance = readPing(); 
delay(100); 
distance = readPing(); 
delay(100); 
} 

void loop() {   
int distanceRight = 0; 
int distanceLeft = 0; 
delay(50); 
Serial.print("Distanta: "); 
Serial.println(distance); 
 
if (distance <= 30) { 
    Serial.println("Obstacol detectat!"); 
    moveStop(); 
    delay(300); 
    moveBackward(); 
    delay(500); 
    moveStop(); 
    delay(300); 
    distanceRight = lookRight(); 
    delay(300); 
    distanceLeft = lookLeft(); 
    delay(300); 
 
    Serial.print("Distanta la dreapta: "); 
    Serial.println(distanceRight); 
    Serial.print("Distanta la stanga: "); 
    Serial.println(distanceLeft); 
 
    if (distanceRight >= distanceLeft) { 
      Serial.println("Viraj dreapta"); 
      turnRight(); 
      delay(1000); 
      moveStop(); 
    } else { 
      Serial.println("Viraj stanga"); 
      turnLeft(); 
      delay(1000); 
      moveStop(); 
    } 
  } else { 
    moveForward();  
  } 
 
  distance = readPing(); 
} 
 
int lookRight() { 
  Serial.println("Privire in dreapta"); 
  servo_motor.write(40); 
  delay(300); 
  int distance = readPing(); 
  delay(100); 
  servo_motor.write(130); 
  return distance; 
}  
 
int lookLeft() { 
  Serial.println("Privire in stanga"); 
  servo_motor.write(180); 
  int distance = readPing(); 
  delay(100); 
  servo_motor.write(130); 
  return distance; 
} 
 
int readPing() { 
  delay(50);                 
  int cm = sonar.ping_cm(); 
  if (cm == 0) { 
    cm = MAX_DISTANCE; // Dacă nu este detectat niciun obiect, se seteaza distanta maxima 
  return cm; 
} 
} 
 
void moveStop() { 
  digitalWrite(Motor1Pin1, LOW); 
  digitalWrite(Motor1Pin2, LOW); 
  analogWrite(Motor1EnA, 0);  
 
  digitalWrite(Motor2Pin1, LOW); 
  digitalWrite(Motor2Pin2, LOW); 
  analogWrite(Motor2EnB, 0);  
 
  digitalWrite(Motor3Pin1, LOW); 
  digitalWrite(Motor3Pin2, LOW); 
  analogWrite(Motor3EnA, 0);  
 
  digitalWrite(Motor4Pin1, LOW); 
  digitalWrite(Motor4Pin2, LOW); 
  analogWrite(Motor4EnB, 0);  
 
  digitalWrite(Motor5Pin1, LOW); 
  digitalWrite(Motor5Pin2, LOW); 
  analogWrite(Motor5EnA, 0);  
 
  digitalWrite(Motor6Pin1, LOW); 
  digitalWrite(Motor6Pin2, LOW); 
  analogWrite(Motor6EnB, 0);  
}  
 
 
void moveForward() { 
  digitalWrite(Motor1Pin1, HIGH); 
  digitalWrite(Motor1Pin2, LOW); 
  analogWrite(Motor1EnA, 100); 
 
  digitalWrite(Motor2Pin1, HIGH); 
  digitalWrite(Motor2Pin2, LOW); 
  analogWrite(Motor2EnB, 100); 
 
  digitalWrite(Motor3Pin1, HIGH); 
  digitalWrite(Motor3Pin2, LOW); 
  analogWrite(Motor3EnA, 100); 
 
  digitalWrite(Motor4Pin1, HIGH); 
  digitalWrite(Motor4Pin2, LOW); 
  analogWrite(Motor4EnB, 100); 
 
  digitalWrite(Motor5Pin1, HIGH); 
  digitalWrite(Motor5Pin2, LOW); 
  analogWrite(Motor5EnA, 100); 
 
  digitalWrite(Motor6Pin1, HIGH); 
  digitalWrite(Motor6Pin2, LOW); 
  analogWrite(Motor6EnB, 100); 
} 
 
void moveBackward() { 
  digitalWrite(Motor1Pin1, LOW); 
  digitalWrite(Motor1Pin2, HIGH); 
  analogWrite(Motor1EnA, 100); 
 
  digitalWrite(Motor2Pin1, LOW); 
  digitalWrite(Motor2Pin2, HIGH); 
  analogWrite(Motor2EnB, 100); 
 
  digitalWrite(Motor3Pin1, LOW); 
  digitalWrite(Motor3Pin2, HIGH); 
  analogWrite(Motor3EnA, 100); 
 
  digitalWrite(Motor4Pin1, LOW); 
  digitalWrite(Motor4Pin2, HIGH); 
  analogWrite(Motor4EnB, 100); 
 
  digitalWrite(Motor5Pin1, LOW); 
  digitalWrite(Motor5Pin2, HIGH);  
  analogWrite(Motor5EnA, 100); 
 
  digitalWrite(Motor6Pin1, LOW); 
  digitalWrite(Motor6Pin2, HIGH); 
  analogWrite(Motor6EnB, 100); 
} 
 
void turnRight() { 
  digitalWrite(Motor1Pin1, HIGH); 
  digitalWrite(Motor1Pin2, LOW); 
  analogWrite(Motor1EnA, 200); 
 
  digitalWrite(Motor3Pin1, HIGH); 
  digitalWrite(Motor3Pin2, LOW); 
  analogWrite(Motor3EnA, 200); 
 
  digitalWrite(Motor5Pin1, HIGH); 
  digitalWrite(Motor5Pin2, LOW); 
  analogWrite(Motor5EnA, 200); 
 
  digitalWrite(Motor2Pin1, LOW); 
  digitalWrite(Motor2Pin2, HIGH); 
  analogWrite(Motor2EnB, 200); 
 
  digitalWrite(Motor4Pin1, LOW); 
  digitalWrite(Motor4Pin2, HIGH); 
  analogWrite(Motor4EnB, 200); 
 
  digitalWrite(Motor6Pin1, LOW); 
  digitalWrite(Motor6Pin2, HIGH); 
  analogWrite(Motor6EnB, 200); 
} 
 
void turnLeft() { 
  digitalWrite(Motor1Pin1, LOW); 
  digitalWrite(Motor1Pin2, HIGH); 
  analogWrite(Motor1EnA, 200); 
 
  digitalWrite(Motor3Pin1, LOW); 
  digitalWrite(Motor3Pin2, HIGH); 
  analogWrite(Motor3EnA, 200); 
 
  digitalWrite(Motor5Pin1, LOW); 
  digitalWrite(Motor5Pin2, HIGH); 
  analogWrite(Motor5EnA, 200);  
 
  digitalWrite(Motor2Pin1, HIGH); 
  digitalWrite(Motor2Pin2, LOW); 
  analogWrite(Motor2EnB, 200); 
 
  digitalWrite(Motor4Pin1, HIGH); 
  digitalWrite(Motor4Pin2, LOW); 
  analogWrite(Motor4EnB, 200); 
 
  digitalWrite(Motor6Pin1, HIGH); 
  digitalWrite(Motor6Pin2, LOW); 
  analogWrite(Motor6EnB, 200); 
}