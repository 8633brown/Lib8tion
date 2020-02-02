#ifndef CONFIG_HPP
#define CONFIG_HPP

#define __INC_LED_SYSDEFS_H

#define FASTLED_NAMESPACE_BEGIN

#define FASTLED_NAMESPACE_END

#if defined(__MK20DX128__) || defined(__MK20DX256__) ||                        \
    defined(__MK66FX1M0__) || defined(__MK64FX512__)
#define FASTLED_TEENSY3
#endif

#if defined(__AVR_ATmega32U2__) || defined(__AVR_ATmega16U2__) ||              \
    defined(__AVR_ATmega8U2__) || defined(__AVR_AT90USB162__) ||               \
    defined(__AVR_ATtiny24__) || defined(__AVR_ATtiny44__) ||                  \
    defined(__AVR_ATtiny84__) || defined(__AVR_ATtiny25__) ||                  \
    defined(__AVR_ATtiny45__) || defined(__AVR_ATtiny85__) ||                  \
    defined(__AVR_ATtiny167__) || defined(__AVR_ATtiny87__) ||                 \
    defined(__AVR_ATtinyX41__) || defined(__AVR_ATtiny841__) ||                \
    defined(__AVR_ATtiny441__)
#define LIB8_ATTINY
#endif

#if defined(NRF51) || defined(__RFduino__) || defined(__Simblee__) ||          \
    defined(NRF52_SERIES) || defined(__MK20DX128__) ||                         \
    defined(__MK20DX256__) || defined(__MK66FX1M0__) ||                        \
    defined(__MK64FX512__) || defined(__MKL26Z64__) ||                         \
    defined(__IMXRT1062__) || defined(__SAM3X8E__) || defined(STM32F10X_MD) || \
    defined(__STM32F1__) || defined(__SAMD21G18A__) ||                         \
    defined(__SAMD21J18A__) || defined(__SAMD21E17A__) ||                      \
    defined(__SAMD21E18A__) || defined(__SAMD51G19A__) ||                      \
    defined(__SAMD51J19A__)
#define FASTLED_ARM
#endif

#if defined(ESP8266) || defined(ESP32)
#define FASTLED_HAS_MILLIS
#endif

// Use this toggle whether or not to use the 'fixed' FastLED scale8.  The
// initial scale8 had a problem where scale8(255,255) would give you 254.  This
// is now fixed, and that fix is enabled by default.  However, if for some
// reason you have code that is not working right as a result of this (e.g. code
// that was expecting the old scale8 behavior) you can disable it here.
#define FASTLED_SCALE8_FIXED 1
// #define FASTLED_SCALE8_FIXED 0

// Use this toggle whether to use 'fixed' FastLED pixel blending, including
// ColorFromPalette. The prior pixel blend functions had integer-rounding math
// errors that led to small errors being inadvertently added to the low bits of
// blended colors, including colors retrieved from color palettes using
// LINEAR_BLEND.  This is now fixed, and the fix is enabled by default. However,
// if for some reason you wish to run with the old blending, including the
// integer rounding and color errors, you can disable the bugfix here.
#define FASTLED_BLEND_FIXED 1
// #define FASTLED_BLEND_FIXED 0

#endif // CONFIG_HPP
