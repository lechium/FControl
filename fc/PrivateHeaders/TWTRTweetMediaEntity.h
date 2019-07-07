//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TWTRTweetEntity.h"

#import "TWTRJSONConvertible.h"

@class NSDictionary, NSString, TWTRVideoMetaData;

@interface TWTRTweetMediaEntity : TWTRTweetEntity <TWTRJSONConvertible>
{
    NSString *_mediaUrl;	// 8 = 0x8
    NSString *_displayURL;	// 16 = 0x10
    NSString *_tweetTextURL;	// 24 = 0x18
    NSDictionary *_sizes;	// 32 = 0x20
    NSString *_mediaID;	// 40 = 0x28
    unsigned long long _mediaType;	// 48 = 0x30
    TWTRVideoMetaData *_videoMetaData;	// 56 = 0x38
}

@property(readonly, nonatomic) TWTRVideoMetaData *videoMetaData; // @synthesize videoMetaData=_videoMetaData;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(readonly, copy, nonatomic) NSDictionary *sizes; // @synthesize sizes=_sizes;
@property(readonly, copy, nonatomic) NSString *tweetTextURL; // @synthesize tweetTextURL=_tweetTextURL;
@property(readonly, copy, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property(readonly, copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
- (void).cxx_destruct;	// IMP=0x0000000100852a90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100852a1c
- (_Bool)isEqualToMediaEntity:(id)arg1;	// IMP=0x00000001008526cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010085264c
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001008523dc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001008521f4
- (void)setPropertiesFromDict:(id)arg1;	// IMP=0x0000000100851f8c
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x0000000100851f10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

