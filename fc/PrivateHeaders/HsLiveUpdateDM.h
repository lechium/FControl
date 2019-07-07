//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsSRWebSocketDelegate.h"

@class HsDomain, HsHTTPBackoff, HsSRWebSocket, NSString, NSTimer;

@interface HsLiveUpdateDM : NSObject <HsSRWebSocketDelegate>
{
    HsSRWebSocket *_socket;	// 8 = 0x8
    NSTimer *_pingTimer;	// 16 = 0x10
    NSTimer *_typingTimer;	// 24 = 0x18
    NSTimer *_backoffTimer;	// 32 = 0x20
    HsHTTPBackoff *_backoff;	// 40 = 0x28
    _Bool _tokenRefreshed;	// 48 = 0x30
    NSString *_conversationServerId;	// 56 = 0x38
    HsDomain *_domain;	// 64 = 0x40
    id <HsPlatform> _platform;	// 72 = 0x48
    id <HsTypingIndicatorListener> _typingIndicatorListener;	// 80 = 0x50
}

@property __weak id <HsTypingIndicatorListener> typingIndicatorListener; // @synthesize typingIndicatorListener=_typingIndicatorListener;
- (void).cxx_destruct;	// IMP=0x0000000101362214
- (void)processTypingMessageForJson:(id)arg1 timeStamp:(long long)arg2;	// IMP=0x0000000101361e2c
- (void)processPingMessageForTimeout:(long long)arg1;	// IMP=0x0000000101361e20
- (void)webSocket:(id)arg1 HsDidReceiveMessageWithString:(id)arg2;	// IMP=0x0000000101361c08
- (void)webSocket:(id)arg1 HsdidCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;	// IMP=0x0000000101361b94
- (void)webSocket:(id)arg1 HsDidFailWithError:(id)arg2;	// IMP=0x0000000101361920
- (void)webSocketDidOpen:(id)arg1;	// IMP=0x00000001013616a4
- (void)startPingTimerWithTimeout:(long long)arg1;	// IMP=0x0000000101361620
- (void)startTypingTimerWithTimeout:(long long)arg1;	// IMP=0x000000010136159c
- (void)stopTimer:(id)arg1;	// IMP=0x0000000101361584
- (void)typingTimerDidExpire;	// IMP=0x00000001013614dc
- (void)pingTimerDidExpire;	// IMP=0x00000001013614cc
- (void)backoffForStatusCode:(int)arg1;	// IMP=0x00000001013612a8
- (void)openWebsocketWithConfig:(id)arg1;	// IMP=0x0000000101360f34
- (void)refreshConfig;	// IMP=0x0000000101360df4
- (void)open;	// IMP=0x0000000101360d50
- (void)stopConnection;	// IMP=0x0000000101360c34
- (void)startConnectionForConversationId:(id)arg1;	// IMP=0x0000000101360be0
- (id)initWithDomain:(id)arg1 platform:(id)arg2;	// IMP=0x00000001013609c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

