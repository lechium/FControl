//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIROptions, NSString;

@interface FIRApp : NSObject
{
    _Bool _alreadySentConfigureNotification;	// 8 = 0x8
    _Bool _alreadySentDeleteNotification;	// 9 = 0x9
    FIROptions *_options;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    CDUnknownBlockType _getTokenImplementation;	// 32 = 0x20
    CDUnknownBlockType _getUIDImplementation;	// 40 = 0x28
}

+ (_Bool)validateAppIDFingerprint:(id)arg1 withVersion:(id)arg2;	// IMP=0x00000001008fbf4c
+ (_Bool)validateAppIDFormat:(id)arg1 withVersion:(id)arg2;	// IMP=0x00000001008fbdf8
+ (id)actualBundleID;	// IMP=0x00000001008fbd9c
+ (_Bool)validateAppID:(id)arg1;	// IMP=0x00000001008fbb70
+ (_Bool)isDefaultAppConfigured;	// IMP=0x00000001008fb934
+ (id)errorForInvalidAppID;	// IMP=0x00000001008fb840
+ (id)errorForSubspecConfigurationFailureWithDomain:(id)arg1 errorCode:(long long)arg2 service:(id)arg3 reason:(id)arg4;	// IMP=0x00000001008fb6cc
+ (id)errorForMissingOptions;	// IMP=0x00000001008fb5d8
+ (void)sendNotificationsToSDKs:(id)arg1;	// IMP=0x00000001008fb404
+ (void)addAppToAppDictionary:(id)arg1;	// IMP=0x00000001008fadb8
+ (void)resetApps;	// IMP=0x00000001008faa50
+ (id)allApps;	// IMP=0x00000001008fa9b4
+ (id)appNamed:(id)arg1;	// IMP=0x00000001008fa8e8
+ (id)defaultApp;	// IMP=0x00000001008fa8a0
+ (void)configureWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000001008fa57c
+ (void)configureDefaultAppWithOptions:(id)arg1 sendingNotifications:(_Bool)arg2;	// IMP=0x00000001008fa304
+ (void)configureWithOptions:(id)arg1;	// IMP=0x00000001008fa294
+ (void)configure;	// IMP=0x00000001008fa0cc
@property(copy, nonatomic) CDUnknownBlockType getUIDImplementation; // @synthesize getUIDImplementation=_getUIDImplementation;
@property(copy, nonatomic) CDUnknownBlockType getTokenImplementation; // @synthesize getTokenImplementation=_getTokenImplementation;
@property(nonatomic) _Bool alreadySentDeleteNotification; // @synthesize alreadySentDeleteNotification=_alreadySentDeleteNotification;
@property(nonatomic) _Bool alreadySentConfigureNotification; // @synthesize alreadySentConfigureNotification=_alreadySentConfigureNotification;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x00000001008fc380
- (void)sendLogsWithServiceName:(id)arg1 version:(id)arg2 error:(id)arg3;	// IMP=0x00000001008fc110
- (id)expectedBundleID;	// IMP=0x00000001008fc0f8
- (_Bool)isAppIDValid;	// IMP=0x00000001008fba80
- (id)getUID;	// IMP=0x00000001008fba28
- (void)checkExpectedBundleID;	// IMP=0x00000001008fb948
@property(readonly, copy, nonatomic) FIROptions *options; // @synthesize options=_options;
- (_Bool)configureCore;	// IMP=0x00000001008fb118
- (void)getTokenForcingRefresh:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;	// IMP=0x00000001008fb0e4
- (id)initInstanceWithName:(id)arg1 options:(id)arg2;	// IMP=0x00000001008fafa0
- (void)deleteApp:(CDUnknownBlockType)arg1;	// IMP=0x00000001008faa94

@end

