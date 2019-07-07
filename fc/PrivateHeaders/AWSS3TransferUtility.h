//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSService.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class AWSS3PreSignedURLBuilder, AWSS3TransferUtilityConfiguration, AWSServiceConfiguration, AWSSynchronizedMutableDictionary, NSString, NSURLSession;

@interface AWSS3TransferUtility : AWSService <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    AWSServiceConfiguration *_configuration;	// 8 = 0x8
    AWSS3TransferUtilityConfiguration *_transferUtilityConfiguration;	// 16 = 0x10
    AWSS3PreSignedURLBuilder *_preSignedURLBuilder;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    NSString *_sessionIdentifier;	// 40 = 0x28
    NSString *_temporaryDirectoryPath;	// 48 = 0x30
    AWSSynchronizedMutableDictionary *_taskDictionary;	// 56 = 0x38
    CDUnknownBlockType _backgroundURLSessionCompletionHandler;	// 64 = 0x40
}

+ (void)interceptApplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100c25cd4
+ (void)removeS3TransferUtilityForKey:(id)arg1;	// IMP=0x0000000100c2210c
+ (id)S3TransferUtilityForKey:(id)arg1;	// IMP=0x0000000100c21e98
+ (void)registerS3TransferUtilityWithConfiguration:(id)arg1 transferUtilityConfiguration:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000100c21d34
+ (void)registerS3TransferUtilityWithConfiguration:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100c21ce0
+ (id)defaultS3TransferUtility;	// IMP=0x0000000100c21a50
@property(copy, nonatomic) CDUnknownBlockType backgroundURLSessionCompletionHandler; // @synthesize backgroundURLSessionCompletionHandler=_backgroundURLSessionCompletionHandler;
@property(retain, nonatomic) AWSSynchronizedMutableDictionary *taskDictionary; // @synthesize taskDictionary=_taskDictionary;
@property(retain, nonatomic) NSString *temporaryDirectoryPath; // @synthesize temporaryDirectoryPath=_temporaryDirectoryPath;
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AWSS3PreSignedURLBuilder *preSignedURLBuilder; // @synthesize preSignedURLBuilder=_preSignedURLBuilder;
@property(retain, nonatomic) AWSS3TransferUtilityConfiguration *transferUtilityConfiguration; // @synthesize transferUtilityConfiguration=_transferUtilityConfiguration;
@property(retain, nonatomic) AWSServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;	// IMP=0x0000000100c26d00
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0000000100c26a08
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0000000100c26788
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x0000000100c26558
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100c25fe8
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100c25f78
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;	// IMP=0x0000000100c25efc
- (id)getDownloadTask:(id)arg1;	// IMP=0x0000000100c25aa0
- (id)getUploadTask:(id)arg1;	// IMP=0x0000000100c2586c
- (void)cleanUpTemporaryDirectory;	// IMP=0x0000000100c25378
- (id)getDownloadTasks;	// IMP=0x0000000100c24f20
- (id)getUploadTasks;	// IMP=0x0000000100c24ac8
- (id)getAllTasks;	// IMP=0x0000000100c24500
- (void)enumerateToAssignBlocksForUploadTask:(CDUnknownBlockType)arg1 downloadTask:(CDUnknownBlockType)arg2;	// IMP=0x0000000100c23df0
- (id)internalDownloadToURL:(id)arg1 bucket:(id)arg2 key:(id)arg3 expression:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100c235c0
- (id)downloadToURL:(id)arg1 bucket:(id)arg2 key:(id)arg3 expression:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100c23504
- (id)downloadDataFromBucket:(id)arg1 key:(id)arg2 expression:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100c23460
- (id)uploadFile:(id)arg1 bucket:(id)arg2 key:(id)arg3 contentType:(id)arg4 expression:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100c229e0
- (id)uploadData:(id)arg1 bucket:(id)arg2 key:(id)arg3 contentType:(id)arg4 expression:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100c22704
- (id)initWithConfiguration:(id)arg1 transferUtilityConfiguration:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000100c221b8
- (id)init;	// IMP=0x0000000100c22174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
