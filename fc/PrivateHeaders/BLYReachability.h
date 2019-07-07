//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface BLYReachability : BLYAbstractModule
{
    _Bool _didInited;	// 8 = 0x8
    unsigned int _flags;	// 12 = 0xc
    struct __SCNetworkReachability *_networkReachability;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_synchronizationQueue;	// 24 = 0x18
    NSMutableArray *_listenersArray;	// 32 = 0x20
}

+ (id)sharedReachability;	// IMP=0x000000010072f734
+ (unsigned long long)_reachabilityStateForFlags:(unsigned int)arg1;	// IMP=0x000000010072f61c
+ (id)constructSelector;	// IMP=0x000000010072f610
@property(nonatomic) _Bool didInited; // @synthesize didInited=_didInited;
@property(retain, nonatomic) NSMutableArray *listenersArray; // @synthesize listenersArray=_listenersArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void).cxx_destruct;	// IMP=0x0000000100730514
- (void)_startMonitoringReachabilityWithURL:(id)arg1;	// IMP=0x000000010073027c
@property(readonly, nonatomic) unsigned long long currentState;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (void)_notifyAllListeners;	// IMP=0x000000010072fcb0
- (void)removeAllSubscribers;	// IMP=0x000000010072fc0c
- (void)removeSubscriber:(id)arg1;	// IMP=0x000000010072f9d4
- (void)addSubscriber:(id)arg1;	// IMP=0x000000010072f8a4
- (void)dealloc;	// IMP=0x000000010072f82c
- (id)initWithURL:(id)arg1;	// IMP=0x000000010072f65c
- (_Bool)disableModule;	// IMP=0x000000010072f5ec
- (_Bool)enableModule;	// IMP=0x000000010072f5c8

@end
