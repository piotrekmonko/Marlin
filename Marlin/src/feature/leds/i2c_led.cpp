#ifdef I2C_LED
#ifdef I2C_LED_ADDR
// #include "../../inc/MarlinConfigPre.h"
#include "../../inc/MarlinConfig.h"

#include <Wire.h>
#include "i2c_led.h"
#define WireChann Wire

void i2c_led_setup() {
    // WireChann.begin();
    // WireChann.setClock(100000);
}

void i2c_led_set_color(uint8_t r, uint8_t g, uint8_t b) {
    WireChann.beginTransmission(I2C_LED_ADDR);
    WireChann.write(CMD_NEO_COLOR_COMPONENTS);
    WireChann.write(r);
    WireChann.write(g);
    WireChann.write(b);
    WireChann.endTransmission();
}

void i2c_led_buzz() {
    WireChann.beginTransmission(I2C_LED_ADDR);
    WireChann.write(CMD_BUZZ);
    WireChann.endTransmission();
}

#endif
#endif