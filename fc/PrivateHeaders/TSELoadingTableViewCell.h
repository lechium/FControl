//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSEBaseTableViewCell.h"

@class UIActivityIndicatorView;

@interface TSELoadingTableViewCell : TSEBaseTableViewCell
{
    UIActivityIndicatorView *_loadingIndicatorView;	// 8 = 0x8
}

@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
- (void).cxx_destruct;	// IMP=0x0000000100883ca4
- (void)setUpConstraints;	// IMP=0x00000001008839d8
- (void)prepareForReuse;	// IMP=0x0000000100883964
- (id)init;	// IMP=0x0000000100883820

@end
