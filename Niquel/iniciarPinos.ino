void iniciarPinos() {

  pinMode(IN1, OUTPUT);
  digitalWrite(IN1, LOW);
  pinMode(IN2, OUTPUT);
  digitalWrite(IN2, LOW);
  pinMode(IN3, OUTPUT);
  digitalWrite(IN3, LOW);
  pinMode(IN4, OUTPUT);
  digitalWrite(IN4, LOW);

  pinMode(ENA, OUTPUT);
  analogWrite(ENA, LOW);
  pinMode(ENB, OUTPUT);
  analogWrite(ENB, LOW);

  serial1.begin(9600);
  
  
}
