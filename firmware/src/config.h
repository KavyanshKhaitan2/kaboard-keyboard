#define WS2812_DI_PIN GP28

#define ENCODER_A_PINS { GP26 }
#define ENCODER_B_PINS { GP27 }
#define ENCODER_DIRECTION_FLIP

/* Hardware Mapping */
#define RGB_DI_PIN GP0          // The pin connected to your LED 'Data In'
#define RGB_MATRIX_LED_COUNT 98 // Matches your highest index (97) + 1
#define DRIVER_LED_TOTAL RGB_MATRIX_LED_COUNT

/* RGB Matrix Options */
#define RGB_MATRIX_CENTER {112, 32} // The physical center of your board (224/2, 64/2)
#define RGB_MATRIX_KEYPRESSES       // Enables reactive typing effects
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYRELEASES          // Optional: animations that trigger on key up

/* Power & Performance */
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // Limits current draw (0-255)
#define RGB_MATRIX_STARTUP_VAL 120        // Default brightness on plug-in
#define RGB_MATRIX_LED_FLUSH_LIMIT 16     // Limits refresh rate to save CPU (16ms = 60fps)

#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN          // Flows from center to edges
#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL        // Rotating "fan" of color
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL          // Spiral pattern from center
#define ENABLE_RGB_MATRIX_DUAL_BEACON           // Two rotating searchlights
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE // Light stays on for a moment
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE        // Fades out over time
#define ENABLE_RGB_MATRIX_SPLASH                // Single ripple from keypress
#define ENABLE_RGB_MATRIX_MULTISPLASH           // Allows multiple ripples at once
#define ENABLE_RGB_MATRIX_SOLID_SPLASH          // Solid color ripple
/* Sleep/Suspend Behavior */
#define RGB_DISABLE_WHEN_USB_SUSPENDED true // Turn off lights when PC sleeps
#define RGB_MATRIX_LED_PROCESS_LIMIT 5      // How many LEDs to process per "tick" (performance)

/* Indicator Settings */
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 20 // How fast heatmap fades
