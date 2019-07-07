//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSArray, NSNumber, NSString;

@interface AWSS3ListObjectsV2Output : AWSModel
{
    NSArray *_commonPrefixes;	// 8 = 0x8
    NSArray *_contents;	// 16 = 0x10
    NSString *_continuationToken;	// 24 = 0x18
    NSString *_delimiter;	// 32 = 0x20
    long long _encodingType;	// 40 = 0x28
    NSNumber *_isTruncated;	// 48 = 0x30
    NSNumber *_keyCount;	// 56 = 0x38
    NSNumber *_maxKeys;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSString *_nextContinuationToken;	// 80 = 0x50
    NSString *_prefix;	// 88 = 0x58
    NSString *_startAfter;	// 96 = 0x60
}

+ (id)encodingTypeJSONTransformer;	// IMP=0x0000000100c09394
+ (id)contentsJSONTransformer;	// IMP=0x0000000100c09350
+ (id)commonPrefixesJSONTransformer;	// IMP=0x0000000100c0930c
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c09188
@property(retain, nonatomic) NSString *startAfter; // @synthesize startAfter=_startAfter;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *nextContinuationToken; // @synthesize nextContinuationToken=_nextContinuationToken;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *maxKeys; // @synthesize maxKeys=_maxKeys;
@property(retain, nonatomic) NSNumber *keyCount; // @synthesize keyCount=_keyCount;
@property(retain, nonatomic) NSNumber *isTruncated; // @synthesize isTruncated=_isTruncated;
@property(nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property(retain, nonatomic) NSString *delimiter; // @synthesize delimiter=_delimiter;
@property(retain, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSArray *commonPrefixes; // @synthesize commonPrefixes=_commonPrefixes;
- (void).cxx_destruct;	// IMP=0x0000000100c09618

@end

