// TODO : add violet R to this shine mode

#define RLED 3
#define GLED 5
#define BLED 7

void setup(){
	pinMode(RLED, OUTPUT);
	digitalWrite(RLED, LOW);
	delay(100);
//
	pinMode(GLED, OUTPUT);
	digitalWrite(GLED, LOW);
	delay(100);
//
	pinMode(BLED, OUTPUT);
	digitalWrite(BLED, LOW);
	delay(100);
//
		
}

void loop(){
	digitalWrite(GLED, LOW);
	digitalWrite(RLED, HIGH);
	delay(1000);
	digitalWrite(BLED, HIGH);
	delay(1000);
	digitalWrite(BLED, LOW);
	delay(1500);
	digitalWrite(BLED, HIGH);
	delay(300);
	digitalWrite(BLED, LOW);
	delay(150);
	digitalWrite(BLED, HIGH);
	delay(300);
  	digitalWrite(BLED, LOW);
	delay(150);
	digitalWrite(BLED, HIGH);
	delay(300);
	digitalWrite(BLED, LOW);
	delay(1500);
	digitalWrite(BLED, HIGH);
	delay(70);
  	digitalWrite(BLED, LOW);
	delay(70);
  	digitalWrite(BLED, HIGH);
	delay(70);
  	digitalWrite(BLED, LOW);
	delay(70);
}
