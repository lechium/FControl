//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURLSession, TWTRNetworkingPipelineQueue;

@interface TWTRNetworkingPipeline : NSObject
{
    id <TWTRNetworkingResponseValidating> _responseValidator;	// 8 = 0x8
    NSMutableDictionary *_userQueueLookupTable;	// 16 = 0x10
    TWTRNetworkingPipelineQueue *_guestQueue;	// 24 = 0x18
    NSURLSession *_URLSession;	// 32 = 0x20
}

@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly, nonatomic) TWTRNetworkingPipelineQueue *guestQueue; // @synthesize guestQueue=_guestQueue;
@property(readonly, nonatomic) NSMutableDictionary *userQueueLookupTable; // @synthesize userQueueLookupTable=_userQueueLookupTable;
@property(readonly, nonatomic) id <TWTRNetworkingResponseValidating> responseValidator; // @synthesize responseValidator=_responseValidator;
- (void).cxx_destruct;	// IMP=0x00000001008036dc
- (id)enqueueUserPackage:(id)arg1;	// IMP=0x00000001008035e8
- (id)enqueueGuestPackage:(id)arg1;	// IMP=0x0000000100803564
- (id)userQueueForUser:(id)arg1;	// IMP=0x0000000100803218
- (id)enqueueRequest:(id)arg1 sessionStore:(id)arg2 requestingUser:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100803090
- (id)enqueueRequest:(id)arg1 sessionStore:(id)arg2 requestingUser:(id)arg3;	// IMP=0x0000000100803010
- (id)enqueueRequest:(id)arg1 sessionStore:(id)arg2;	// IMP=0x0000000100802fac
- (id)initWithURLSession:(id)arg1 responseValidator:(id)arg2;	// IMP=0x0000000100802e28

@end
