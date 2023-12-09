SRC += $(USER_PATH)/geewiz.c
SRC += $(USER_PATH)/smart_caps.c

AUDIO_ENABLE = no           # Audio output on port C6
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
COMBO_ENABLE = yes          # Key combos
COMMAND_ENABLE = no         # Commands for debug and configuration
CONSOLE_ENABLE = no         # Console for debug
DYNAMIC_MACRO_ENABLE = yes  # Dynamic macros
EXTRAKEY_ENABLE = yes       # Audio control and System control
LEADER_ENABLE = yes         # Leader key
MIDI_ENABLE = no            # MIDI controls
MOUSEKEY_ENABLE = no        # Mouse keys
NKRO_ENABLE = no            # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
UNICODE_ENABLE = no         # Unicode

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend

ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE        = yes
    endif
endif
