 int led =13;
 int inp =3;


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(inp, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(inp);

  digitalWrite(led, state);


}
