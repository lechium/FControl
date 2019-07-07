//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AV_Reachability : NSObject
{
    _Bool _alwaysReturnLocalWiFiStatus;	// 8 = 0x8
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x0000000101198b68
+ (id)reachabilityForInternetConnection;	// IMP=0x0000000101198b08
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x0000000101198a90
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x00000001011989d8
- (long long)currentReachabilityStatus;	// IMP=0x00000001011990a0
- (_Bool)connectionRequired;	// IMP=0x0000000101199068
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000101198de0
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000101198dd0
- (void)dealloc;	// IMP=0x0000000101198d3c
- (void)stopNotifier;	// IMP=0x0000000101198cf8
- (_Bool)startNotifier;	// IMP=0x0000000101198bec

@end
