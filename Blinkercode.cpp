#include <Arduino.h>

int myFunction(int, int);

void setup(){
    int result = myFunction(2, 3);

    pinMode(LED_BUILTIN, OUTPUT);  

}

void loop(){
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);

    

    digitalWrite(12, LOW);
    delay(10);
    digitalWrite(12, HIGH);
    delay(10);
}