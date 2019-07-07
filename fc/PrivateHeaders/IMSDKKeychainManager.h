//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMSDKKeychainManager : NSObject
{
    _Bool _isOperating;	// 8 = 0x8
    NSMutableDictionary *_keychainData;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010062c134
@property(nonatomic) _Bool isOperating; // @synthesize isOperating=_isOperating;
@property(retain, nonatomic) NSMutableDictionary *keychainData; // @synthesize keychainData=_keychainData;
- (void).cxx_destruct;	// IMP=0x000000010062cc20
- (void)resetAllKeychainItem;	// IMP=0x000000010062c96c
- (void)resetKeychainItemWithIdentifier:(id)arg1;	// IMP=0x000000010062c6f0
- (void)saveObject:(id)arg1 identifier:(id)arg2;	// IMP=0x000000010062c46c
- (id)objectWithIdentifier:(id)arg1;	// IMP=0x000000010062c1b4
- (void)dealloc;	// IMP=0x000000010062c0e0

@end
