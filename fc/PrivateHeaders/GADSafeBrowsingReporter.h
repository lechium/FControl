//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAutoClickProtection, NSSet, NSString, NSURL;

@interface GADSafeBrowsingReporter : NSObject
{
    NSURL *_reportURL;	// 8 = 0x8
    _Bool _shouldReportMaliciousAds;	// 16 = 0x10
    _Bool _shouldReportBenignAds;	// 17 = 0x11
    _Bool _shouldSendRenderedAd;	// 18 = 0x12
    GADAutoClickProtection *_autoClickProtection;	// 24 = 0x18
    NSString *_clickString;	// 32 = 0x20
    NSSet *_excludedHeaders;	// 40 = 0x28
}

@property(readonly, nonatomic) NSSet *excludedHeaders; // @synthesize excludedHeaders=_excludedHeaders;
@property(readonly, copy, nonatomic) NSString *clickString; // @synthesize clickString=_clickString;
@property(readonly, nonatomic) GADAutoClickProtection *autoClickProtection; // @synthesize autoClickProtection=_autoClickProtection;
@property(readonly, nonatomic) _Bool shouldSendRenderedAd; // @synthesize shouldSendRenderedAd=_shouldSendRenderedAd;
@property(readonly, nonatomic) _Bool shouldReportBenignAds; // @synthesize shouldReportBenignAds=_shouldReportBenignAds;
@property(readonly, nonatomic) _Bool shouldReportMaliciousAds; // @synthesize shouldReportMaliciousAds=_shouldReportMaliciousAds;
- (void).cxx_destruct;	// IMP=0x00000001009f3dac
- (void)reportResourceCollection:(id)arg1;	// IMP=0x00000001009f3a8c
- (id)init;	// IMP=0x00000001009f3a74
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001009f361c

@end

