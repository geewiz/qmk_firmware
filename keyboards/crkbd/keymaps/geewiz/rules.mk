BOOTLOADER = atmel-dfu # Elite-C MCU

VPATH += keyboards/gboards/
SRC += process_records.c
SRC += smart_caps.c

COMBO_ENABLE = no           # Key combos
LEADER_ENABLE = no          # Leader key
RGBLIGHT_ENABLE     = yes   # Enable WS2812 RGB underlight.
OLED_DRIVER_ENABLE  = yes
EXTRAKEY_ENABLE = yes
LTO_ENABLE          = yes
