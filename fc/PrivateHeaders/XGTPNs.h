//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XGTPNsProtocol.h"

@class NSString, XGGCDAsyncSocket, XGTPNsSocket;

@interface XGTPNs : NSObject <XGTPNsProtocol>
{
    XGGCDAsyncSocket *_socket;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    XGTPNsSocket *_socketDelegateObject;	// 24 = 0x18
}

+ (void)load;	// IMP=0x00000001014f8c60
@property(retain, nonatomic) XGTPNsSocket *socketDelegateObject; // @synthesize socketDelegateObject=_socketDelegateObject;
@property(nonatomic) __weak CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) XGGCDAsyncSocket *socket; // @synthesize socket=_socket;
- (void).cxx_destruct;	// IMP=0x00000001014f9058
- (void)dealloc;	// IMP=0x00000001014f8f64
- (void)send;	// IMP=0x00000001014f8f60
- (_Bool)connectToTPNs;	// IMP=0x00000001014f8e08
- (id)initWithParameter:(id)arg1 tpnsType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001014f8c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

