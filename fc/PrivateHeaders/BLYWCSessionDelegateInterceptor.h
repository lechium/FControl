//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BLYWCSessionDelegateInterceptor : NSObject
{
    id _target;	// 8 = 0x8
}

+ (void)load;	// IMP=0x00000001007658a8
+ (id)sharedInterceptor;	// IMP=0x000000010076580c
@property(nonatomic) id target; // @synthesize target=_target;
- (void)Bugly_Session:(id)arg1 didReceiveApplicationContext:(id)arg2;	// IMP=0x0000000100766758
- (_Bool)updateApplicationContext:(id)arg1;	// IMP=0x00000001007664d0
- (void)Bugly_Session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100765e44
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100765d28
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000100765c44
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000100765b88

@end
