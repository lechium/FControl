//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYJceObjectV2.h"

@class NSData, NSString;

@interface BLYAttachment : BLYJceObjectV2
{
    BOOL jcev2_p_0_r_type;	// 8 = 0x8
    NSString *jcev2_p_1_r_fileName;	// 16 = 0x10
    NSData *jcev2_p_2_o_data;	// 24 = 0x18
}

+ (id)jceType;	// IMP=0x0000000100734854
+ (void)initialize;	// IMP=0x0000000100734790
@property(retain, nonatomic, getter=jce_data, setter=setJce_data:) NSData *jcev2_p_2_o_data; // @synthesize jcev2_p_2_o_data;
@property(retain, nonatomic, getter=jce_fileName, setter=setJce_fileName:) NSString *jcev2_p_1_r_fileName; // @synthesize jcev2_p_1_r_fileName;
@property(nonatomic, getter=jce_type, setter=setJce_type:) BOOL jcev2_p_0_r_type; // @synthesize jcev2_p_0_r_type;
- (void).cxx_destruct;	// IMP=0x00000001007348e8
- (id)init;	// IMP=0x00000001007347f0

@end

