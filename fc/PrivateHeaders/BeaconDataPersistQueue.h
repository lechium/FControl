//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BeaconDataPersistQueue : NSObject
{
    NSMutableArray *headList;	// 8 = 0x8
    NSMutableArray *tailList;	// 16 = 0x10
    int maxSize;	// 24 = 0x18
    int currSize;	// 28 = 0x1c
}

+ (id)sharedInstance;	// IMP=0x00000001007dfa9c
- (void).cxx_destruct;	// IMP=0x00000001007e0340
- (void)dealloc;	// IMP=0x00000001007e02d4
- (id)fetchAllObjectsAndClean;	// IMP=0x00000001007dff54
- (void)addToTailList:(id)arg1;	// IMP=0x00000001007dff0c
- (void)addToHeadList:(id)arg1;	// IMP=0x00000001007dfec4
- (void)addObject:(id)arg1;	// IMP=0x00000001007dfdd8
- (_Bool)isFUll;	// IMP=0x00000001007dfd90
- (int)getCurrSize;	// IMP=0x00000001007dfd80
- (int)getMaxSize;	// IMP=0x00000001007dfd70
- (void)setMaxSize:(int)arg1;	// IMP=0x00000001007dfc1c
- (id)init;	// IMP=0x00000001007dfb24

@end
