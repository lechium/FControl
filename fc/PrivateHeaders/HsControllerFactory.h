//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HelpshiftInbox, HsAnalyticsEventController, HsCampaignsInboxSyncController, HsDeviceController, HsSessionController, HsSwitchUserController, HsUserController;

@interface HsControllerFactory : NSObject
{
    HsDeviceController *_deviceController;	// 8 = 0x8
    HsUserController *_userController;	// 16 = 0x10
    HsSwitchUserController *_switchUserController;	// 24 = 0x18
    HsSessionController *_sessionController;	// 32 = 0x20
    HsCampaignsInboxSyncController *_campaignsInboxSyncController;	// 40 = 0x28
    id <HsDataSyncCoordinator> _dataSyncCoordinator;	// 48 = 0x30
    HsAnalyticsEventController *_analyticsController;	// 56 = 0x38
    HelpshiftInbox *_inboxApi;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x00000001014089dc
@property(nonatomic) __weak HelpshiftInbox *inboxApi; // @synthesize inboxApi=_inboxApi;
@property(retain, nonatomic) HsAnalyticsEventController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(retain, nonatomic) id <HsDataSyncCoordinator> dataSyncCoordinator; // @synthesize dataSyncCoordinator=_dataSyncCoordinator;
@property(retain, nonatomic) HsCampaignsInboxSyncController *campaignsInboxSyncController; // @synthesize campaignsInboxSyncController=_campaignsInboxSyncController;
@property(retain, nonatomic) HsSessionController *sessionController; // @synthesize sessionController=_sessionController;
@property(retain, nonatomic) HsSwitchUserController *switchUserController; // @synthesize switchUserController=_switchUserController;
@property(retain, nonatomic) HsUserController *userController; // @synthesize userController=_userController;
@property(retain, nonatomic) HsDeviceController *deviceController; // @synthesize deviceController=_deviceController;
- (void).cxx_destruct;	// IMP=0x0000000101409424

@end

