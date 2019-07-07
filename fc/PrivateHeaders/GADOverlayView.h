//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADAdViewDelegate.h"

@class GADAdView, GADAdViewDelegate, NSDictionary, NSString;

@interface GADOverlayView : UIView <GADAdViewDelegate>
{
    GADAdView *_overlayView;	// 8 = 0x8
    NSDictionary *_loadOverlayUserInfo;	// 16 = 0x10
    GADAdViewDelegate *_adViewDelegate;	// 24 = 0x18
    NSString *_overlayIdentifier;	// 32 = 0x20
    GADAdView *_adView;	// 40 = 0x28
}

@property(retain, nonatomic) GADAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;	// IMP=0x00000001009764b0
- (void)adViewWebProcessDidTerminate:(id)arg1;	// IMP=0x00000001009763fc
- (void)adViewDidFinishLoad:(id)arg1;	// IMP=0x000000010097628c
- (void)adView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x00000001009761e4
- (void)adViewDidStartLoad:(id)arg1;	// IMP=0x00000001009761cc
- (_Bool)adView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x000000010097615c
- (void)handleSendMessageToOverlayView:(id)arg1;	// IMP=0x000000010097610c
- (void)handleHideOverlayView:(id)arg1;	// IMP=0x00000001009760fc
- (void)handleShowOverlayView:(id)arg1;	// IMP=0x00000001009760ec
- (void)handleLoadOverlayView:(id)arg1;	// IMP=0x000000010097609c
- (void)handleSendMessageToAdViewNotification:(id)arg1;	// IMP=0x0000000100975fb0
- (void)handleHideOverlayNotification:(id)arg1;	// IMP=0x0000000100975fa0
- (void)sendMessageToOverlayWithUserInfo:(id)arg1;	// IMP=0x0000000100975f2c
- (void)loadOverlayWithUserInfo:(id)arg1;	// IMP=0x0000000100975df4
- (void)addOverlaySubview;	// IMP=0x0000000100975be0
- (void)removeOverlaySubview;	// IMP=0x0000000100975b0c
- (void)dealloc;	// IMP=0x00000001009758a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
