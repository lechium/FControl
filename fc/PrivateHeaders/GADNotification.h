//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GADNotification : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
}

+ (_Bool)isNotificationURL:(id)arg1;	// IMP=0x00000001009ca0c0
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x00000001009ca440
- (id)description;	// IMP=0x00000001009ca380
- (id)initWithNotificationURL:(id)arg1;	// IMP=0x00000001009ca268
- (id)initWithName:(id)arg1 parameters:(id)arg2;	// IMP=0x00000001009ca158
- (id)init;	// IMP=0x00000001009ca140

@end

