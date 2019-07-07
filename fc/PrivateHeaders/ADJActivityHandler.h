//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJActivityHandler.h"

@class ADJActivityState, ADJAttribution, ADJConfig, ADJDeviceInfo, ADJInternalState, ADJSessionParameters, ADJTimerCycle, ADJTimerOnce, NSData, NSObject<AdjustDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface ADJActivityHandler : NSObject <ADJActivityHandler>
{
    ADJAttribution *_attribution;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_internalQueue;	// 16 = 0x10
    id <ADJPackageHandler> _packageHandler;	// 24 = 0x18
    id <ADJAttributionHandler> _attributionHandler;	// 32 = 0x20
    id <ADJSdkClickHandler> _sdkClickHandler;	// 40 = 0x28
    ADJActivityState *_activityState;	// 48 = 0x30
    ADJTimerCycle *_foregroundTimer;	// 56 = 0x38
    ADJTimerOnce *_backgroundTimer;	// 64 = 0x40
    ADJInternalState *_internalState;	// 72 = 0x48
    ADJDeviceInfo *_deviceInfo;	// 80 = 0x50
    ADJTimerOnce *_delayStartTimer;	// 88 = 0x58
    ADJSessionParameters *_sessionParameters;	// 96 = 0x60
    id <ADJLogger> _logger;	// 104 = 0x68
    NSObject<AdjustDelegate> *_adjustDelegate;	// 112 = 0x70
    ADJConfig *_adjustConfig;	// 120 = 0x78
    NSData *_deviceTokenData;	// 128 = 0x80
    NSString *_basePath;	// 136 = 0x88
    NSString *_gdprPath;	// 144 = 0x90
}

+ (void)deleteSessionPartnerParameter;	// IMP=0x000000010076d7a8
+ (void)deleteSessionCallbackParameter;	// IMP=0x000000010076d78c
+ (void)deleteAttribution;	// IMP=0x000000010076d770
+ (void)deleteActivityState;	// IMP=0x000000010076d754
+ (void)deleteState;	// IMP=0x000000010076d6e8
+ (id)handlerWithConfig:(id)arg1 savedPreLaunch:(id)arg2;	// IMP=0x000000010076ac00
@property(copy, nonatomic) NSString *gdprPath; // @synthesize gdprPath=_gdprPath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy, nonatomic) NSData *deviceTokenData; // @synthesize deviceTokenData=_deviceTokenData;
@property(copy, nonatomic) ADJConfig *adjustConfig; // @synthesize adjustConfig=_adjustConfig;
@property(nonatomic) __weak NSObject<AdjustDelegate> *adjustDelegate; // @synthesize adjustDelegate=_adjustDelegate;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ADJSessionParameters *sessionParameters; // @synthesize sessionParameters=_sessionParameters;
@property(retain, nonatomic) ADJTimerOnce *delayStartTimer; // @synthesize delayStartTimer=_delayStartTimer;
@property(retain, nonatomic) ADJDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) ADJInternalState *internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) ADJTimerOnce *backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(retain, nonatomic) ADJTimerCycle *foregroundTimer; // @synthesize foregroundTimer=_foregroundTimer;
@property(retain, nonatomic) ADJActivityState *activityState; // @synthesize activityState=_activityState;
@property(retain, nonatomic) id <ADJSdkClickHandler> sdkClickHandler; // @synthesize sdkClickHandler=_sdkClickHandler;
@property(retain, nonatomic) id <ADJAttributionHandler> attributionHandler; // @synthesize attributionHandler=_attributionHandler;
@property(retain, nonatomic) id <ADJPackageHandler> packageHandler; // @synthesize packageHandler=_packageHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(copy, nonatomic) ADJAttribution *attribution; // @synthesize attribution=_attribution;
- (void).cxx_destruct;	// IMP=0x0000000100774ac0
- (_Bool)checkActivityStateI:(id)arg1;	// IMP=0x00000001007747ac
- (_Bool)checkEventI:(id)arg1 event:(id)arg2;	// IMP=0x00000001007746cc
- (_Bool)checkTransactionIdI:(id)arg1 transactionId:(id)arg2;	// IMP=0x000000010077449c
- (void)removeNotificationObserver;	// IMP=0x000000010077444c
- (void)addNotificationObserver;	// IMP=0x0000000100774374
- (void)preLaunchActionsI:(id)arg1 preLaunchActionsArray:(id)arg2;	// IMP=0x0000000100774244
- (void)resetSessionPartnerParametersI:(id)arg1;	// IMP=0x0000000100774150
- (void)resetSessionCallbackParametersI:(id)arg1;	// IMP=0x000000010077405c
- (void)removeSessionPartnerParameterI:(id)arg1 key:(id)arg2;	// IMP=0x0000000100773e20
- (void)removeSessionCallbackParameterI:(id)arg1 key:(id)arg2;	// IMP=0x0000000100773be4
- (void)addSessionPartnerParameterI:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000100773924
- (void)addSessionCallbackParameterI:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000100773664
- (void)updatePackagesI:(id)arg1;	// IMP=0x000000010077353c
- (void)sendFirstPackagesI:(id)arg1;	// IMP=0x00000001007733fc
- (void)delayStartI:(id)arg1;	// IMP=0x000000010077312c
- (void)backgroundTimerFiredI:(id)arg1;	// IMP=0x00000001007730c0
- (void)stopBackgroundTimerI:(id)arg1;	// IMP=0x0000000100773040
- (void)startBackgroundTimerI:(id)arg1;	// IMP=0x0000000100772f60
- (void)foregroundTimerFiredI:(id)arg1;	// IMP=0x0000000100772e60
- (void)stopForegroundTimerI:(id)arg1;	// IMP=0x0000000100772e1c
- (void)startForegroundTimerI:(id)arg1;	// IMP=0x0000000100772db0
- (void)setAskingAttributionI:(id)arg1 askingAttribution:(_Bool)arg2;	// IMP=0x0000000100772d2c
- (_Bool)toSendI:(id)arg1 sdkClickHandlerOnly:(_Bool)arg2;	// IMP=0x0000000100772c5c
- (_Bool)toSendI:(id)arg1;	// IMP=0x0000000100772c48
- (_Bool)pausedI:(id)arg1 sdkClickHandlerOnly:(_Bool)arg2;	// IMP=0x0000000100772b64
- (_Bool)pausedI:(id)arg1;	// IMP=0x0000000100772b50
- (void)resumeSendingI:(id)arg1;	// IMP=0x0000000100772a88
- (void)pauseSendingI:(id)arg1;	// IMP=0x000000010077298c
- (void)updateHandlersStatusAndSendI:(id)arg1;	// IMP=0x0000000100772818
- (void)readSessionPartnerParametersI:(id)arg1;	// IMP=0x0000000100772778
- (void)readSessionCallbackParametersI:(id)arg1;	// IMP=0x00000001007726d8
- (void)teardownAllSessionParametersS;	// IMP=0x0000000100772594
- (void)writeSessionPartnerParametersI:(id)arg1;	// IMP=0x0000000100772480
- (void)writeSessionCallbackParametersI:(id)arg1;	// IMP=0x000000010077236c
- (void)readAttribution;	// IMP=0x00000001007722ec
- (void)readActivityState;	// IMP=0x0000000100772230
- (void)teardownAttributionS;	// IMP=0x0000000100772190
- (void)writeAttributionI:(id)arg1;	// IMP=0x00000001007720a4
- (void)teardownActivityStateS;	// IMP=0x0000000100772004
- (void)writeActivityStateI:(id)arg1;	// IMP=0x0000000100771f18
- (_Bool)updateActivityStateI:(id)arg1 now:(double)arg2;	// IMP=0x0000000100771d80
- (_Bool)itHasToUpdatePackagesI:(id)arg1;	// IMP=0x0000000100771cb0
- (_Bool)isGdprForgottenI:(id)arg1;	// IMP=0x0000000100771c1c
- (_Bool)isEnabledI:(id)arg1;	// IMP=0x0000000100771b4c
- (void)setTrackingStateOptedOutI:(id)arg1;	// IMP=0x0000000100771a84
- (void)setGdprForgetMeI:(id)arg1;	// IMP=0x0000000100771728
- (void)setDeviceTokenI:(id)arg1 deviceToken:(id)arg2;	// IMP=0x000000010077132c
- (_Bool)trySetAttributionDeeplink:(id)arg1 withKey:(id)arg2 withValue:(id)arg3;	// IMP=0x0000000100771218
- (_Bool)readDeeplinkQueryStringI:(id)arg1 queryString:(id)arg2 adjustDeepLinks:(id)arg3 attribution:(id)arg4;	// IMP=0x0000000100770fd8
- (void)appWillOpenUrlI:(id)arg1 url:(id)arg2;	// IMP=0x0000000100770abc
- (void)checkStatusI:(id)arg1 pausingState:(_Bool)arg2 pausingMessage:(id)arg3 remainsPausedMessage:(id)arg4 unPausingMessage:(id)arg5;	// IMP=0x0000000100770910
- (_Bool)hasChangedStateI:(id)arg1 previousState:(_Bool)arg2 nextState:(_Bool)arg3 trueMessage:(id)arg4 falseMessage:(id)arg5;	// IMP=0x0000000100770838
- (void)setOfflineModeI:(id)arg1 offline:(_Bool)arg2;	// IMP=0x00000001007706f8
- (void)setEnabledI:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000001007703c0
- (_Bool)updateAttributionI:(id)arg1 attribution:(id)arg2;	// IMP=0x000000010077029c
- (void)updateAdidI:(id)arg1 adid:(id)arg2;	// IMP=0x00000001007701a0
- (void)prepareDeeplinkI:(id)arg1 responseData:(id)arg2;	// IMP=0x000000010076feac
- (void)launchAttributionResponseTasksI:(id)arg1 attributionResponseData:(id)arg2;	// IMP=0x000000010076fd1c
- (void)launchSdkClickResponseTasksI:(id)arg1 sdkClickResponseData:(id)arg2;	// IMP=0x000000010076fba4
- (void)launchSessionResponseTasksI:(id)arg1 sessionResponseData:(id)arg2;	// IMP=0x000000010076f7cc
- (void)launchEventResponseTasksI:(id)arg1 eventResponseData:(id)arg2;	// IMP=0x000000010076f574
- (void)eventI:(id)arg1 event:(id)arg2;	// IMP=0x000000010076f0f8
- (void)endI:(id)arg1;	// IMP=0x000000010076f038
- (void)checkAttributionStateI:(id)arg1;	// IMP=0x000000010076eee8
- (void)transferSessionPackageI:(id)arg1 now:(double)arg2;	// IMP=0x000000010076ecf8
- (void)trackNewSessionI:(double)arg1 withActivityHandler:(id)arg2;	// IMP=0x000000010076eb88
- (void)processSessionI:(id)arg1;	// IMP=0x000000010076e5c8
- (void)startI:(id)arg1;	// IMP=0x000000010076e4f4
- (void)initI:(id)arg1 preLaunchActionsArray:(id)arg2;	// IMP=0x000000010076d7c4
- (void)teardown;	// IMP=0x000000010076d344
- (id)getGdprPath;	// IMP=0x000000010076d334
- (id)getBasePath;	// IMP=0x000000010076d324
- (void)resetSessionPartnerParameters;	// IMP=0x000000010076d2a4
- (void)resetSessionCallbackParameters;	// IMP=0x000000010076d224
- (void)removeSessionPartnerParameter:(id)arg1;	// IMP=0x000000010076d124
- (void)removeSessionCallbackParameter:(id)arg1;	// IMP=0x000000010076d024
- (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;	// IMP=0x000000010076ceb4
- (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;	// IMP=0x000000010076cd44
- (void)sendFirstPackages;	// IMP=0x000000010076ccc4
- (void)backgroundTimerFired;	// IMP=0x000000010076cc44
- (void)foregroundTimerFired;	// IMP=0x000000010076cbc4
- (void)setAskingAttribution:(_Bool)arg1;	// IMP=0x000000010076cb04
- (void)saveAttributionDetailsI:(id)arg1 attributionDetails:(id)arg2;	// IMP=0x000000010076ca6c
- (void)sendIad3ClickPackage:(id)arg1 attributionDetails:(id)arg2;	// IMP=0x000000010076c7e8
- (void)setAttributionDetails:(id)arg1 error:(id)arg2 retriesLeft:(int)arg3;	// IMP=0x000000010076c344
- (void)setTrackingStateOptedOut;	// IMP=0x000000010076c2c4
- (void)setGdprForgetMe;	// IMP=0x000000010076c244
- (void)setDeviceToken:(id)arg1;	// IMP=0x000000010076c144
- (void)appWillOpenUrl:(id)arg1;	// IMP=0x000000010076c044
- (id)adid;	// IMP=0x000000010076bfb8
- (_Bool)isGdprForgotten;	// IMP=0x000000010076bfa8
- (_Bool)isEnabled;	// IMP=0x000000010076bf98
- (void)setOfflineMode:(_Bool)arg1;	// IMP=0x000000010076bed8
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000010076be18
- (void)launchAttributionResponseTasks:(id)arg1;	// IMP=0x000000010076bd18
- (void)launchSdkClickResponseTasks:(id)arg1;	// IMP=0x000000010076bc18
- (void)launchSessionResponseTasks:(id)arg1;	// IMP=0x000000010076bb18
- (void)launchEventResponseTasks:(id)arg1;	// IMP=0x000000010076ba18
- (void)finishedTracking:(id)arg1;	// IMP=0x000000010076b8f0
- (void)trackEvent:(id)arg1;	// IMP=0x000000010076b78c
- (void)applicationWillResignActive;	// IMP=0x000000010076b644
- (void)applicationDidBecomeActive;	// IMP=0x000000010076b4e8
- (id)initWithConfig:(id)arg1 savedPreLaunch:(id)arg2;	// IMP=0x000000010076ac84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

