//https://www.tinkercad.com/things/gz0YRgYEpBy-svetoforv35/editel
int led_red = 4;
int led_yellow = 7;
int led_green = 8;
int knopka = 2;
int schetchik;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(knopka, INPUT);
}


void RED () {
  digitalWrite (led_red, HIGH);
  delay (5000);
  digitalWrite (led_yellow, HIGH);
  delay (2000);
  digitalWrite (led_red, LOW);
  digitalWrite (led_yellow, LOW);
}
void YELLOW () {
  digitalWrite (led_yellow, HIGH);
  delay (2000);
  digitalWrite (led_yellow, LOW);
}
void GREEN () {
  digitalWrite (led_green, HIGH);
  delay (5000);
  digitalWrite (led_green, LOW);
  delay (300);
  digitalWrite (led_green, HIGH);
  delay (300);
  digitalWrite (led_green, LOW);
  delay (300);
  digitalWrite (led_green, HIGH);
  delay (300);
  digitalWrite (led_green, LOW);
  delay (300);
  digitalWrite (led_green, HIGH);
  delay (300);
  digitalWrite (led_green, LOW);
}

void GREENKNOPKA () {
  schetchik = 0;

  do {
    digitalWrite (led_green, HIGH);
    delay (50);
    schetchik++;
  } while ((digitalRead (knopka) == LOW) && (schetchik < 200));
  digitalWrite (led_green, LOW);
  delay (300);
  digitalWrite (led_green, HIGH);
  delay (300);
  digitalWrite (led_green, LOW);
  delay (300);
  digitalWrite (led_green, HIGH);
  delay (300);
  digitalWrite (led_green, LOW);



}


void loop() {

  GREENKNOPKA();
  YELLOW();
  RED();

}
