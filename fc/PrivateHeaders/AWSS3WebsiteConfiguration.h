//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSS3ErrorDocument, AWSS3IndexDocument, AWSS3RedirectAllRequestsTo, NSArray;

@interface AWSS3WebsiteConfiguration : AWSModel
{
    AWSS3ErrorDocument *_errorDocument;	// 8 = 0x8
    AWSS3IndexDocument *_indexDocument;	// 16 = 0x10
    AWSS3RedirectAllRequestsTo *_redirectAllRequestsTo;	// 24 = 0x18
    NSArray *_routingRules;	// 32 = 0x20
}

+ (id)routingRulesJSONTransformer;	// IMP=0x0000000100c1536c
+ (id)redirectAllRequestsToJSONTransformer;	// IMP=0x0000000100c15328
+ (id)indexDocumentJSONTransformer;	// IMP=0x0000000100c152e4
+ (id)errorDocumentJSONTransformer;	// IMP=0x0000000100c152a0
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100c151dc
@property(retain, nonatomic) NSArray *routingRules; // @synthesize routingRules=_routingRules;
@property(retain, nonatomic) AWSS3RedirectAllRequestsTo *redirectAllRequestsTo; // @synthesize redirectAllRequestsTo=_redirectAllRequestsTo;
@property(retain, nonatomic) AWSS3IndexDocument *indexDocument; // @synthesize indexDocument=_indexDocument;
@property(retain, nonatomic) AWSS3ErrorDocument *errorDocument; // @synthesize errorDocument=_errorDocument;
- (void).cxx_destruct;	// IMP=0x0000000100c15440

@end

