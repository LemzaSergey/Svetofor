// https://www.tinkercad.com/things/38VY0RgLkW5 
int led_red = 4;
int led_yellow = 7;
int led_green = 8;
int knopka = 2;
int timeRatio = 1;
int schetchik;
double timeratio;
double timeration;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(knopka, INPUT);
  pinMode(timeRatio, INPUT);
}

void TimeRation() {

  timeration = analogRead (timeRatio);
 
  if (timeration > 511) {
      timeration = (map(timeration, 511, 1024, 100, 410)) ;
      timeratio=(timeration/100)-0.1;

  } else {
      timeration = (map(timeration, 0, 512, 25, 100)) ;
    timeratio=timeration/100;
    
  };
}

void RED () {
  TimeRation();
  digitalWrite (led_red, HIGH);
  delay (5000 * timeratio);
  digitalWrite (led_yellow, HIGH);
  delay (2000 * timeratio);
  digitalWrite (led_red, LOW);
  digitalWrite (led_yellow, LOW);
}

void YELLOW () {
  TimeRation();
  digitalWrite (led_yellow, HIGH);
  delay (2000 * timeratio);
  digitalWrite (led_yellow, LOW);
}

void GREEN () {
  TimeRation();
  digitalWrite (led_green, HIGH);
  delay (5000 * timeratio);
  digitalWrite (led_green, LOW);
  delay (300 * timeratio );
  digitalWrite (led_green, HIGH);
  delay (300 * timeratio );
  digitalWrite (led_green, LOW);
  delay (300 * timeratio);
  digitalWrite (led_green, HIGH);
  delay (300 * timeratio);
  digitalWrite (led_green, LOW);
  delay (300 * timeratio);
  digitalWrite (led_green, HIGH);
  delay (300 * timeratio);
  digitalWrite (led_green, LOW);
}

void GREENKNOPKA () {
  schetchik = 0;
  TimeRation();
  do {
    digitalWrite (led_green, HIGH);
    delay (50);
    schetchik++;
  } while ((digitalRead (knopka) == LOW) && (schetchik < (200 * timeratio)));

  digitalWrite (led_green, LOW);
  delay (300 * timeratio);
  digitalWrite (led_green, HIGH);
  delay (300 * timeratio);
  digitalWrite (led_green, LOW);
  delay (300 * timeratio);
  digitalWrite (led_green, HIGH);
  delay (300 * timeratio);
  digitalWrite (led_green, LOW);

}


void loop() {
  
  GREENKNOPKA();
  YELLOW();
  RED();
 

}
