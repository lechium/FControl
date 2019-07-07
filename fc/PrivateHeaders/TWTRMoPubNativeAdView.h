//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIColor, UIImageView, UILabel;

@interface TWTRMoPubNativeAdView : UIView <UIGestureRecognizerDelegate>
{
    UILabel *_titleTextLabel;	// 8 = 0x8
    UILabel *_mainTextLabel;	// 16 = 0x10
    UILabel *_callToActionTextLabel;	// 24 = 0x18
    UIImageView *_iconImageView;	// 32 = 0x20
    UIImageView *_mainImageView;	// 40 = 0x28
    UIColor *_savedCallToActionBackgroundColor;	// 48 = 0x30
}

@property(retain, nonatomic) UIColor *savedCallToActionBackgroundColor; // @synthesize savedCallToActionBackgroundColor=_savedCallToActionBackgroundColor;
@property(readonly, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *callToActionTextLabel; // @synthesize callToActionTextLabel=_callToActionTextLabel;
@property(readonly, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
@property(readonly, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void).cxx_destruct;	// IMP=0x0000000100857e90
- (id)subviewsMapping;	// IMP=0x0000000100857c8c
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000100857b64
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100857aac
- (void)handleLongPressCTA:(id)arg1;	// IMP=0x0000000100857848
- (void)prepareCTAGestureRecognizer;	// IMP=0x0000000100857788
- (void)layoutSubviews;	// IMP=0x00000001008576d4
- (void)prepareCallToAction;	// IMP=0x0000000100857558
- (void)prepareTextContent;	// IMP=0x00000001008572d4
- (void)prepareIcon;	// IMP=0x000000010085707c
- (void)prepareImageHeader;	// IMP=0x0000000100856f48
- (void)prepareLayout;	// IMP=0x0000000100856ef4
- (_Bool)isAccessibilityElement;	// IMP=0x0000000100856eec
- (void)setUpAccessibility;	// IMP=0x0000000100856e88
- (id)accessibilityLabel;	// IMP=0x0000000100856cb0
- (void)commonInit;	// IMP=0x0000000100856764
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001008566f8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010085668c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
