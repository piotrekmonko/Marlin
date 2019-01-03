
#define CMD_BUZZ                0xfa
#define CMD_NEO_OFF             0xfb
// color presets
#define CMD_NEO_COLOR_WHITE     0xea
#define CMD_NEO_COLOR_RED       0xeb
#define CMD_NEO_COLOR_GREEN     0xec
#define CMD_NEO_COLOR_BLUE      0xed
// color values, sent as a sequence of 3 chars of red, green, blue components
#define CMD_NEO_COLOR_COMPONENTS              0xee
#define CMD_NEO_COLOR_COMPONENT_RED           0xe0
#define CMD_NEO_COLOR_COMPONENT_GREEN         0xe1
#define CMD_NEO_COLOR_COMPONENT_BLUE          0xe2

void i2c_led_setup();
void i2c_led_set_color(uint8_t r, uint8_t g, uint8_t b);
void i2c_led_buzz();