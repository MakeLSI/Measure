int a = 3, b = 4, c = 5, d = 6;

// for Maruyama's Decoder

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  Serial.begin(9600);
}

int p = 0;
void loop() {
  if (p & 0x01) digitalWrite(a, 1); else digitalWrite(a, 0);
  if (p & 0x02) digitalWrite(b, 1); else digitalWrite(b, 0);
  if (p & 0x04) digitalWrite(c, 1); else digitalWrite(c, 0);
  if (p & 0x08) digitalWrite(d, 1); else digitalWrite(d, 0);
//  Serial.println(p);
  p = (p + 1) % 16;
  delay(1);
}
