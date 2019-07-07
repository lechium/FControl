//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKURLOpening.h"
#import "FBSDKWebDialogDelegate.h"

@class FBSDKKeychainStore, FBSDKLoginManagerLogger, NSSet, NSString, UIViewController;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening, FBSDKWebDialogDelegate>
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    FBSDKLoginManagerLogger *_logger;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    FBSDKKeychainStore *_keychainStore;	// 32 = 0x20
    unsigned long long _defaultAudience;	// 40 = 0x28
    unsigned long long _loginBehavior;	// 48 = 0x30
    UIViewController *_fromViewController;	// 56 = 0x38
    NSSet *_requestedPermissions;	// 64 = 0x40
}

+ (id)stringForChallenge;	// IMP=0x00000001006ecba8
+ (void)renewSystemCredentials:(CDUnknownBlockType)arg1;	// IMP=0x00000001006eb268
+ (void)initialize;	// IMP=0x00000001006ead4c
@property(readonly, nonatomic) NSSet *requestedPermissions; // @synthesize requestedPermissions=_requestedPermissions;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) unsigned long long loginBehavior; // @synthesize loginBehavior=_loginBehavior;
@property(nonatomic) unsigned long long defaultAudience; // @synthesize defaultAudience=_defaultAudience;
- (void).cxx_destruct;	// IMP=0x00000001006ed0d8
- (void)setRequestedPermissions:(id)arg1;	// IMP=0x00000001006ed014
- (void)setHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001006ecfd4
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;	// IMP=0x00000001006ecbc0
- (void)storeExpectedChallenge:(id)arg1;	// IMP=0x00000001006ecb30
- (void)logInWithBehavior:(unsigned long long)arg1;	// IMP=0x00000001006ec5cc
- (void)logInWithPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006ec454
- (id)logInParametersWithPermissions:(id)arg1 serverConfiguration:(id)arg2;	// IMP=0x00000001006ebfc0
- (id)loadExpectedChallenge;	// IMP=0x00000001006ebfa0
- (void)invokeHandler:(id)arg1 error:(id)arg2;	// IMP=0x00000001006ebe8c
- (void)determineRecentlyGrantedPermissions:(id *)arg1 recentlyDeclinedPermissions:(id *)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4;	// IMP=0x00000001006ebce0
- (void)completeAuthentication:(id)arg1 expectChallenge:(_Bool)arg2;	// IMP=0x00000001006eb778
- (void)assertPermissions:(id)arg1;	// IMP=0x00000001006eb534
- (_Bool)isPerformingLogin;	// IMP=0x00000001006eb51c
- (_Bool)validateLoginStartState;	// IMP=0x00000001006eb488
- (void)handleImplicitCancelOfLogIn;	// IMP=0x00000001006eb3cc
- (void)raiseLoginException:(id)arg1;	// IMP=0x00000001006eb3b0
- (void)logOut;	// IMP=0x00000001006eb22c
- (void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001006eb0d0
- (void)logInWithPublishPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006eb07c
- (void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001006eaf20
- (void)logInWithReadPermissions:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006eaecc
- (id)init;	// IMP=0x00000001006eadb8
- (_Bool)isAuthenticationURL:(id)arg1;	// IMP=0x00000001006edd10
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001006edccc
- (_Bool)canOpenURL:(id)arg1 forApplication:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x00000001006edb30
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;	// IMP=0x00000001006ed908
- (void)performBrowserLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006ed4e0
- (void)performNativeLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006ed150
- (void)fallbackToNativeBehavior;	// IMP=0x00000001006eeb0c
- (void)continueSystemLogInWithTokenString:(id)arg1 error:(id)arg2 state:(id)arg3;	// IMP=0x00000001006ee520
- (void)performSystemLogIn;	// IMP=0x00000001006ee08c
- (void)beginSystemLogIn;	// IMP=0x00000001006edd68
- (void)webDialogDidCancel:(id)arg1;	// IMP=0x00000001006eef60
- (void)webDialog:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001006eeec4
- (void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2;	// IMP=0x00000001006eed10
- (void)performWebLogInWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006eeba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

