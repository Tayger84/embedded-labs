
// Řízení LEDky tlačítkem
// Program zapíná a vypíná LEDku, když stiskneš tlačítko
// Autor: Josef Ďuriš - přepis z návodu
/*/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/*/

const int keyPin = 12; // číslo pinu tlačítka
const int ledPin = 13; // číslo pinu LEDky

void setup() {
    // nastavení pinu tlačítka jako vstupu
    pinMode(keyPin, INPUT);
    // nastavení pinu Ledky jako výstupu
    pinMode(ledPin, OUTPUT);
}

void loop() {
    // zachytává stav hodnoty pinu tlačítka
    // kontrola stisku tlačítka
    // pokud ano pak je stav pinu HIGH
    if(digitalRead(keyPin) == HIGH) {
        digitalWrite(ledPin, HIGH); // turn on LED
    } else {
        digitalWrite(ledPin, LOW); // turn off LED
    }
}