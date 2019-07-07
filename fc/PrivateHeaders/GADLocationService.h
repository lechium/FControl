//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, GADLocation, NSObject<OS_dispatch_queue>, NSString;

@interface GADLocationService : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    GADLocation *_location;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_locationDataQueue;	// 24 = 0x18
    _Bool _featureEnabled;	// 32 = 0x20
    _Bool _publisherAuthorized;	// 33 = 0x21
}

+ (id)sharedInstance;	// IMP=0x00000001009c1998
- (void).cxx_destruct;	// IMP=0x00000001009c2318
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001009c2294
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000001009c2080
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00000001009c1ff0
- (void)setPublisherAuthorized:(_Bool)arg1;	// IMP=0x00000001009c1f48
- (void)setFeatureEnabled:(_Bool)arg1;	// IMP=0x00000001009c1ea0
- (void)updateLocation;	// IMP=0x00000001009c1e28
- (void)disable;	// IMP=0x00000001009c1d6c
- (void)startUpdatingLocation;	// IMP=0x00000001009c1c58
@property(readonly, copy, nonatomic) GADLocation *location;
- (id)init;	// IMP=0x00000001009c1a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

