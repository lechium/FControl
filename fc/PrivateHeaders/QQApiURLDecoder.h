//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface QQApiURLDecoder : NSObject
{
    NSString *_scheme;	// 8 = 0x8
    NSString *_host;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSDictionary *_queryItem;	// 32 = 0x20
}

+ (id)decoderWithUrl:(id)arg1;	// IMP=0x0000000100b350f8
@property(readonly, nonatomic) NSDictionary *queryItem; // @synthesize queryItem=_queryItem;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void)dealloc;	// IMP=0x0000000100b3505c
- (id)init;	// IMP=0x0000000100b34fe4

@end

