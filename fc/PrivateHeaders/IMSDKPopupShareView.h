//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UICollectionView;

@interface IMSDKPopupShareView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSString *_shareURL;	// 8 = 0x8
    NSString *_shareTitle;	// 16 = 0x10
    UIView *_dashboardView;	// 24 = 0x18
    UIButton *_backgroundButton;	// 32 = 0x20
    UIView *_lineView;	// 40 = 0x28
    UIButton *_cancelButton;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
    NSLayoutConstraint *_heightConstraintDashboard;	// 64 = 0x40
    NSLayoutConstraint *_heightConstraintCancelButton;	// 72 = 0x48
    NSMutableArray *_shareChannelArray;	// 80 = 0x50
    UIView *_nibView;	// 88 = 0x58
    double _dashboardHeight;	// 96 = 0x60
}

@property(nonatomic) double dashboardHeight; // @synthesize dashboardHeight=_dashboardHeight;
@property(retain) UIView *nibView; // @synthesize nibView=_nibView;
@property(retain, nonatomic) NSMutableArray *shareChannelArray; // @synthesize shareChannelArray=_shareChannelArray;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraintCancelButton; // @synthesize heightConstraintCancelButton=_heightConstraintCancelButton;
@property(nonatomic) __weak NSLayoutConstraint *heightConstraintDashboard; // @synthesize heightConstraintDashboard=_heightConstraintDashboard;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak UIView *dashboardView; // @synthesize dashboardView=_dashboardView;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
- (void).cxx_destruct;	// IMP=0x0000000100693744
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001006933c8
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001006932c8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000010069303c
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0000000100693034
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x000000010069302c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100693004
- (void)dismiss;	// IMP=0x0000000100692e20
- (void)show;	// IMP=0x0000000100692bf8
- (void)shareToSafari;	// IMP=0x0000000100692adc
- (struct CGSize)calculateViewSizeWithTitle:(id)arg1 button:(id)arg2;	// IMP=0x0000000100692860
- (void)shareToFacebook;	// IMP=0x0000000100691dc8
- (void)tapBackground:(id)arg1;	// IMP=0x0000000100691dac
- (void)tapCancel:(id)arg1;	// IMP=0x0000000100691d90
- (void)layoutSubviews;	// IMP=0x0000000100691ab8
- (void)initialize;	// IMP=0x00000001006913e4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100691340
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001006912c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
