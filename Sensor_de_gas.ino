//Código para prueba del sensor de gas MQ135 por los puertos digitales------------------ Giovanni Sinai Silva Barragán
int gas= 7;
int led= 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(gas, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
bool estado =  digitalRead(gas);
if(!estado)
{
  digitalWrite(led, HIGH);
  Serial.println("Hay gas");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("Ya no hay gas");
    }
}
