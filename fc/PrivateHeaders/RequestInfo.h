//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPaymentTransaction, SKProduct;

@interface RequestInfo : NSObject
{
    NSString *url;	// 8 = 0x8
    NSString *requestKey;	// 16 = 0x10
    NSString *openid;	// 24 = 0x18
    NSString *openKey;	// 32 = 0x20
    NSString *session_id;	// 40 = 0x28
    NSString *session_type;	// 48 = 0x30
    NSString *pf;	// 56 = 0x38
    NSString *pfkey;	// 64 = 0x40
    double ts;	// 72 = 0x48
    NSString *appid;	// 80 = 0x50
    NSString *productid;	// 88 = 0x58
    unsigned long long producttype;	// 96 = 0x60
    NSString *payitem;	// 104 = 0x68
    NSData *receipt;	// 112 = 0x70
    NSString *billno;	// 120 = 0x78
    NSString *amt;	// 128 = 0x80
    int keyType;	// 136 = 0x88
    int changeKeyType;	// 140 = 0x8c
    NSString *currencyType;	// 144 = 0x90
    NSString *from;	// 152 = 0x98
    NSString *zoneid;	// 160 = 0xa0
    _Bool isChangeKey;	// 168 = 0xa8
    _Bool isDepositGameCoin;	// 169 = 0xa9
    NSString *varItem;	// 176 = 0xb0
    NSString *applicationUserName;	// 184 = 0xb8
    SKPaymentTransaction *skpaymentTransaction;	// 192 = 0xc0
    SKProduct *product;	// 200 = 0xc8
    int quantity;	// 208 = 0xd0
    _Bool isReprovide;	// 212 = 0xd4
    int _KeyType;	// 216 = 0xd8
    unsigned long long productType;	// 224 = 0xe0
    NSDictionary *context;	// 232 = 0xe8
    NSString *_metadata;	// 240 = 0xf0
    NSMutableArray *_provideProductIds;	// 248 = 0xf8
    NSMutableDictionary *_dictFailedProductIds;	// 256 = 0x100
    NSDictionary *_provideDict;	// 264 = 0x108
    unsigned long long _launchGoodsSource;	// 272 = 0x110
    NSString *_cy;	// 280 = 0x118
    unsigned long long _homes;	// 288 = 0x120
}

@property(nonatomic) unsigned long long homes; // @synthesize homes=_homes;
@property(retain, nonatomic) NSString *cy; // @synthesize cy=_cy;
@property(nonatomic) unsigned long long launchGoodsSource; // @synthesize launchGoodsSource=_launchGoodsSource;
@property(nonatomic) int KeyType; // @synthesize KeyType=_KeyType;
@property(retain, nonatomic) NSDictionary *provideDict; // @synthesize provideDict=_provideDict;
@property(readonly, nonatomic) NSMutableDictionary *dictFailedProductIds; // @synthesize dictFailedProductIds=_dictFailedProductIds;
@property(readonly, nonatomic) NSMutableArray *provideProductIds; // @synthesize provideProductIds=_provideProductIds;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context;
@property(nonatomic) _Bool isReprovide; // @synthesize isReprovide;
@property(retain, nonatomic) SKProduct *Product; // @synthesize Product=product;
@property(retain, nonatomic) SKPaymentTransaction *SkpaymentTransaction; // @synthesize SkpaymentTransaction=skpaymentTransaction;
@property(copy, nonatomic) NSString *ApplicationUserName; // @synthesize ApplicationUserName=applicationUserName;
@property(copy, nonatomic) NSString *VarItem; // @synthesize VarItem=varItem;
@property(nonatomic) _Bool IsDepositGameCoin; // @synthesize IsDepositGameCoin=isDepositGameCoin;
@property(nonatomic) _Bool IsChangeKey; // @synthesize IsChangeKey=isChangeKey;
@property(copy, nonatomic) NSString *Zoneid; // @synthesize Zoneid=zoneid;
@property(readonly, nonatomic) int Quantity; // @synthesize Quantity=quantity;
@property(copy, nonatomic) NSString *CurrencyType; // @synthesize CurrencyType=currencyType;
@property(nonatomic) int ChangeKeyType; // @synthesize ChangeKeyType=changeKeyType;
@property(copy, nonatomic) NSString *Amt; // @synthesize Amt=amt;
@property(copy, nonatomic) NSString *Billno; // @synthesize Billno=billno;
@property(retain, nonatomic) NSData *Receipt; // @synthesize Receipt=receipt;
@property(copy, nonatomic) NSString *Payitem; // @synthesize Payitem=payitem;
@property(nonatomic) unsigned long long ProductType; // @synthesize ProductType=productType;
@property(retain, nonatomic) NSString *Productid; // @synthesize Productid=productid;
@property(copy, nonatomic) NSString *Appid; // @synthesize Appid=appid;
@property(nonatomic) double Ts; // @synthesize Ts=ts;
@property(copy, nonatomic) NSString *Pfkey; // @synthesize Pfkey=pfkey;
@property(copy, nonatomic) NSString *Pf; // @synthesize Pf=pf;
@property(copy, nonatomic) NSString *Session_type; // @synthesize Session_type=session_type;
@property(copy, nonatomic) NSString *Session_id; // @synthesize Session_id=session_id;
@property(copy, nonatomic) NSString *OpenKey; // @synthesize OpenKey=openKey;
@property(copy, nonatomic) NSString *Openid; // @synthesize Openid=openid;
@property(copy, nonatomic) NSString *RequestKey; // @synthesize RequestKey=requestKey;
@property(copy, nonatomic) NSString *Url; // @synthesize Url=url;
- (void).cxx_destruct;	// IMP=0x0000000100525a48
- (void)dealloc;	// IMP=0x0000000100525404
- (id)init;	// IMP=0x000000010052534c

@end

