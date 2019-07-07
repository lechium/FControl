//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "HSAuthenticationFailable.h"
#import "HsAttachmentHandlerDelegate.h"
#import "HsNewConversationRenderer.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class HSAttachmentHandler, HSMBProgressHUD, HsBorderedImageView, HsGenericTextField, HsNewConversationVM, HsTextViewWithPlaceholder, HsThemeableButton, HsThemedBarButtonItem, NSLayoutConstraint, NSString, UIButton;

@interface HsNewConversationTableViewController : UITableViewController <HSAuthenticationFailable, UITextViewDelegate, UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HsAttachmentHandlerDelegate, HsNewConversationRenderer>
{
    HsTextViewWithPlaceholder *_descriptionTextView;	// 8 = 0x8
    HsGenericTextField *_emailTextField;	// 16 = 0x10
    HsGenericTextField *_nameTextField;	// 24 = 0x18
    HsThemedBarButtonItem *_sendButton;	// 32 = 0x20
    HsThemeableButton *_attachImageButton;	// 40 = 0x28
    NSLayoutConstraint *_thumbnailViewHeightConstraint;	// 48 = 0x30
    NSLayoutConstraint *_thumbnailViewWidthConstraint;	// 56 = 0x38
    HsBorderedImageView *_thumbnailImageView;	// 64 = 0x40
    UIButton *_thumbnailCancelButton;	// 72 = 0x48
    _Bool _showConversationEndedMessage;	// 80 = 0x50
    HSMBProgressHUD *_progressHUD;	// 88 = 0x58
    NSString *_errorMessageForDescriptionSection;	// 96 = 0x60
    NSString *_errorMessageForFromSection;	// 104 = 0x68
    NSString *_errorMessageForEmail;	// 112 = 0x70
    NSString *_errorMessageForName;	// 120 = 0x78
    _Bool _hideAttachmentSection;	// 128 = 0x80
    _Bool _hideFromSection;	// 129 = 0x81
    _Bool _sendAnyway;	// 130 = 0x82
    HsNewConversationVM *_vm;	// 136 = 0x88
    HSAttachmentHandler *_attachmentHandler;	// 144 = 0x90
}

@property(retain, nonatomic) HSAttachmentHandler *attachmentHandler; // @synthesize attachmentHandler=_attachmentHandler;
- (void).cxx_destruct;	// IMP=0x000000010141f9f0
- (void)imageSelectionFailed;	// IMP=0x000000010141f938
- (void)didSelectAttachmentWithResource:(id)arg1;	// IMP=0x000000010141f8e0
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000010141f820
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000010141f788
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000010141f708
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010141f6c8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010141f6b0
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010141f5e0
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010141f5d4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010141f53c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010141f520
- (void)showSearchResultView:(id)arg1;	// IMP=0x000000010141f418
- (void)exit;	// IMP=0x000000010141f1b8
- (void)gotoConversation:(id)arg1;	// IMP=0x000000010141f0cc
- (void)disableStartConversationButton;	// IMP=0x000000010141f08c
- (void)enableStartConversationButton;	// IMP=0x000000010141f04c
- (void)hideStartConversationButton;	// IMP=0x000000010141f00c
- (void)showStartConversationButton;	// IMP=0x000000010141efcc
- (void)showConversationStartedMessage;	// IMP=0x000000010141efb8
- (void)showError:(id)arg1;	// IMP=0x000000010141eefc
- (void)hideProgressBar;	// IMP=0x000000010141eed8
- (void)showProgressBar;	// IMP=0x000000010141eda0
- (void)setEmailRequired:(_Bool)arg1;	// IMP=0x000000010141ed14
- (void)setEmail:(id)arg1;	// IMP=0x000000010141ecbc
- (void)showNameFieldError:(unsigned long long)arg1;	// IMP=0x000000010141eba0
- (void)showEmailFieldError:(unsigned long long)arg1;	// IMP=0x000000010141ea84
- (void)showDescriptionFieldError:(unsigned long long)arg1;	// IMP=0x000000010141e998
- (void)showError:(unsigned long long)arg1 forField:(unsigned long long)arg2;	// IMP=0x000000010141e900
- (void)setName:(id)arg1;	// IMP=0x000000010141e8a8
- (void)showProfileForm;	// IMP=0x000000010141e85c
- (void)hideProfileForm;	// IMP=0x000000010141e80c
- (void)cancelAttachmentPreview;	// IMP=0x000000010141e800
- (void)showAttachmentPreviewWithRelativeFileName:(id)arg1;	// IMP=0x000000010141e7f4
- (void)hideAttachmentButton;	// IMP=0x000000010141e7b4
- (void)showAttachmentButton;	// IMP=0x000000010141e774
- (void)hideAttachmentSection;	// IMP=0x000000010141e724
- (void)setDescription:(id)arg1;	// IMP=0x000000010141e6cc
- (void)thumbnailCancelButtonTapped:(id)arg1;	// IMP=0x000000010141e610
- (void)attachImageButtonTapped:(id)arg1;	// IMP=0x000000010141e5b0
- (void)sendButtonTapped:(id)arg1;	// IMP=0x000000010141e5a4
- (void)closeButtonTapped;	// IMP=0x000000010141e570
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x000000010141e494
- (void)textFieldDidChange:(id)arg1;	// IMP=0x000000010141e3e8
- (void)textViewDidChange:(id)arg1;	// IMP=0x000000010141e25c
- (void)removeAttachmentUIElements;	// IMP=0x000000010141e148
- (void)sendAction;	// IMP=0x000000010141e068
- (void)dismissKeyboard;	// IMP=0x000000010141dfd4
- (void)hideAttachmentPreview;	// IMP=0x000000010141df00
- (void)showAttachmentPreviewForFileWithName:(id)arg1;	// IMP=0x000000010141dbfc
- (void)applyTheming;	// IMP=0x000000010141dafc
- (void)setupUI;	// IMP=0x000000010141d674
- (void)setSendConversationAnyway;	// IMP=0x000000010141d660
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010141d584
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010141d4bc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010141d308
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010141d1a4
- (void)viewDidLoad;	// IMP=0x000000010141d010
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000010141cfbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
