//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSArray, NSDictionary, NSString;

@interface AWSCognitoIdentityUnlinkIdentityInput : AWSRequest
{
    NSString *_identityId;	// 8 = 0x8
    NSDictionary *_logins;	// 16 = 0x10
    NSArray *_loginsToRemove;	// 24 = 0x18
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100be0c88
@property(retain, nonatomic) NSArray *loginsToRemove; // @synthesize loginsToRemove=_loginsToRemove;
@property(retain, nonatomic) NSDictionary *logins; // @synthesize logins=_logins;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
- (void).cxx_destruct;	// IMP=0x0000000100be0da0

@end
