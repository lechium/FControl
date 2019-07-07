//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKBaseWebViewController.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class NSString, UIProgressView, WKWebView;

@interface IMSDKWKWebViewController : IMSDKBaseWebViewController <WKNavigationDelegate, WKUIDelegate>
{
    UIProgressView *_progressView;	// 8 = 0x8
    WKWebView *_wkWebView;	// 16 = 0x10
}

@property(retain, nonatomic) WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;	// IMP=0x000000010068bd80
- (id)shareURL;	// IMP=0x000000010068bbc8
- (id)webView;	// IMP=0x000000010068b694
- (void)close:(id)arg1;	// IMP=0x000000010068b678
- (void)reload:(id)arg1;	// IMP=0x000000010068b648
- (void)refresh:(id)arg1;	// IMP=0x000000010068b618
- (void)back:(id)arg1;	// IMP=0x000000010068b5bc
- (void)forward:(id)arg1;	// IMP=0x000000010068b560
- (void)reloadWebView;	// IMP=0x000000010068b530
- (void)forwardWebView;	// IMP=0x000000010068b4c4
- (void)backWebView;	// IMP=0x000000010068b458
- (_Bool)canGoForward;	// IMP=0x000000010068b440
- (_Bool)canGoBack;	// IMP=0x000000010068b428
- (void)dismiss;	// IMP=0x000000010068b3dc
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010068aee8
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010068abb4
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010068a970
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;	// IMP=0x000000010068a878
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x000000010068a800
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x000000010068a6b8
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000010068a68c
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x000000010068a504
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;	// IMP=0x000000010068a4d8
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100689dd4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001006898b0
- (void)updateProgressView;	// IMP=0x00000001006897d4
- (void)dealloc;	// IMP=0x0000000100689654
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010068950c
- (id)initWithHome:(id)arg1 openID:(id)arg2;	// IMP=0x0000000100689444

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

