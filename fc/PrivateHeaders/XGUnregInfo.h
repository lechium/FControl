//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class XGAppInfo;

@interface XGUnregInfo : XGJceObjectV2
{
    BOOL jcev2_p_1_r_isUninstall;	// 8 = 0x8
    unsigned int jcev2_p_2_o_timestamp;	// 12 = 0xc
    XGAppInfo *jcev2_p_0_r_appInfo;	// 16 = 0x10
}

+ (id)jceType;	// IMP=0x00000001014dab48
+ (void)initialize;	// IMP=0x00000001014daa54
@property(nonatomic, getter=jce_timestamp, setter=setJce_timestamp:) unsigned int jcev2_p_2_o_timestamp; // @synthesize jcev2_p_2_o_timestamp;
@property(nonatomic, getter=jce_isUninstall, setter=setJce_isUninstall:) BOOL jcev2_p_1_r_isUninstall; // @synthesize jcev2_p_1_r_isUninstall;
@property(retain, nonatomic, getter=jce_appInfo, setter=setJce_appInfo:) XGAppInfo *jcev2_p_0_r_appInfo; // @synthesize jcev2_p_0_r_appInfo;
- (void).cxx_destruct;	// IMP=0x00000001014dabd8
- (id)init;	// IMP=0x00000001014daac4

@end
