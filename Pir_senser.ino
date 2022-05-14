
const int pir = 2;
const int led = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT); //PIR
  pinMode(led, OUTPUT);//LED
  Serial.begin(9600);
 
} 
 
void loop() {
  // put your main code here, to run repeatedly:
  int output = digitalRead(pir);
  Serial.println(output);


 if (output == HIGH){
  digitalWrite(led,HIGH);
  Serial.println("LED is ON");
 }
 else {
  digitalWrite(led,LOW);
  Serial.println("LED is OFF");
 }
}
