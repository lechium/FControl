//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKLoginDelegate.h"

@class NSString;

@interface IMSDKLoginQQManager : NSObject <IMSDKLoginDelegate>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100b18104
+ (id)sharedInstance;	// IMP=0x0000000100b17fa0
- (_Bool)isSupportApi;	// IMP=0x0000000100b18fdc
- (_Bool)isInstalled;	// IMP=0x0000000100b18fc8
- (id)channelID;	// IMP=0x0000000100b18f9c
- (void)logout;	// IMP=0x0000000100b18f40
- (void)bindWithSubChannel:(id)arg1 extra:(id)arg2 complete:(CDUnknownBlockType)arg3;	// IMP=0x0000000100b18e90
- (void)checkAndLoginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b18e28
- (void)loginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;	// IMP=0x0000000100b18dc0
- (void)loginQQWithPermissions:(id)arg1 actionType:(int)arg2 handle:(CDUnknownBlockType)arg3;	// IMP=0x0000000100b18168
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100b18154
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100b1812c
- (id)initSingleton;	// IMP=0x0000000100b1807c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
