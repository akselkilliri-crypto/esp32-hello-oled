#include <Arduino.h>
#include <GyverOLED.h>

// OLED на аппаратном I2C: SDA=21, SCL=22
GyverOLED<SSD1306_128x64, OLED_BUFFER> oled;

void setup() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("Initializing OLED...");

    // Инициализация OLED
    oled.init();

    // Вывод текста
    oled.clear();
    oled.setCursor(0, 25);      // Строка 3 (0–7)
    oled.print("Hello World");  // Только латиница!
    oled.update();

    Serial.println("OLED ready");
}

void loop() {
    // Ничего не делаем — надпись остаётся
}
