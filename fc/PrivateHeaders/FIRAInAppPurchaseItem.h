//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FIRAInAppPurchaseItem : NSObject
{
    _Bool _freeTrial;	// 8 = 0x8
    NSString *_subscriptionExpirationDateIA5String;	// 16 = 0x10
    NSString *_productID;	// 24 = 0x18
    NSString *_originalTransactionID;	// 32 = 0x20
    NSString *_transactionID;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSString *originalTransactionID; // @synthesize originalTransactionID=_originalTransactionID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *subscriptionExpirationDateIA5String; // @synthesize subscriptionExpirationDateIA5String=_subscriptionExpirationDateIA5String;
@property(nonatomic, getter=isFreeTrial) _Bool freeTrial; // @synthesize freeTrial=_freeTrial;
- (void).cxx_destruct;	// IMP=0x00000001008dcde0

@end
