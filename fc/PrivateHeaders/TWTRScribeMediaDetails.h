//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TWTRScribeSerializable.h"

@class NSString;

@interface TWTRScribeMediaDetails : NSObject <TWTRScribeSerializable>
{
    NSString *_publisherID;	// 8 = 0x8
    NSString *_contentID;	// 16 = 0x10
    unsigned long long _mediaType;	// 24 = 0x18
}

+ (id)scribeKey;	// IMP=0x00000001007ff390
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, copy, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
- (void).cxx_destruct;	// IMP=0x00000001007ff528
- (id)dictionaryRepresentation;	// IMP=0x00000001007ff3bc
- (id)initWithPublisherID:(id)arg1 contentID:(id)arg2 mediaType:(unsigned long long)arg3;	// IMP=0x00000001007ff2a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

