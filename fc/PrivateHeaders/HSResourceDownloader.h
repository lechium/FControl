//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSResourceDownloaderInterface.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface HSResourceDownloader : NSObject <HSResourceDownloaderInterface>
{
    id <HSResourceCache> _cache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 16 = 0x10
    NSOperationQueue *_downloadQueue;	// 24 = 0x18
    NSMutableDictionary *_downloadMergedOperations;	// 32 = 0x20
}

+ (id)defaultInstance;	// IMP=0x0000000101349e58
@property(retain, nonatomic) NSMutableDictionary *downloadMergedOperations; // @synthesize downloadMergedOperations=_downloadMergedOperations;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(retain, nonatomic) id <HSResourceCache> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;	// IMP=0x000000010134ba48
- (void)cancelDownloadForReceipt:(id)arg1;	// IMP=0x000000010134b5a4
- (id)removeMergedOperationForUrl:(id)arg1;	// IMP=0x000000010134b2fc
- (id)createNewDownloadOpertionForUrl:(id)arg1;	// IMP=0x000000010134b25c
- (id)downloadResourceForURL:(id)arg1 additionalInfo:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 handlerQueue:(id)arg5;	// IMP=0x000000010134a118
- (id)initWithCache:(id)arg1;	// IMP=0x0000000101349f68
- (id)init;	// IMP=0x0000000101349f10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
