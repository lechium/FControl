//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL, UIImage;

@interface FBSDKSharePhoto : NSObject <FBSDKCopying, NSSecureCoding>
{
    _Bool _userGenerated;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSURL *_imageURL;	// 24 = 0x18
    NSString *_caption;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001007204dc
+ (id)photoWithImageURL:(id)arg1 userGenerated:(_Bool)arg2;	// IMP=0x000000010072017c
+ (id)photoWithImage:(id)arg1 userGenerated:(_Bool)arg2;	// IMP=0x00000001007200f4
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(nonatomic, getter=isUserGenerated) _Bool userGenerated; // @synthesize userGenerated=_userGenerated;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;	// IMP=0x0000000100720860
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100720714
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100720644
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001007204e4
- (_Bool)isEqualToSharePhoto:(id)arg1;	// IMP=0x0000000100720360
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001007202d0
@property(readonly) unsigned long long hash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
