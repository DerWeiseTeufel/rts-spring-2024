// 5 пинов с периодами 50 мкс, 100 мкс, 500 мкс, 1 мс, 10 мс

const int pin1 = 3;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 9;
const int pin5 = 10;

bool pin1_state = false;
bool pin2_state = false;
bool pin3_state = false;
bool pin4_state = false;
bool pin5_state = false;

unsigned long prev_mcs1 = 0;
unsigned long prev_mcs2 = 0;
unsigned long prev_mcs3 = 0;
unsigned long prev_mcs4 = 0;
unsigned long prev_mcs5 = 0;

const long interval1 = 50;
const long interval2 = 100;
const long interval3 = 500;
const long interval4 = 1000;
const long interval5 = 10000;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {
  unsigned long cur_mcs = micros();

  if (cur_mcs - prev_mcs1 >= interval1) {
    prev_mcs1 = cur_mcs;
    pin1_state = !pin1_state;
    digitalWrite(pin1, pin1_state);
  }

  if (cur_mcs - prev_mcs2 >= interval2) {
    prev_mcs2 = cur_mcs;
    pin2_state = !pin2_state;
    digitalWrite(pin2, pin2_state);
  }

  if (cur_mcs - prev_mcs3 >= interval3) {
    prev_mcs3 = cur_mcs;
    pin3_state = !pin3_state;
    digitalWrite(pin3, pin3_state);
  }

  if (cur_mcs - prev_mcs4 >= interval4) {
    prev_mcs4 = cur_mcs;
    pin4_state = !pin4_state;
    digitalWrite(pin4, pin4_state);
  }

  if (cur_mcs - prev_mcs5 >= interval5) {
    prev_mcs5 = cur_mcs;
    pin5_state = !pin5_state;
    digitalWrite(pin5, pin5_state);
  }
}
