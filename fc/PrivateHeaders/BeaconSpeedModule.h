//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BeaconAnalyticsModule.h"

@class BeaconModuleStrategy;

@interface BeaconSpeedModule : NSObject <BeaconAnalyticsModule>
{
    _Bool userEnabled;	// 8 = 0x8
    BeaconModuleStrategy *ms;	// 16 = 0x10
    BeaconModuleStrategy *moduleStrategy;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001007e77bc
@property(retain, nonatomic) BeaconModuleStrategy *moduleStrategy; // @synthesize moduleStrategy;
@property(nonatomic) _Bool userEnabled; // @synthesize userEnabled;
- (void).cxx_destruct;	// IMP=0x00000001007e89e8
- (_Bool)uploadModuleHistoryData;	// IMP=0x00000001007e85d0
- (_Bool)executeFunction;	// IMP=0x00000001007e7e10
- (_Bool)isEnabled;	// IMP=0x00000001007e7e04
- (void)enableModule;	// IMP=0x00000001007e7dc8
- (void)disableModule;	// IMP=0x00000001007e7d90
- (_Bool)checkAndEnable;	// IMP=0x00000001007e7a6c
- (id)getModuleUploadPersistTypes;	// IMP=0x00000001007e79a8
- (int)moduleKey;	// IMP=0x00000001007e79a0
- (id)init;	// IMP=0x00000001007e7844

@end
