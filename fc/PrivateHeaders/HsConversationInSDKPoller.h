//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsCorePoller.h"

@class HsHTTPBackoff;

@interface HsConversationInSDKPoller : HsCorePoller
{
    HsHTTPBackoff *_successBackoff;	// 8 = 0x8
    HsHTTPBackoff *_failureBackoff;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000101342a0c
- (id)backoffBuilder;	// IMP=0x00000001013427ec
- (id)successBackoff;	// IMP=0x00000001013427dc
- (id)failureBackoff;	// IMP=0x00000001013427cc
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001013426c8

@end

