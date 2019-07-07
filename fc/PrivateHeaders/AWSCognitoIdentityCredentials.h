//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSString;

@interface AWSCognitoIdentityCredentials : AWSModel
{
    NSString *_accessKeyId;	// 8 = 0x8
    NSDate *_expiration;	// 16 = 0x10
    NSString *_secretKey;	// 24 = 0x18
    NSString *_sessionToken;	// 32 = 0x20
}

+ (id)expirationJSONTransformer;	// IMP=0x0000000100bde528
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bde464
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *accessKeyId; // @synthesize accessKeyId=_accessKeyId;
- (void).cxx_destruct;	// IMP=0x0000000100bde674

@end

