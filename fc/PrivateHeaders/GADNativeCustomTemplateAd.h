//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNativeAd.h"

#import "GADLoadable.h"
#import "GADMediatedNativeCustomTemplateAd.h"

@class GADMediaContent, GADMediaView, GADVideoController, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GADNativeCustomTemplateAd : GADNativeAd <GADMediatedNativeCustomTemplateAd, GADLoadable>
{
    _Bool _disableImageLoading;	// 89 = 0x59
    NSObject<OS_dispatch_queue> *_lockQueue;	// 96 = 0x60
    NSDictionary *_optionalImages;	// 104 = 0x68
    NSDictionary *_requiredImages;	// 112 = 0x70
    NSMutableDictionary *_imageAssets;	// 120 = 0x78
    NSDictionary *_stringAssets;	// 128 = 0x80
    GADMediaContent *_mediaContent;	// 136 = 0x88
    GADMediaView *_mediaView;	// 144 = 0x90
    NSMutableSet *_availableAssetKeys;	// 152 = 0x98
    GADVideoController *_videoController;	// 160 = 0xa0
    CDUnknownBlockType _customClickHandler;	// 168 = 0xa8
    CDUnknownBlockType _deprecatedCustomClickHandler;	// 176 = 0xb0
    NSString *_templateID;	// 184 = 0xb8
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;	// IMP=0x00000001009756e0
+ (id)requestParametersForAdLoader:(id)arg1;	// IMP=0x0000000100975210
+ (id)requiredDelegateProtocol;	// IMP=0x0000000100975204
@property(readonly, nonatomic) GADVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;	// IMP=0x00000001009757a0
- (void)adLoaderDidReceiveAd:(id)arg1;	// IMP=0x00000001009756e8
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100974d88
- (void)loadImageAssetsWithImageDictionary:(id)arg1;	// IMP=0x0000000100974a48
- (void)setImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001009749a4
- (void)beginObservingVideoClickNotifications;	// IMP=0x0000000100974908
- (void)handleVideoClickNotifications;	// IMP=0x00000001009748f4
- (void)handleNativeAdCustomClick:(id)arg1;	// IMP=0x0000000100974660
@property(readonly, nonatomic) GADMediaView *mediaView;
- (id)stringForKey:(id)arg1;	// IMP=0x00000001009745d8
- (id)imageForKey:(id)arg1;	// IMP=0x00000001009745c0
@property(readonly, nonatomic) NSArray *availableAssetKeys;
- (id)requiredAssets;	// IMP=0x0000000100974480
@property(copy) CDUnknownBlockType customClickHandler;
- (void)recordImpression;	// IMP=0x0000000100974174
- (void)performClickOnAssetWithKey:(id)arg1 customClickHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100973ef4
- (void)performClickOnAssetWithKey:(id)arg1;	// IMP=0x0000000100973b48
- (id)adFormatTemplateID;	// IMP=0x0000000100973b38
- (_Bool)hasValidConfigurationForRequestParameters:(id)arg1;	// IMP=0x0000000100973a4c
- (void)setSlot:(id)arg1;	// IMP=0x0000000100973950
- (void)removeCustomClickObserver;	// IMP=0x00000001009738a0
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100973748
- (id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2;	// IMP=0x0000000100973730
- (id)initWithDictionary:(id)arg1 options:(id)arg2;	// IMP=0x0000000100972fa4
- (void)GADNativeCustomTemplateAd_category;	// IMP=0x0000000100972fa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
