//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface BeaconEventManager : NSObject
{
    _Bool _isOnlyWifiUpload;	// 8 = 0x8
    _Bool _isEventUploadClose;	// 9 = 0x9
    _Bool _isAccessTest;	// 10 = 0xa
    _Bool _isNetMonitorOnOff;	// 11 = 0xb
    _Bool _isEventUpOnOff;	// 12 = 0xc
    _Bool _isBizEventUpload;	// 13 = 0xd
    _Bool _isBackgroundUp;	// 14 = 0xe
    _Bool _isAtsEnable;	// 15 = 0xf
    NSArray *_onlyWifiUploadEvents;	// 16 = 0x10
    NSDictionary *_detail;	// 24 = 0x18
    NSArray *_noEncodeEvents;	// 32 = 0x20
}

+ (id)noEncodeEvents;	// IMP=0x00000001007b26c8
+ (_Bool)isAtsEnable;	// IMP=0x00000001007b2590
+ (void)setAtsEnable:(_Bool)arg1;	// IMP=0x00000001007b2548
+ (_Bool)isBackgroundUp;	// IMP=0x00000001007b2410
+ (void)setBackgroundUp:(_Bool)arg1;	// IMP=0x00000001007b23c8
+ (_Bool)isBizEventUpload;	// IMP=0x00000001007b2290
+ (void)setBizEventUpload:(_Bool)arg1;	// IMP=0x00000001007b2248
+ (_Bool)isEventUpOnOff;	// IMP=0x00000001007b2110
+ (void)setEventUpOnOff:(_Bool)arg1;	// IMP=0x00000001007b20c8
+ (_Bool)isNetMonitorOnOff;	// IMP=0x00000001007b1f90
+ (void)setNetMonitorOnOff:(_Bool)arg1;	// IMP=0x00000001007b1f48
+ (_Bool)isAccessTest;	// IMP=0x00000001007b1e10
+ (void)setAccessTest:(_Bool)arg1;	// IMP=0x00000001007b1dc8
+ (_Bool)isEventUploadClose;	// IMP=0x00000001007b1c90
+ (void)setEventUploadClose:(_Bool)arg1;	// IMP=0x00000001007b1c48
+ (_Bool)isSample:(id)arg1;	// IMP=0x00000001007b1b68
+ (_Bool)isUploadBySampleEvent:(id)arg1;	// IMP=0x00000001007b1a6c
+ (_Bool)isOnlyWifiUploadWithEvent:(id)arg1;	// IMP=0x00000001007b19cc
+ (void)setOnlyWifiUploadEvents:(id)arg1;	// IMP=0x00000001007b1960
+ (_Bool)isAllowUploadByWifi;	// IMP=0x00000001007b191c
+ (_Bool)isOnlyWifiUpload;	// IMP=0x00000001007b18d0
+ (void)setIsOnlyWifiUpload:(_Bool)arg1;	// IMP=0x00000001007b1888
+ (id)shareManager;	// IMP=0x00000001007b1744
@property(retain, nonatomic) NSArray *noEncodeEvents; // @synthesize noEncodeEvents=_noEncodeEvents;
@property(nonatomic) _Bool isAtsEnable; // @synthesize isAtsEnable=_isAtsEnable;
@property(nonatomic) _Bool isBackgroundUp; // @synthesize isBackgroundUp=_isBackgroundUp;
@property(nonatomic) _Bool isBizEventUpload; // @synthesize isBizEventUpload=_isBizEventUpload;
@property(nonatomic) _Bool isEventUpOnOff; // @synthesize isEventUpOnOff=_isEventUpOnOff;
@property(nonatomic) _Bool isNetMonitorOnOff; // @synthesize isNetMonitorOnOff=_isNetMonitorOnOff;
@property(nonatomic) _Bool isAccessTest; // @synthesize isAccessTest=_isAccessTest;
@property(nonatomic) _Bool isEventUploadClose; // @synthesize isEventUploadClose=_isEventUploadClose;
@property(retain, nonatomic) NSDictionary *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSArray *onlyWifiUploadEvents; // @synthesize onlyWifiUploadEvents=_onlyWifiUploadEvents;
@property(nonatomic) _Bool isOnlyWifiUpload; // @synthesize isOnlyWifiUpload=_isOnlyWifiUpload;
- (void).cxx_destruct;	// IMP=0x00000001007b2d00
- (id)init;	// IMP=0x00000001007b17f8

@end

