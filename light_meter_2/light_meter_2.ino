
int sensor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(A0);
  Serial.println(sensor);
  
    if (sensor > 900) {
       digitalWrite(8,HIGH);
       digitalWrite(9,LOW);
       digitalWrite(10,LOW);
    }
    else {
              if (sensor > 600) {
                 digitalWrite(9,HIGH);
                 digitalWrite(8,LOW);
                 digitalWrite(10,LOW);
              } 
              else {
                 digitalWrite(10,HIGH);
                 digitalWrite(8,LOW);
                 digitalWrite(9,LOW);
              }
         }
        
}
