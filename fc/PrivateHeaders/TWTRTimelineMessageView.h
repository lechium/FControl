//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UILabel;

@interface TWTRTimelineMessageView : UIView
{
    UILabel *_messageLabel;	// 8 = 0x8
    UIActivityIndicatorView *_activityIndicator;	// 16 = 0x10
    NSLayoutConstraint *_spinnerMessageConstraint;	// 24 = 0x18
}

@property(retain, nonatomic) NSLayoutConstraint *spinnerMessageConstraint; // @synthesize spinnerMessageConstraint=_spinnerMessageConstraint;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;	// IMP=0x000000010082bd50
- (void)endLoadingWithMessage:(id)arg1;	// IMP=0x000000010082bc34
- (void)endLoading;	// IMP=0x000000010082bbf4
- (void)beginLoading;	// IMP=0x000000010082bb7c
- (void)setupConstraints;	// IMP=0x000000010082b918
- (void)commonInit;	// IMP=0x000000010082b700
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010082b6a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010082b648

@end

