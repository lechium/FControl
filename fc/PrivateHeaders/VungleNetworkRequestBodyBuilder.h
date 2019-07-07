//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, VungleDeviceInformationProvider, VungleNetworkManager, VunglePublisherInformation, VungleVDUIDProvider;

@interface VungleNetworkRequestBodyBuilder : NSObject
{
    VungleNetworkManager *_networkManager;	// 8 = 0x8
    VunglePublisherInformation *_publisherInformation;	// 16 = 0x10
    VungleDeviceInformationProvider *_deviceInformationProvider;	// 24 = 0x18
    VungleVDUIDProvider *_VDUIDProvider;	// 32 = 0x20
    NSArray *_placements;	// 40 = 0x28
    NSArray *_placementReferences;	// 48 = 0x30
}

@property(retain, nonatomic) NSArray *placementReferences; // @synthesize placementReferences=_placementReferences;
@property(retain, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property(retain, nonatomic) VungleVDUIDProvider *VDUIDProvider; // @synthesize VDUIDProvider=_VDUIDProvider;
@property(retain, nonatomic) VungleDeviceInformationProvider *deviceInformationProvider; // @synthesize deviceInformationProvider=_deviceInformationProvider;
@property(retain, nonatomic) VunglePublisherInformation *publisherInformation; // @synthesize publisherInformation=_publisherInformation;
@property(retain, nonatomic) VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
- (void).cxx_destruct;	// IMP=0x0000000100aef0ec
- (id)buildExtensionParameters;	// IMP=0x0000000100aeefdc
- (id)buildSUserParameters;	// IMP=0x0000000100aeed74
- (id)buildSystemParameters;	// IMP=0x0000000100aeecb8
- (id)buildRequestParameters;	// IMP=0x0000000100aeec80
- (id)buildDeviceParameters;	// IMP=0x0000000100aee868
- (id)buildApplicationParameters;	// IMP=0x0000000100aee65c
- (id)buildRequestBody;	// IMP=0x0000000100aee484
- (id)initWithNetworkManager:(id)arg1 publisherInformation:(id)arg2;	// IMP=0x0000000100aee364

@end
