//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HsAgentSuggestedFAQ : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_publishId;	// 16 = 0x10
    NSString *_language;	// 24 = 0x18
}

@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *publishId; // @synthesize publishId=_publishId;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x0000000101476da4
- (id)initWithTitle:(id)arg1 publishId:(id)arg2 language:(id)arg3;	// IMP=0x0000000101476c7c

@end
