//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3InventoryS3BucketDestination;

@interface AWSS3InventoryDestination : AWSModel
{
    AWSS3InventoryS3BucketDestination *_s3BucketDestination;	// 8 = 0x8
}

+ (id)s3BucketDestinationJSONTransformer;	// IMP=0x0000000100c05764
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c056ec
@property(retain, nonatomic) AWSS3InventoryS3BucketDestination *s3BucketDestination; // @synthesize s3BucketDestination=_s3BucketDestination;
- (void).cxx_destruct;	// IMP=0x0000000100c057cc

@end

