//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsUserResourceManagerInterface.h"

@class HSDiskFileManager, NSString;

@interface HSUserResourceManager : NSObject <HsUserResourceManagerInterface>
{
    id <HSResourceDownloaderInterface> _downloader;	// 8 = 0x8
    HSDiskFileManager *_diskfileManager;	// 16 = 0x10
}

+ (id)defaultInstance;	// IMP=0x0000000101477c84
@property(retain, nonatomic) HSDiskFileManager *diskfileManager; // @synthesize diskfileManager=_diskfileManager;
@property(retain, nonatomic) id <HSResourceDownloaderInterface> downloader; // @synthesize downloader=_downloader;
- (void).cxx_destruct;	// IMP=0x00000001014787b8
- (id)baseStorageDirectoryByAppendingPath:(id)arg1 forResourceType:(unsigned long long)arg2;	// IMP=0x00000001014786c4
- (_Bool)resourceName:(id)arg1 ofType:(unsigned long long)arg2 existsWithError:(id *)arg3;	// IMP=0x00000001014785c4
- (void)deleteResourceForResourceName:(id)arg1 ofType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000101478510
- (id)getResourceURLForResourceName:(id)arg1 ofType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000101478428
- (id)getResourceDataForResourceName:(id)arg1 ofType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000101478258
- (id)saveResourceData:(id)arg1 ofType:(unsigned long long)arg2 additionalInfo:(id)arg3 error:(id *)arg4;	// IMP=0x0000000101478030
- (void)cancelDownloadForReceipt:(id)arg1;	// IMP=0x0000000101477fc4
- (id)retrieveResourceWithURL:(id)arg1 additionalInfo:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 handlerQueue:(id)arg5;	// IMP=0x0000000101477ec4
- (id)initWithDownloader:(id)arg1 filemanager:(id)arg2;	// IMP=0x0000000101477e1c
- (id)initWithDownloader:(id)arg1;	// IMP=0x0000000101477d9c
- (id)init;	// IMP=0x0000000101477d3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

