//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSDKFriendRequestInfoOC, NSString;

@protocol IMSDKFriendDelegate <NSObject>
- (void)share:(IMSDKFriendRequestInfoOC *)arg1 handle:(void (^)(_Bool, NSError *))arg2;
- (void)sendMessage:(IMSDKFriendRequestInfoOC *)arg1 handle:(void (^)(_Bool, NSError *))arg2;
- (void)inviteWithContent:(IMSDKFriendRequestInfoOC *)arg1 handle:(void (^)(_Bool, NSError *))arg2;
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 handle:(void (^)(_Bool, NSDictionary *, NSError *))arg3;

@optional
- (void)inviteFriends:(IMSDKFriendRequestInfoOC *)arg1 handle:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)getFriendWithPage:(int)arg1 pageSize:(int)arg2 type:(int)arg3 extend:(NSString *)arg4 handle:(void (^)(_Bool, NSDictionary *, NSError *))arg5;
@end

