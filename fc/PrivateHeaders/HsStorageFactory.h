//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsStorageFactory : NSObject
{
    id <HsKeyValueStorage> _keyValueStorage;	// 8 = 0x8
    id <HsPersistentStorage> _persistentStorage;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000101476360
@property(retain, nonatomic) id <HsPersistentStorage> persistentStorage; // @synthesize persistentStorage=_persistentStorage;
@property(retain, nonatomic) id <HsKeyValueStorage> keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
- (void).cxx_destruct;	// IMP=0x00000001014764e0

@end
