//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsFaqResponseParser.h"

@class NSString;

@interface HsFaqJsonResponseParser : NSObject <HsFaqResponseParser>
{
}

+ (id)faqSectionFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001013c3d94
+ (id)faqFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001013c3ce0
+ (id)faqListItemFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001013c3c2c
+ (id)sectionListItemFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000001013c3b78
+ (id)validateFaqListItemDictionary:(id)arg1;	// IMP=0x00000001013c3580
+ (id)validateSectionListItemDictionary:(id)arg1;	// IMP=0x00000001013c3158
+ (id)validateFaqSectionDictionary:(id)arg1;	// IMP=0x00000001013c2b60
+ (id)validateFaqDictionary:(id)arg1;	// IMP=0x00000001013c1f24
+ (id)errorObjectWithFailureReason:(id)arg1 description:(id)arg2 errorCode:(long long)arg3;	// IMP=0x00000001013c1e00
- (void)parseSectionsListResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001013c46a4
- (id)parseSectionsListResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000001013c4284
- (id)parseFaqResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000001013c4048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

