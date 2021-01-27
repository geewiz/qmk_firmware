# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#
#

EXTRAKEY_ENABLE = yes # Enables audio control and System control
LTO_ENABLE      = yes # Reduces compiled size of firmware
COMBO_ENABLE    = yes # Chorded key combinations
LEADER_ENABLE   = yes # Leader key

VPATH += keyboards/gboards/
SRC += process_records.c
SRC += smart_caps.c

# Disable as many features as possible
TAP_DANCE_ENABLE				=	no	  	# Enables the tap dance feature
MOUSEKEY_ENABLE					=	no  	# Enables usage of keyboard as mouse
BOOTMAGIC_ENABLE				=	no	    # Not required for CG_TOGG which is the only bootmagic feature I use
DYNAMIC_MACRO_ENABLE			=	no 		# Enables dynamic macros
COMMAND_ENABLE					=	no 		# Commands for debug and configuration
AUDIO_ENABLE					=	no		# Enables any onboard speakers
KEY_LOCK_ENABLE					=	no
CONSOLE_ENABLE					=	no
VELOCIKEY_ENABLE				=	no
STENO_ENABLE					=	no
TERMINAL_ENABLE					=	no
GRAVE_ESC_ENABLE				=	no
SPACE_CADET_ENABLE				=	no
