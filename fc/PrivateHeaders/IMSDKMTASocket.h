//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKMTAGCDAsyncSocketDelegate.h"

@class IMSDKMTAGCDAsyncSocket, NSData, NSMutableArray, NSMutableData, NSString;

@interface IMSDKMTASocket : NSObject <IMSDKMTAGCDAsyncSocketDelegate>
{
    struct dispatch_queue_s *task_queue;	// 8 = 0x8
    NSMutableData *readBuf;	// 16 = 0x10
    _Bool readHeaderComplete;	// 24 = 0x18
    _Bool readComplete;	// 25 = 0x19
    IMSDKMTAGCDAsyncSocket *mtaSocket;	// 32 = 0x20
    _Bool isConnecting;	// 40 = 0x28
    _Bool isSending;	// 41 = 0x29
    NSData *magic;	// 48 = 0x30
    NSData *ver;	// 56 = 0x38
    NSData *config;	// 64 = 0x40
    long long bodyLen;	// 72 = 0x48
    NSMutableArray *jsonEventsQueue;	// 80 = 0x50
    NSMutableArray *sendCallbackQueue;	// 88 = 0x58
    id _jsonEvents;	// 96 = 0x60
    CDUnknownBlockType _sendCallback;	// 104 = 0x68
}

+ (id)getInstance;	// IMP=0x0000000100669010
@property(copy, nonatomic) CDUnknownBlockType sendCallback; // @synthesize sendCallback=_sendCallback;
@property(retain, nonatomic) id jsonEvents; // @synthesize jsonEvents=_jsonEvents;
- (void).cxx_destruct;	// IMP=0x000000010066b060
- (void)handleSendError;	// IMP=0x000000010066ac38
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;	// IMP=0x000000010066abf8
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;	// IMP=0x000000010066a88c
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;	// IMP=0x000000010066a888
- (double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;	// IMP=0x000000010066a84c
- (double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;	// IMP=0x000000010066a810
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;	// IMP=0x000000010066a790
- (void)startSocket:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010066a610
- (_Bool)isEqualToMagic:(id)arg1;	// IMP=0x000000010066a600
- (void)handleBodyResult:(id)arg1 configData:(id)arg2;	// IMP=0x0000000100669fb4
- (id)filterBodyData:(id)arg1 configData:(id)arg2;	// IMP=0x0000000100669e68
- (void)closeBuffer;	// IMP=0x0000000100669dd8
- (void)tcpRequest:(id)arg1;	// IMP=0x0000000100669cd0
- (id)getSendData:(id)arg1;	// IMP=0x0000000100669a8c
- (void)sendEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001006698ac
- (void)send:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001006696ac
- (void)sendData;	// IMP=0x00000001006691d4
- (void)initConfig;	// IMP=0x0000000100669168
- (void)initVer;	// IMP=0x00000001006690fc
- (void)initMagic;	// IMP=0x0000000100669090
- (id)init;	// IMP=0x0000000100668e70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
