//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XGTPNsSocketProtocol.h"

@class NSString;

@interface XGTPNsSocket : NSObject <XGTPNsSocketProtocol>
{
    _Bool _isNeedResend;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    unsigned long long _tpnsType;	// 24 = 0x18
}

@property _Bool isNeedResend; // @synthesize isNeedResend=_isNeedResend;
@property unsigned long long tpnsType; // @synthesize tpnsType=_tpnsType;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;	// IMP=0x00000001014cde44
- (id)generatePublicReq;	// IMP=0x00000001014cda54
- (id)generateMSDKReq;	// IMP=0x00000001014cd800
- (void)sendSecond:(id)arg1;	// IMP=0x00000001014ccd5c
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;	// IMP=0x00000001014cc870
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;	// IMP=0x00000001014cc86c
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;	// IMP=0x00000001014cc828
- (id)initWithType:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001014cc67c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

