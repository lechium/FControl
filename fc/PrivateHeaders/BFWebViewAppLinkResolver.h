//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BFAppLinkResolving.h"

@class NSString;

@interface BFWebViewAppLinkResolver : NSObject <BFAppLinkResolving>
{
}

+ (id)sharedInstance;	// IMP=0x00000001006a31d0
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;	// IMP=0x00000001006a451c
- (id)getALDataFromLoadedPage:(id)arg1;	// IMP=0x00000001006a441c
- (id)parseALData:(id)arg1;	// IMP=0x00000001006a3f90
- (id)appLinkFromURLInBackground:(id)arg1;	// IMP=0x00000001006a378c
- (id)followRedirects:(id)arg1;	// IMP=0x00000001006a3284

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

