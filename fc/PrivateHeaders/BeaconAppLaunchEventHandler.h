//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BeaconAppLaunchEventHandler : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000001007af764
- (id)createAppLaunchEventParam:(_Bool)arg1;	// IMP=0x00000001007afa1c
- (id)createAppLaunchEventParam;	// IMP=0x00000001007afa0c
- (void)recordAppLaunchEvent:(_Bool)arg1;	// IMP=0x00000001007af80c
- (void)recordAppHotLaunchEvent;	// IMP=0x00000001007af7fc
- (void)recordAppColdLaunchEvent;	// IMP=0x00000001007af7ec

@end

