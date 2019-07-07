//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface BFWebViewAppLinkResolverWebViewDelegate : NSObject <UIWebViewDelegate>
{
    _Bool _hasLoaded;	// 8 = 0x8
    CDUnknownBlockType _didFinishLoad;	// 16 = 0x10
    CDUnknownBlockType _didFailLoadWithError;	// 24 = 0x18
}

@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadWithError; // @synthesize didFailLoadWithError=_didFailLoadWithError;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoad; // @synthesize didFinishLoad=_didFinishLoad;
- (void).cxx_destruct;	// IMP=0x00000001006a3190
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x00000001006a3098
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x00000001006a2fec
- (void)webViewDidStartLoad:(id)arg1;	// IMP=0x00000001006a2fe8
- (void)webViewDidFinishLoad:(id)arg1;	// IMP=0x00000001006a2f60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

