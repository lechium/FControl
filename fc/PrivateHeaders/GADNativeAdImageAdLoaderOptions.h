//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdLoaderOptions.h"

@interface GADNativeAdImageAdLoaderOptions : GADAdLoaderOptions
{
    _Bool _disableImageLoading;	// 8 = 0x8
    _Bool _shouldRequestMultipleImages;	// 9 = 0x9
    long long _preferredImageOrientation;	// 16 = 0x10
}

@property(nonatomic) long long preferredImageOrientation; // @synthesize preferredImageOrientation=_preferredImageOrientation;
@property(nonatomic) _Bool shouldRequestMultipleImages; // @synthesize shouldRequestMultipleImages=_shouldRequestMultipleImages;
@property(nonatomic) _Bool disableImageLoading; // @synthesize disableImageLoading=_disableImageLoading;
- (id)requestParameters;	// IMP=0x00000001009c5794
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009c5724

@end

