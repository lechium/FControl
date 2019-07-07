ifeq ($(_THEOS_TARGET_LOADED),)
_THEOS_TARGET_LOADED := 1
THEOS_TARGET_NAME := appletv

_THEOS_TARGET_PLATFORM_NAME := appletvos
_THEOS_TARGET_PLATFORM_SDK_NAME := AppleTV
_THEOS_TARGET_PLATFORM_FLAG_NAME := tvos
_THEOS_TARGET_PLATFORM_SWIFT_NAME := apple-tvos
_THEOS_DARWIN_CAN_USE_MODULES := $(_THEOS_TRUE)

NEUTRAL_ARCH := arm64

_THEOS_TARGET_DEFAULT_OS_DEPLOYMENT_VERSION := 9.0

include $(THEOS_MAKE_PATH)/targets/_common/darwin_head.mk
include $(THEOS_MAKE_PATH)/targets/_common/darwin_tail.mk
endif