//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IMSDKNoticeDelegate <NSObject>

@optional
- (void)closeNotice:(NSString *)arg1 closeType:(int)arg2 extraJson:(NSString *)arg3 completeHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg4;
- (void)updateUserTargetingDataToSvr:(NSString *)arg1 completeHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)setUserTargetingData:(NSString *)arg1 extraJson:(NSString *)arg2 completeHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)showNotice:(NSString *)arg1 noticeType:(int)arg2 scene:(NSString *)arg3 extraJson:(NSString *)arg4 completeHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg5;
- (void)loadNoticeData:(NSString *)arg1 language:(NSString *)arg2 region:(int)arg3 partition:(int)arg4 isUseCache:(_Bool)arg5 noticeType:(int)arg6 extraJson:(NSString *)arg7 completeHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg8;
- (void)loadNoticeData:(NSString *)arg1 loadDataType:(int)arg2 scene:(NSString *)arg3 noticeType:(int)arg4 extraJson:(NSString *)arg5 completeHandle:(void (^)(_Bool, NSDictionary *, NSError *))arg6;
@end

