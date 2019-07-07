//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BeaconBaseInterface : NSObject
{
}

+ (void)setAtsEnable:(_Bool)arg1;	// IMP=0x00000001007af750
+ (void)setBackgroundUp:(_Bool)arg1;	// IMP=0x00000001007af73c
+ (void)setBizEventUpload:(_Bool)arg1;	// IMP=0x00000001007af728
+ (void)setEventUpOnOff:(_Bool)arg1;	// IMP=0x00000001007af714
+ (void)setAccessTest:(_Bool)arg1;	// IMP=0x00000001007af700
+ (void)setEventUploadClose:(_Bool)arg1;	// IMP=0x00000001007af6ec
+ (void)enableSDKQuaUpload:(_Bool)arg1;	// IMP=0x00000001007af6d8
+ (void)onlyWifiUploadEvents:(id)arg1;	// IMP=0x00000001007af6c4
+ (void)isOnlyWifiUpload:(_Bool)arg1;	// IMP=0x00000001007af6b0
+ (void)setAdditionalInfo:(id)arg1;	// IMP=0x00000001007af640
+ (_Bool)setEnableBeaconReport:(_Bool)arg1;	// IMP=0x00000001007af5e8
+ (_Bool)setAnalyticsServer:(id)arg1;	// IMP=0x00000001007af570
+ (_Bool)onRender:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af534
+ (_Bool)onRefresh:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af4f8
+ (_Bool)onWrite:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af4bc
+ (_Bool)onStart:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af480
+ (_Bool)onWriteBlog:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af444
+ (_Bool)onUploadPicture:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af408
+ (_Bool)onLogin:(_Bool)arg1 elapse:(long long)arg2 size:(long long)arg3 params:(id)arg4;	// IMP=0x00000001007af3cc
+ (_Bool)setDayMaxSpeedTrackCount:(int)arg1;	// IMP=0x00000001007af3c4
+ (_Bool)setStrategyForMaxPkgSize:(int)arg1 dbMaxSize:(int)arg2;	// IMP=0x00000001007aeffc
+ (_Bool)enableModuleFunctionBeforeSeverStrategy:(_Bool)arg1;	// IMP=0x00000001007aefa4
+ (_Bool)setDayMaxUpFlow:(long long)arg1;	// IMP=0x00000001007aef4c
+ (_Bool)cleanNetFlowData;	// IMP=0x00000001007aee98
+ (long long)getToDayUsedNetFlow;	// IMP=0x00000001007aee14
+ (long long)getCurrentMonthTotalNetFlow;	// IMP=0x00000001007aed90
+ (_Bool)enableNetFlowRecord:(_Bool)arg1;	// IMP=0x00000001007aecbc
+ (_Bool)setDBPath:(id)arg1;	// IMP=0x00000001007aec40
+ (_Bool)setDBPathAndReBuild:(id)arg1 error:(id)arg2;	// IMP=0x00000001007aeb9c
+ (void)setGatewayIp:(id)arg1;	// IMP=0x00000001007aeb18
+ (void)setAppVersion:(id)arg1;	// IMP=0x00000001007aea58
+ (void)setContact:(id)arg1;	// IMP=0x00000001007ae9d4
+ (void)setChannelId:(id)arg1;	// IMP=0x00000001007ae854
+ (id)getQQ;	// IMP=0x00000001007ae7f8
+ (void)setQQ:(id)arg1;	// IMP=0x00000001007ae788
+ (id)getSessionid;	// IMP=0x00000001007ae72c
+ (void)setSessionid:(id)arg1;	// IMP=0x00000001007ae6bc
+ (id)getQIMEI;	// IMP=0x00000001007ae4f8
+ (void)setQIMEI:(id)arg1;	// IMP=0x00000001007ae474
+ (void)setUserDefinedId:(id)arg1;	// IMP=0x00000001007ae470
+ (void)setAppId:(id)arg1;	// IMP=0x00000001007ae3b0
+ (void)setUserId:(id)arg1;	// IMP=0x00000001007ae218
+ (void)setGUID:(id)arg1;	// IMP=0x00000001007ae194
+ (void)setAppKey:(id)arg1;	// IMP=0x00000001007adfe8
+ (void)heartEventUpload;	// IMP=0x00000001007adfa0
+ (void)setUserRealEventDurationSecond:(int)arg1;	// IMP=0x00000001007ade40
+ (_Bool)setRealTimeEventUploadDuration:(int)arg1;	// IMP=0x00000001007adce4
+ (_Bool)setRealTimeEventUploaMaxCount:(int)arg1;	// IMP=0x00000001007adba0
+ (_Bool)onDirectUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 isOnlyWifiUpload:(_Bool)arg6;	// IMP=0x00000001007ad69c
+ (_Bool)onDirectUserAction:(id)arg1 isImmediately:(_Bool)arg2 isSucceed:(_Bool)arg3 elapse:(long long)arg4 size:(long long)arg5 params:(id)arg6;	// IMP=0x00000001007ad5dc
+ (_Bool)onDirectUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;	// IMP=0x00000001007ad55c
+ (_Bool)onUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 isOnlyWifiUpload:(_Bool)arg6;	// IMP=0x00000001007ad058
+ (_Bool)onUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;	// IMP=0x00000001007acfd8
+ (_Bool)registRealTimeEventDataUploadNotifier:(id)arg1;	// IMP=0x00000001007acefc
+ (_Bool)registMixDataUploadNotifier:(id)arg1;	// IMP=0x00000001007ace20
+ (id)getRealTimeEventDataUploader;	// IMP=0x00000001007acd84
+ (id)getMixDataUploader;	// IMP=0x00000001007acce8
+ (_Bool)enableAnalyticsWithoutNetwork:(id)arg1 gatewayIP:(id)arg2;	// IMP=0x00000001007ac70c
+ (_Bool)enableAnalytics:(id)arg1 gatewayIP:(id)arg2;	// IMP=0x00000001007ac438
+ (void)setSynchServerTimerDelay:(int)arg1;	// IMP=0x00000001007ac2ec
+ (_Bool)enableEventRecord:(_Bool)arg1;	// IMP=0x00000001007ac25c
+ (id)getSDKVersion;	// IMP=0x00000001007ac200
+ (int)getSDKStatus;	// IMP=0x00000001007ac1ac
+ (void)setLogLevel:(int)arg1;	// IMP=0x00000001007ac19c

@end
