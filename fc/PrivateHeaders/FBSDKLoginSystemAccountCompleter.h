//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKLoginCompleting.h"

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountCompleter : NSObject <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters *_parameters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001006e9a30
- (void)completeLogIn:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001006e97c4
- (id)initWithTokenString:(id)arg1 appID:(id)arg2;	// IMP=0x00000001006e96cc
- (id)init;	// IMP=0x00000001006e96a4

@end

