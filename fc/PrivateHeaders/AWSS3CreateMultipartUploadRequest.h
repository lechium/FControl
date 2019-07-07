//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSDate, NSDictionary, NSString;

@interface AWSS3CreateMultipartUploadRequest : AWSRequest
{
    long long _ACL;	// 8 = 0x8
    NSString *_bucket;	// 16 = 0x10
    NSString *_cacheControl;	// 24 = 0x18
    NSString *_contentDisposition;	// 32 = 0x20
    NSString *_contentEncoding;	// 40 = 0x28
    NSString *_contentLanguage;	// 48 = 0x30
    NSString *_contentType;	// 56 = 0x38
    NSDate *_expires;	// 64 = 0x40
    NSString *_grantFullControl;	// 72 = 0x48
    NSString *_grantRead;	// 80 = 0x50
    NSString *_grantReadACP;	// 88 = 0x58
    NSString *_grantWriteACP;	// 96 = 0x60
    NSString *_key;	// 104 = 0x68
    NSDictionary *_metadata;	// 112 = 0x70
    long long _requestPayer;	// 120 = 0x78
    NSString *_SSECustomerAlgorithm;	// 128 = 0x80
    NSString *_SSECustomerKey;	// 136 = 0x88
    NSString *_SSECustomerKeyMD5;	// 144 = 0x90
    NSString *_SSEKMSKeyId;	// 152 = 0x98
    long long _serverSideEncryption;	// 160 = 0xa0
    long long _storageClass;	// 168 = 0xa8
    NSString *_websiteRedirectLocation;	// 176 = 0xb0
}

+ (id)storageClassJSONTransformer;	// IMP=0x0000000100bfbfbc
+ (id)serverSideEncryptionJSONTransformer;	// IMP=0x0000000100bfbe78
+ (id)requestPayerJSONTransformer;	// IMP=0x0000000100bfbda0
+ (id)expiresJSONTransformer;	// IMP=0x0000000100bfbd40
+ (id)ACLJSONTransformer;	// IMP=0x0000000100bfba7c
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x0000000100bfb828
@property(retain, nonatomic) NSString *websiteRedirectLocation; // @synthesize websiteRedirectLocation=_websiteRedirectLocation;
@property(nonatomic) long long storageClass; // @synthesize storageClass=_storageClass;
@property(nonatomic) long long serverSideEncryption; // @synthesize serverSideEncryption=_serverSideEncryption;
@property(retain, nonatomic) NSString *SSEKMSKeyId; // @synthesize SSEKMSKeyId=_SSEKMSKeyId;
@property(retain, nonatomic) NSString *SSECustomerKeyMD5; // @synthesize SSECustomerKeyMD5=_SSECustomerKeyMD5;
@property(retain, nonatomic) NSString *SSECustomerKey; // @synthesize SSECustomerKey=_SSECustomerKey;
@property(retain, nonatomic) NSString *SSECustomerAlgorithm; // @synthesize SSECustomerAlgorithm=_SSECustomerAlgorithm;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *grantWriteACP; // @synthesize grantWriteACP=_grantWriteACP;
@property(retain, nonatomic) NSString *grantReadACP; // @synthesize grantReadACP=_grantReadACP;
@property(retain, nonatomic) NSString *grantRead; // @synthesize grantRead=_grantRead;
@property(retain, nonatomic) NSString *grantFullControl; // @synthesize grantFullControl=_grantFullControl;
@property(retain, nonatomic) NSDate *expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *contentLanguage; // @synthesize contentLanguage=_contentLanguage;
@property(retain, nonatomic) NSString *contentEncoding; // @synthesize contentEncoding=_contentEncoding;
@property(retain, nonatomic) NSString *contentDisposition; // @synthesize contentDisposition=_contentDisposition;
@property(retain, nonatomic) NSString *cacheControl; // @synthesize cacheControl=_cacheControl;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(nonatomic) long long ACL; // @synthesize ACL=_ACL;
- (void).cxx_destruct;	// IMP=0x0000000100bfc454

@end

