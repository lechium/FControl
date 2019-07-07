//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TWTRColorUtil : NSObject
{
}

+ (id)lighterColorForColor:(id)arg1 lightnessLevel:(double)arg2;	// IMP=0x00000001007f8580
+ (id)darkerColorForColor:(id)arg1 lightnessLevel:(double)arg2;	// IMP=0x00000001007f84e8
+ (id)contrastingTextColorFromBackgroundColor:(id)arg1;	// IMP=0x00000001007f849c
+ (id)logoColorFromBackgroundColor:(id)arg1;	// IMP=0x00000001007f8440
+ (id)mediaBackgroundColorFromBackgroundColor:(id)arg1;	// IMP=0x00000001007f83f0
+ (id)secondaryTextColorFromPrimaryTextColor:(id)arg1 backgroundColor:(id)arg2 minAlpha:(double)arg3 maxAlpha:(double)arg4;	// IMP=0x00000001007f8368
+ (id)secondaryTextColorFromPrimaryTextColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x00000001007f82f8
+ (_Bool)isOpaqueColor:(id)arg1;	// IMP=0x00000001007f8298
+ (_Bool)isLightColor:(id)arg1 lightnessThreshold:(double)arg2;	// IMP=0x00000001007f81fc
+ (_Bool)isLightColor:(id)arg1;	// IMP=0x00000001007f8194
+ (id)imageWithColor:(id)arg1;	// IMP=0x00000001007f80e8
+ (id)colorFromHex:(long long)arg1;	// IMP=0x00000001007f8098
+ (long long)hexWithColor:(id)arg1;	// IMP=0x00000001007f8010
+ (id)imagePlaceholderColor;	// IMP=0x00000001007f7f8c
+ (id)textColor;	// IMP=0x00000001007f7f08
+ (id)darkGrayColor;	// IMP=0x00000001007f7e84
+ (id)mediumGrayColor;	// IMP=0x00000001007f7e00
+ (id)faintGrayColor;	// IMP=0x00000001007f7d7c
+ (id)darkGrayTextColor;	// IMP=0x00000001007f7cf8
+ (id)grayTextColor;	// IMP=0x00000001007f7c74
+ (id)darkBorderGrayColor;	// IMP=0x00000001007f7bcc
+ (id)borderGrayColor;	// IMP=0x00000001007f7b20
+ (id)grayColor;	// IMP=0x00000001007f7a9c
+ (id)mediumPurpleColor;	// IMP=0x00000001007f7a18
+ (id)deepPurpleColor;	// IMP=0x00000001007f7994
+ (id)darkPurpleColor;	// IMP=0x00000001007f7910
+ (id)darkRedColor;	// IMP=0x00000001007f788c
+ (id)redColor;	// IMP=0x00000001007f7808
+ (id)darkBlueColor;	// IMP=0x00000001007f7784
+ (id)mediumBlueColor;	// IMP=0x00000001007f7700
+ (id)lightBlueColor;	// IMP=0x00000001007f767c
+ (id)blueTextColor;	// IMP=0x00000001007f75f8
+ (id)blueColor;	// IMP=0x00000001007f7574
+ (id)whiteColor;	// IMP=0x00000001007f7560
+ (id)blackColor;	// IMP=0x00000001007f754c

@end
