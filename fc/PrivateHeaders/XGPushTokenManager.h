//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString;

@interface XGPushTokenManager : NSObject
{
    id <XGPushTokenManagerDelegate> _delegate;	// 8 = 0x8
    NSData *_tokenData;	// 16 = 0x10
    NSMutableArray *_tpnsEventList;	// 24 = 0x18
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001014ed8a0
+ (id)defaultTokenManager;	// IMP=0x00000001014ed738
@property(retain, nonatomic) NSMutableArray *tpnsEventList; // @synthesize tpnsEventList=_tpnsEventList;
@property(retain, nonatomic) NSData *tokenData; // @synthesize tokenData=_tokenData;
@property(nonatomic) __weak id <XGPushTokenManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001014f4eb8
- (id)commonConditionCheck;	// IMP=0x00000001014f4b44
- (_Bool)checkIdentifier:(id)arg1 type:(unsigned long long)arg2 isBind:(_Bool)arg3;	// IMP=0x00000001014f4890
- (void)clearAllIdentifiers:(unsigned long long)arg1;	// IMP=0x00000001014f3ba0
- (void)updateBindedIdentifiers:(id)arg1 bindType:(unsigned long long)arg2;	// IMP=0x00000001014f282c
- (void)unbindWithIdentifers:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000001014f0fa0
- (void)bindWithIdentifiers:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000001014efb44
- (id)identifiersWithType:(unsigned long long)arg1;	// IMP=0x00000001014efa00
- (void)bindErrorWithIdentifier:(id)arg1 isBind:(_Bool)arg2 isSystemError:(_Bool)arg3 type:(unsigned long long)arg4 code:(long long)arg5;	// IMP=0x00000001014ef55c
- (void)bindTagWithIdentifier:(id)arg1 isBind:(_Bool)arg2;	// IMP=0x00000001014eeebc
- (void)bindAccountWithIdentifier:(id)arg1 isBind:(_Bool)arg2;	// IMP=0x00000001014ee81c
- (void)registerTokenToServer;	// IMP=0x00000001014eddec
- (void)bindDefualtCaseWithIdentifier:(id)arg1 withType:(unsigned long long)arg2 isBind:(_Bool)arg3;	// IMP=0x00000001014edbe8
- (void)unbindWithIdentifer:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000001014edb34
- (void)bindWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000001014eda80
@property(readonly, copy, nonatomic) NSString *deviceTokenString;
- (void)registerDeviceToken:(id)arg1;	// IMP=0x00000001014ed8f0
- (id)copy;	// IMP=0x00000001014ed8c8
- (id)init;	// IMP=0x00000001014ed858

@end

