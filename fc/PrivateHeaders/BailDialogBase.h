//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UILabel, UIWindow;

@interface BailDialogBase : UIViewController
{
    UIWindow *m_window;	// 8 = 0x8
    _Bool m_isShowing;	// 16 = 0x10
    int m_WaitTime;	// 20 = 0x14
    int m_MsgBoxId;	// 24 = 0x18
    NSString *m_title;	// 32 = 0x20
    NSString *m_html;	// 40 = 0x28
    NSString *m_tip;	// 48 = 0x30
    NSString *m_left;	// 56 = 0x38
    NSString *m_right;	// 64 = 0x40
    UILabel *m_tipView;	// 72 = 0x48
    UIButton *m_leftBtn;	// 80 = 0x50
    _Bool m_IsLeftBtnDisabled;	// 88 = 0x58
    float m_ImageScale;	// 92 = 0x5c
    float m_ScreenScale;	// 96 = 0x60
    float m_MagnifyScale;	// 100 = 0x64
    id <BailDialogDelegate> m_delegate;	// 104 = 0x68
}

- (void)onRightBtn:(id)arg1;	// IMP=0x0000000100e0eb20
- (void)onLeftBtn:(id)arg1;	// IMP=0x0000000100e0eae4
- (void)onTick;	// IMP=0x0000000100e0eae0
- (void)onTimeout;	// IMP=0x0000000100e0eadc
- (void)runLoopCheck;	// IMP=0x0000000100e0e9d4
- (void)startTimer;	// IMP=0x0000000100e0e9bc
- (void)hide;	// IMP=0x0000000100e0e928
- (void)show;	// IMP=0x0000000100e0e8ac
- (void)loadView;	// IMP=0x0000000100e0e7c8
- (id)createDialogView;	// IMP=0x0000000100e0e5f4
- (id)createDialogTipView:(struct CGRect)arg1;	// IMP=0x0000000100e0e498
- (id)getTipTxt;	// IMP=0x0000000100e0e488
- (struct CGRect)calcurateDialogTipFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0e418
- (id)createDialogButtomView:(struct CGRect)arg1;	// IMP=0x0000000100e0e2cc
- (id)createRightBtn:(struct CGRect)arg1;	// IMP=0x0000000100e0e2bc
- (id)createLeftBtn:(struct CGRect)arg1;	// IMP=0x0000000100e0e284
- (id)createBottomBtn:(struct CGRect)arg1 IsLeft:(_Bool)arg2;	// IMP=0x0000000100e0e084
- (id)getLeftBtnText;	// IMP=0x0000000100e0e074
- (void)setBailBtnStyle:(id)arg1 IsLeft:(_Bool)arg2;	// IMP=0x0000000100e0df6c
- (struct CGRect)calcurateRightBtnFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0df5c
- (struct CGRect)calcurateLeftBtnFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0df4c
- (struct CGRect)calcurateBottomBtnFrame:(struct CGRect)arg1 IsLeft:(_Bool)arg2;	// IMP=0x0000000100e0de2c
- (struct CGRect)calcurateDialogButtomFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0dde8
- (id)createDialogContentView:(struct CGRect)arg1;	// IMP=0x0000000100e0dc84
- (id)createDialogContentBg:(struct CGRect)arg1;	// IMP=0x0000000100e0dbdc
- (id)createHtmlContentView:(struct CGRect)arg1;	// IMP=0x0000000100e0d970
- (id)createHtmlContentBgView:(struct CGRect)arg1;	// IMP=0x0000000100e0d8a0
- (struct CGRect)calcurateHtmlContentViewFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0d7f8
- (struct CGRect)calcurateDialogContentFrame:(struct CGRect)arg1;	// IMP=0x0000000100e0d738
- (id)createDialogTitleView:(struct CGRect)arg1;	// IMP=0x0000000100e0d5b8
- (id)createDialogTitleBg:(struct CGRect)arg1;	// IMP=0x0000000100e0d4dc
- (double)calcurateTitleHeight;	// IMP=0x0000000100e0d470
- (void)setImageViewBg:(id)arg1 Name:(const char *)arg2;	// IMP=0x0000000100e0d420
- (id)getBailImage:(const char *)arg1;	// IMP=0x0000000100e0d264
- (id)reSizeImage:(id)arg1 toSize:(struct CGSize)arg2;	// IMP=0x0000000100e0d204
- (struct CGRect)calcurateDialogTitleFrame:(struct CGRect)arg1 Height:(int)arg2;	// IMP=0x0000000100e0d1f4
- (struct CGRect)calcurateDialogFrame;	// IMP=0x0000000100e0d0a8
- (struct CGRect)getApplicationFrame;	// IMP=0x0000000100e0d060
- (double)getScaledSize:(double)arg1;	// IMP=0x0000000100e0d048
- (double)getScreenWidth;	// IMP=0x0000000100e0d010
- (id)initWithMsgBoxId:(int)arg1 andTitle:(id)arg2 andHtml:(id)arg3 andTip:(id)arg4 andLeftBtn:(id)arg5 andRightBtn:(id)arg6 andWaitTime:(int)arg7 andIsLeftBtnDisabled:(_Bool)arg8 andDelegate:(id)arg9;	// IMP=0x0000000100e0cdf0
- (void)dealloc;	// IMP=0x0000000100e0cd1c

@end

