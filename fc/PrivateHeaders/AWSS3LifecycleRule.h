//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3AbortIncompleteMultipartUpload, AWSS3LifecycleExpiration, AWSS3LifecycleRuleFilter, AWSS3NoncurrentVersionExpiration, NSArray, NSString;

@interface AWSS3LifecycleRule : AWSModel
{
    AWSS3AbortIncompleteMultipartUpload *_abortIncompleteMultipartUpload;	// 8 = 0x8
    AWSS3LifecycleExpiration *_expiration;	// 16 = 0x10
    AWSS3LifecycleRuleFilter *_filter;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    AWSS3NoncurrentVersionExpiration *_noncurrentVersionExpiration;	// 40 = 0x28
    NSArray *_noncurrentVersionTransitions;	// 48 = 0x30
    NSString *_prefix;	// 56 = 0x38
    long long _status;	// 64 = 0x40
    NSArray *_transitions;	// 72 = 0x48
}

+ (id)transitionsJSONTransformer;	// IMP=0x0000000100c0657c
+ (id)statusJSONTransformer;	// IMP=0x0000000100c06438
+ (id)noncurrentVersionTransitionsJSONTransformer;	// IMP=0x0000000100c063f4
+ (id)noncurrentVersionExpirationJSONTransformer;	// IMP=0x0000000100c063b0
+ (id)filterJSONTransformer;	// IMP=0x0000000100c0636c
+ (id)expirationJSONTransformer;	// IMP=0x0000000100c06328
+ (id)abortIncompleteMultipartUploadJSONTransformer;	// IMP=0x0000000100c062e4
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c061a8
@property(retain, nonatomic) NSArray *transitions; // @synthesize transitions=_transitions;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSArray *noncurrentVersionTransitions; // @synthesize noncurrentVersionTransitions=_noncurrentVersionTransitions;
@property(retain, nonatomic) AWSS3NoncurrentVersionExpiration *noncurrentVersionExpiration; // @synthesize noncurrentVersionExpiration=_noncurrentVersionExpiration;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWSS3LifecycleRuleFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) AWSS3LifecycleExpiration *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) AWSS3AbortIncompleteMultipartUpload *abortIncompleteMultipartUpload; // @synthesize abortIncompleteMultipartUpload=_abortIncompleteMultipartUpload;
- (void).cxx_destruct;	// IMP=0x0000000100c06700

@end

