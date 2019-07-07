//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSAbstractCognitoCredentialsProviderHelper.h"

@class AWSCognitoIdentity, AWSExecutor, NSObject<OS_dispatch_semaphore>;

@interface AWSCognitoCredentialsProviderHelper : AWSAbstractCognitoCredentialsProviderHelper
{
    _Bool _useEnhancedFlow;	// 40 = 0x28
    _Bool _hasClearedIdentityId;	// 41 = 0x29
    int _count;	// 44 = 0x2c
    AWSCognitoIdentity *_cognitoIdentity;	// 48 = 0x30
    AWSExecutor *_executor;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 64 = 0x40
}

@property _Bool hasClearedIdentityId; // @synthesize hasClearedIdentityId=_hasClearedIdentityId;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property int count; // @synthesize count=_count;
@property(retain, nonatomic) AWSExecutor *executor; // @synthesize executor=_executor;
@property(retain, nonatomic) AWSCognitoIdentity *cognitoIdentity; // @synthesize cognitoIdentity=_cognitoIdentity;
@property(nonatomic) _Bool useEnhancedFlow; // @synthesize useEnhancedFlow=_useEnhancedFlow;
- (void).cxx_destruct;	// IMP=0x0000000100ba23b8
- (id)getIdentityId;	// IMP=0x0000000100ba1adc
- (id)logins;	// IMP=0x0000000100ba16fc
- (id)token;	// IMP=0x0000000100ba05f8
- (id)identityProviderName;	// IMP=0x0000000100ba05cc
- (id)initWithRegionType:(long long)arg1 identityPoolId:(id)arg2 useEnhancedFlow:(_Bool)arg3 identityProviderManager:(id)arg4;	// IMP=0x0000000100ba03e4

@end

