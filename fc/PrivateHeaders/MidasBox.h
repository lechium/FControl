//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasContext;

@interface MidasBox : NSObject
{
    MidasContext *_context;	// 8 = 0x8
}

+ (id)shareInstance;	// IMP=0x0000000100523fb4
@property(retain, nonatomic) MidasContext *context; // @synthesize context=_context;
- (void).cxx_destruct;	// IMP=0x0000000100524124
- (void)addRouter:(Class)arg1;	// IMP=0x00000001005240fc
- (void)registerService:(id)arg1 service:(Class)arg2;	// IMP=0x0000000100524084
- (void)registerModule:(Class)arg1;	// IMP=0x0000000100524034

@end

