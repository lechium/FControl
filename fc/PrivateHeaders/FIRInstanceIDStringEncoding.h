//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface FIRInstanceIDStringEncoding : NSObject
{
    NSData *charMapData_;	// 8 = 0x8
    char *charMap_;	// 16 = 0x10
    int reverseCharMap_[128];	// 24 = 0x18
    int shift_;	// 536 = 0x218
    int mask_;	// 540 = 0x21c
    _Bool doPad_;	// 544 = 0x220
    BOOL paddingChar_;	// 545 = 0x221
    int padLen_;	// 548 = 0x224
}

+ (id)stringEncodingWithString:(id)arg1;	// IMP=0x000000010091e810
+ (id)rfc4648Base64WebsafeStringEncoding;	// IMP=0x000000010091e7b0
- (void).cxx_destruct;	// IMP=0x000000010091eee0
- (id)decode:(id)arg1;	// IMP=0x000000010091ed3c
- (id)encode:(id)arg1;	// IMP=0x000000010091eb30
- (void)setPaddingChar:(BOOL)arg1;	// IMP=0x000000010091eb0c
- (void)setDoPad:(_Bool)arg1;	// IMP=0x000000010091eafc
- (_Bool)doPad;	// IMP=0x000000010091eaec
- (id)description;	// IMP=0x000000010091ea90
- (id)initWithString:(id)arg1;	// IMP=0x000000010091e878

@end

