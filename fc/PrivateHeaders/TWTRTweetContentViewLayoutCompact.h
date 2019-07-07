//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TWTRTweetContentViewLayout.h"

@class NSLayoutConstraint, NSString, TWTRTweetViewMetrics;

@interface TWTRTweetContentViewLayoutCompact : NSObject <TWTRTweetContentViewLayout>
{
    TWTRTweetViewMetrics *_metrics;	// 8 = 0x8
    NSLayoutConstraint *_imageTopConstraint;	// 16 = 0x10
}

@property(readonly, nonatomic) NSLayoutConstraint *imageTopConstraint; // @synthesize imageTopConstraint=_imageTopConstraint;
@property(readonly, nonatomic) TWTRTweetViewMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;	// IMP=0x0000000100851030
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forContentView:(id)arg2;	// IMP=0x0000000100850d78
- (void)setShowingMedia:(_Bool)arg1;	// IMP=0x0000000100850cd8
- (void)applyConstraintsForContentView:(id)arg1;	// IMP=0x000000010085088c
- (_Bool)allowsMediaCornerRounding;	// IMP=0x0000000100850884
- (id)fontForTweetLabel;	// IMP=0x000000010085086c
- (unsigned long long)tweetViewStyle;	// IMP=0x0000000100850864
- (id)initWithMetrics:(id)arg1;	// IMP=0x00000001008507e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
