//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ADJEventFailure : NSObject
{
    _Bool _willRetry;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_timeStamp;	// 24 = 0x18
    NSString *_adid;	// 32 = 0x20
    NSString *_eventToken;	// 40 = 0x28
    NSDictionary *_jsonResponse;	// 48 = 0x30
}

+ (id)eventFailureResponseData;	// IMP=0x000000010078bc4c
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(nonatomic) _Bool willRetry; // @synthesize willRetry=_willRetry;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010078c0a0
- (id)description;	// IMP=0x000000010078be9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010078bc7c
- (id)init;	// IMP=0x000000010078bbe4

@end
