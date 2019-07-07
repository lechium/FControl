//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class AWSNetworkingRequest, NSNumber, NSURL;

@interface AWSRequest : AWSModel
{
    CDUnknownBlockType _uploadProgress;	// 8 = 0x8
    CDUnknownBlockType _downloadProgress;	// 16 = 0x10
    NSURL *_downloadingFileURL;	// 24 = 0x18
    AWSNetworkingRequest *_internalRequest;	// 32 = 0x20
    NSNumber *_shouldWriteDirectly;	// 40 = 0x28
}

@property(nonatomic) NSNumber *shouldWriteDirectly; // @synthesize shouldWriteDirectly=_shouldWriteDirectly;
@property(retain, nonatomic) AWSNetworkingRequest *internalRequest; // @synthesize internalRequest=_internalRequest;
@property(retain, nonatomic) NSURL *downloadingFileURL; // @synthesize downloadingFileURL=_downloadingFileURL;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
- (void).cxx_destruct;	// IMP=0x0000000100be27f4
- (id)dictionaryValue;	// IMP=0x0000000100be2648
- (id)pause;	// IMP=0x0000000100be25f0
- (id)cancel;	// IMP=0x0000000100be2598
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (id)init;	// IMP=0x0000000100be23fc

@end
