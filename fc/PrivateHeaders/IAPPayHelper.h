//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ILogDelegate.h"

@class NSMutableArray, NSString;

@interface IAPPayHelper : NSObject <ILogDelegate>
{
    NSMutableArray *_delegaters;	// 8 = 0x8
    NSMutableArray *_extendKeyValues;	// 16 = 0x10
    _Bool registered;	// 24 = 0x18
    id <IAPPayDelegate> Delegate;	// 32 = 0x20
    id <IAPGetProductListDelegate> GetProductDelagate;	// 40 = 0x28
}

+ (void)setIsEnLog:(_Bool)arg1;	// IMP=0x000000010052c134
+ (id)getVersion;	// IMP=0x000000010052bf94
+ (void)hideLoading:(_Bool)arg1;	// IMP=0x000000010052bf88
+ (void)setLocal:(id)arg1;	// IMP=0x000000010052bdd8
+ (_Bool)judgeIsCanPay;	// IMP=0x000000010052bc6c
+ (id)getIntanceIapHelp;	// IMP=0x000000010052bbac
@property(readonly, nonatomic) _Bool registered; // @synthesize registered;
@property(nonatomic) __weak id <IAPGetProductListDelegate> GetProductDelagate; // @synthesize GetProductDelagate;
@property(nonatomic) __weak id <IAPPayDelegate> Delegate; // @synthesize Delegate;
- (void).cxx_destruct;	// IMP=0x000000010052e60c
- (id)_constructExtendKeyValues;	// IMP=0x000000010052e3b8
- (void)_appendKeyValue2Extend:(id)arg1 value:(id)arg2;	// IMP=0x000000010052e254
- (id)_getValueFromVarItem:(id *)arg1 key:(id)arg2 thenDelete:(_Bool)arg3;	// IMP=0x000000010052de98
- (_Bool)checkMainThreadAndRegister:(_Bool)arg1;	// IMP=0x000000010052dccc
- (void)logwithMessage:(id)arg1;	// IMP=0x000000010052dc30
- (void)restoreCompletedTransactions:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withZoneId:(id)arg8 withVarItem:(id)arg9;	// IMP=0x000000010052d820
- (void)setParentViewController:(id)arg1;	// IMP=0x000000010052d590
- (void)uploadDeviceInfo:(id)arg1;	// IMP=0x000000010052d288
- (void)LaunchGoodsList:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withZoneId:(id)arg8 withVarItem:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(unsigned long long)arg11;	// IMP=0x000000010052ce94
- (_Bool)registerPay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withEnv:(id)arg8 withExtra:(id)arg9;	// IMP=0x000000010052ca54
- (void)pay:(id)arg1 withOpenid:(id)arg2 withOpenKey:(id)arg3 withSessionId:(id)arg4 withSessionType:(id)arg5 withPf:(id)arg6 withPfkey:(id)arg7 withPayItem:(id)arg8 withProductId:(id)arg9 withIsDepositGameCoin:(unsigned char)arg10 withProductType:(unsigned long long)arg11 withZoneId:(id)arg12 withVarItem:(id)arg13;	// IMP=0x000000010052c2b0
- (void)dealloc;	// IMP=0x000000010052bb54
- (id)init;	// IMP=0x000000010052bac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

