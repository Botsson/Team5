int left = 9;
int right = 10;

void setup() {
  // put your setup code here, to run once:
    // initialize digital pin 13 as an output.
    pinMode(left, OUTPUT);
    pinMode(right, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(left, HIGH);
  digitalWrite(right, HIGH); 
}
