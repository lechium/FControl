//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class GADStoreKitProduct, NSString, SKStoreProductViewController;

@interface GADStoreKitProductOpener : NSObject <SKStoreProductViewControllerDelegate>
{
    GADStoreKitProduct *_storeKitProduct;	// 8 = 0x8
    SKStoreProductViewController *_weakController;	// 16 = 0x10
    _Bool _isPresenting;	// 24 = 0x18
    _Bool _isPresented;	// 25 = 0x19
    _Bool _shouldDismissAfterPresentation;	// 26 = 0x1a
    _Bool _dismissed;	// 27 = 0x1b
}

- (void).cxx_destruct;	// IMP=0x000000010098a09c
- (void)productViewControllerDidFinish:(id)arg1;	// IMP=0x0000000100989f78
- (void)dismiss;	// IMP=0x0000000100989f2c
- (void)openWithRootViewController:(id)arg1 slot:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001009897cc
@property(readonly) _Bool dismissed;
- (id)initWithStoreKitProduct:(id)arg1;	// IMP=0x0000000100989704

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

