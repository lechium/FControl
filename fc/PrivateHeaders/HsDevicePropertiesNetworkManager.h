//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsSyncListener.h"

@class HsNetworkManager, HsSyncController, NSArray;

@interface HsDevicePropertiesNetworkManager : HsSyncListener
{
    HsNetworkManager *_networkManager;	// 8 = 0x8
    id <HsNetworkDataProvider> _dataProvider;	// 16 = 0x10
    id <HsNetworkResponseDelegate> _responseProvider;	// 24 = 0x18
    HsSyncController *_syncController;	// 32 = 0x20
    NSArray *_dependentDataTypes;	// 40 = 0x28
}

@property(retain) NSArray *dependentDataTypes; // @synthesize dependentDataTypes=_dependentDataTypes;
@property(nonatomic) __weak HsSyncController *syncController; // @synthesize syncController=_syncController;
@property(nonatomic) __weak id <HsNetworkResponseDelegate> responseProvider; // @synthesize responseProvider=_responseProvider;
@property(nonatomic) __weak id <HsNetworkDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak HsNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x0000000101345998
- (_Bool)isFullSyncEnabled;	// IMP=0x00000001013458a4
- (void)fullSync;	// IMP=0x0000000101345754
- (void)sync;	// IMP=0x0000000101345604
- (id)getDependentDataTypes;	// IMP=0x00000001013455f8
- (void)initWithDependentDataTypes;	// IMP=0x0000000101345544
- (id)initWithNetworkManager:(id)arg1 forDeviceController:(id)arg2 andSyncController:(id)arg3;	// IMP=0x000000010134530c

@end

