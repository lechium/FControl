#import "FCDefines.h"
#import "FCControllerManager.h"
#import <GameController/GameController.h>
#import "NSObject+AssociatedObjects.h"
//#import "FingerTips/MBFingerTipWindow.h"


%hook GCController

+ (NSArray<GCController *> *)controllers {

    return nil;
    return %orig;
}

%end

%hook AppDelegate


- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    %log;
    NSLog(@"FControl: #### in application:didFinishLaunchingWithOptions");
    FCControllerManager *man = [FCControllerManager sharedManager];
    
    [man listenForControllers];
 


    return %orig;

}

%end