//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSString;

@interface AWSS3DeleteObjectTaggingRequest : AWSRequest
{
    NSString *_bucket;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_versionId;	// 24 = 0x18
}

+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfd7a8
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;	// IMP=0x0000000100bfd8c0

@end
