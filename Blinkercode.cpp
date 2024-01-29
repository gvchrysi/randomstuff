#include <Arduino.h>

int myFunction(int, int);

int x = 0; 

void setup(){
    int result = myFunction(2, 3);

    pinMode(LED_BUILTIN, OUTPUT);  

}

void loop(){
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);

    
    int y = x + 10;
    digitalWrite(12, LOW);
    delay(y);
    digitalWrite(12, HIGH);
    delay(y);
}
