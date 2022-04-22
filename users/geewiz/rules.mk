SRC += $(USER_PATH)/geewiz.c
SRC += $(USER_PATH)/smart_caps.c

AUDIO_ENABLE = no           # Audio output on port C6
COMBO_ENABLE = yes          # Key combos
COMMAND_ENABLE = no         # Commands for debug and configuration
CONSOLE_ENABLE = no         # Console for debug
EXTRAKEY_ENABLE = yes       # Audio control and System control
LEADER_ENABLE = no          # Leader key
MIDI_ENABLE = no            # MIDI controls
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
UNICODE_ENABLE = no         # Unicode

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend

ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE        = yes
    endif
endif
