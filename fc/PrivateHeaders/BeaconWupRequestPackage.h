//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconJceObjectV2.h"

@class NSData, NSString;

@interface BeaconWupRequestPackage : BeaconJceObjectV2
{
    BOOL _jcev2_p_0_r_platformId;	// 8 = 0x8
    BOOL _jcev2_p_7_r_encryType;	// 9 = 0x9
    BOOL _jcev2_p_8_r_zipType;	// 10 = 0xa
    int _jcev2_p_5_r_cmd;	// 12 = 0xc
    NSString *_jcev2_p_1_o_appkey;	// 16 = 0x10
    NSString *_jcev2_p_2_o_appVersion;	// 24 = 0x18
    NSString *_jcev2_p_3_o_sdkId;	// 32 = 0x20
    NSString *_jcev2_p_4_o_sdkVersion;	// 40 = 0x28
    NSData *_jcev2_p_6_o_sBuffer;	// 48 = 0x30
    NSString *_jcev2_p_9_o_model;	// 56 = 0x38
    NSString *_jcev2_p_10_o_osVersion;	// 64 = 0x40
    NSString *_jcev2_p_11_o_reserved;	// 72 = 0x48
}

+ (id)jceType;	// IMP=0x00000001007a9ff8
@property(retain, nonatomic, getter=jce_reserved, setter=setJce_reserved:) NSString *jcev2_p_11_o_reserved; // @synthesize jcev2_p_11_o_reserved=_jcev2_p_11_o_reserved;
@property(retain, nonatomic, getter=jce_osVersion, setter=setJce_osVersion:) NSString *jcev2_p_10_o_osVersion; // @synthesize jcev2_p_10_o_osVersion=_jcev2_p_10_o_osVersion;
@property(retain, nonatomic, getter=jce_model, setter=setJce_model:) NSString *jcev2_p_9_o_model; // @synthesize jcev2_p_9_o_model=_jcev2_p_9_o_model;
@property(nonatomic, getter=jce_zipType, setter=setJce_zipType:) BOOL jcev2_p_8_r_zipType; // @synthesize jcev2_p_8_r_zipType=_jcev2_p_8_r_zipType;
@property(nonatomic, getter=jce_encryType, setter=setJce_encryType:) BOOL jcev2_p_7_r_encryType; // @synthesize jcev2_p_7_r_encryType=_jcev2_p_7_r_encryType;
@property(retain, nonatomic, getter=jce_sBuffer, setter=setJce_sBuffer:) NSData *jcev2_p_6_o_sBuffer; // @synthesize jcev2_p_6_o_sBuffer=_jcev2_p_6_o_sBuffer;
@property(nonatomic, getter=jce_cmd, setter=setJce_cmd:) int jcev2_p_5_r_cmd; // @synthesize jcev2_p_5_r_cmd=_jcev2_p_5_r_cmd;
@property(retain, nonatomic, getter=jce_sdkVersion, setter=setJce_sdkVersion:) NSString *jcev2_p_4_o_sdkVersion; // @synthesize jcev2_p_4_o_sdkVersion=_jcev2_p_4_o_sdkVersion;
@property(retain, nonatomic, getter=jce_sdkId, setter=setJce_sdkId:) NSString *jcev2_p_3_o_sdkId; // @synthesize jcev2_p_3_o_sdkId=_jcev2_p_3_o_sdkId;
@property(retain, nonatomic, getter=jce_appVersion, setter=setJce_appVersion:) NSString *jcev2_p_2_o_appVersion; // @synthesize jcev2_p_2_o_appVersion=_jcev2_p_2_o_appVersion;
@property(retain, nonatomic, getter=jce_appkey, setter=setJce_appkey:) NSString *jcev2_p_1_o_appkey; // @synthesize jcev2_p_1_o_appkey=_jcev2_p_1_o_appkey;
@property(nonatomic, getter=jce_platformId, setter=setJce_platformId:) BOOL jcev2_p_0_r_platformId; // @synthesize jcev2_p_0_r_platformId=_jcev2_p_0_r_platformId;
- (void).cxx_destruct;	// IMP=0x00000001007aa2e4
- (id)init;	// IMP=0x00000001007a9ed8

@end

