//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKObject.h"

@class NSNumber;

@interface VKPostSettings : VKObject
{
    NSNumber *_friendsOnly;	// 8 = 0x8
    NSNumber *_exportTwitter;	// 16 = 0x10
    NSNumber *_exportFacebook;	// 24 = 0x18
    NSNumber *_exportLivejournal;	// 32 = 0x20
}

@property(retain, nonatomic) NSNumber *exportLivejournal; // @synthesize exportLivejournal=_exportLivejournal;
@property(retain, nonatomic) NSNumber *exportFacebook; // @synthesize exportFacebook=_exportFacebook;
@property(retain, nonatomic) NSNumber *exportTwitter; // @synthesize exportTwitter=_exportTwitter;
@property(retain, nonatomic) NSNumber *friendsOnly; // @synthesize friendsOnly=_friendsOnly;
- (void).cxx_destruct;	// IMP=0x0000000100b5f0bc

@end

