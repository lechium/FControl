//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol HsFaqDbObserver <NSObject>
- (void)dataUpdationFailedForFaqPublishId:(NSString *)arg1 error:(NSError *)arg2;
- (void)noChangeInDataForFaqPublishId:(NSString *)arg1;
- (void)dataUpdatedForFaqPublishId:(NSString *)arg1;

@optional
- (void)dataUpdatedForAgentSuggestedFaqPublishId:(NSString *)arg1 language:(NSString *)arg2;
@end

