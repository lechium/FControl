//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKApplicationDelegate.h"

#import "AdjustDelegate.h"

@interface IMSDKApplicationDelegate (IMSDKAdjust) <AdjustDelegate>
+ (void)handleUniversalLink:(id)arg1;	// IMP=0x000000010067e78c
+ (void)load;	// IMP=0x000000010067db10
- (_Bool)isOpenDeeplink;	// IMP=0x000000010067eaac
- (_Bool)adjustDeeplinkResponse:(id)arg1;	// IMP=0x000000010067e954
- (_Bool)adjust_application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010067e5c8
- (_Bool)adjust_application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x000000010067e3d8
- (_Bool)adjust_application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 withGameSecret:(id)arg3;	// IMP=0x000000010067ddd4
- (void)dealloc;	// IMP=0x000000010067dd14
@end

