//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSPollerDelegate.h"
#import "HsPollerController.h"

@class HsCorePoller, HsDomain, NSObject<OS_dispatch_queue>, NSString;

@interface HsConversationInboxPollerController : NSObject <HsPollerController, HSPollerDelegate>
{
    id <HsPlatform> _platform;	// 8 = 0x8
    HsDomain *_domain;	// 16 = 0x10
    HsCorePoller *_poller;	// 24 = 0x18
    unsigned long long _currentPollerType;	// 32 = 0x20
    id <HsPollListener> _pollListener;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long currentPollerType; // @synthesize currentPollerType=_currentPollerType;
- (void).cxx_destruct;	// IMP=0x000000010144721c
- (void)didStopPoller:(id)arg1;	// IMP=0x0000000101447168
- (void)readyToStartPoller:(id)arg1 after:(double)arg2;	// IMP=0x0000000101446f50
- (void)completedPoller:(id)arg1 withStatus:(long long)arg2;	// IMP=0x0000000101446e88
- (void)stopPoller;	// IMP=0x0000000101446dc4
- (void)eventOccured:(unsigned long long)arg1;	// IMP=0x0000000101446d50
- (void)switchToPollerType:(unsigned long long)arg1;	// IMP=0x0000000101446acc
- (void)addListener:(id)arg1;	// IMP=0x00000001014469a8
- (void)setDomain:(id)arg1;	// IMP=0x0000000101446994
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 pollListener:(id)arg3;	// IMP=0x0000000101446864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
