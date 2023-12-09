SRC += $(USER_PATH)/geewiz.c
SRC += $(USER_PATH)/smart_caps.c
SRC += $(USER_PATH)/features/achordion.c
SRC += users/callum/swapper.c

VPATH += keyboards/gboards/

EXTRAKEY_ENABLE = yes       # Audio control and System control
MOUSEKEY_ENABLE = yes

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend

ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE        = yes
    endif
endif
