ARCHS = arm64e armv7 armv7s arm64
TARGET = iphone
export GO_EASY_ON_ME=1
export SDKVERSION=12.1
THEOS_DEVICE_IP=192.168.0.7
DEBUG=0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = FControl 
FControl_FILES = fc.xm NSObject+AssociatedObjects.m KIF/UIEvent+KIFAdditions.m KIF/UIView-KIFAdditions.m KIF/CGGeometry-KIFAdditions.m KIF/UIScreen+KIFAdditions.m KIF/UIWindow-KIFAdditions.m KIF/IOHIDEvent+KIF.m KIF/UITouch-KIFAdditions.m KIF/NSError-KIFAdditions.m KIF/UIApplication-KIFAdditions.m KIF/UIView-Debugging.m FCControllerManager.m #FingerTips/MBFingerTipWindow.m
FControl_FILES += PureLayout/ALView+PureLayout.m PureLayout/NSArray+PureLayout.m PureLayout/NSLayoutConstraint+PureLayout.m
FControl_FILES += FCPrefTableViewController.m FCControlListTableViewController.m UIWindow+Additions.m
FControl_FILES += RKDropdownAlert/RKDropdownAlert.m NSDictionary+nullRemoval.m
FControl_LIBRARIES = substrate
FControl_FRAMEWORKS = Foundation IOKit GameController
FControl_CFLAGS += -I.-IRKDropdownAlert -IPureLayout -IKIF -fobjc-arc -miphoneos-version-min=9.0
FControl_LDFLAGS = -miphoneos-version-min=9.0 -undefined dynamic_lookup
#FControl_CODESIGN_FLAGS=-Slibrespring.xml

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 FIFAMobile"
