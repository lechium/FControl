//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

@class NSTimer;

@interface GADTwoFingersLongPressGestureRecognizer : UIGestureRecognizer
{
    long long _gestureState;	// 8 = 0x8
    double _startTimestamp;	// 16 = 0x10
    double _endTimestamp;	// 24 = 0x18
    NSTimer *_debugGestureTimer;	// 32 = 0x20
    NSTimer *_numberOfTouchesTimer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001009792a4
- (void)invalidateDebugGestureTimers;	// IMP=0x0000000100979230
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100979194
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100978fe4
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100978ca8
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100978838
- (void)reset;	// IMP=0x00000001009787ec

@end
