//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GSDKDetectPort : NSObject
{
    _Bool _isFinished;	// 8 = 0x8
    NSString *_hip;	// 16 = 0x10
    NSString *_result;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *hip; // @synthesize hip=_hip;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;	// IMP=0x00000001004f35a8
- (id)isConnection:(id)arg1 Port:(int)arg2;	// IMP=0x00000001004f2764
- (void)dealloc;	// IMP=0x00000001004f26f0

@end

