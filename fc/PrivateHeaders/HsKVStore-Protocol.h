//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol HsKVStore <NSObject>
- (void)destroyWithError:(id *)arg1;
- (void)removeItemForKey:(NSString *)arg1 withError:(id *)arg2;
- (id <NSCoding>)objectForKey:(NSString *)arg1 withDefaultValue:(id <NSCoding>)arg2 withError:(id *)arg3;
- (void)setObject:(id <NSCoding>)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (NSString *)stringValueForKey:(NSString *)arg1 withDefaultValue:(NSString *)arg2 withError:(id *)arg3;
- (void)setStringValue:(NSString *)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (long long)longValueForKey:(NSString *)arg1 withDefaultValue:(long long)arg2 withError:(id *)arg3;
- (void)setLongValue:(long long)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (float)floatValueForKey:(NSString *)arg1 withDefaultValue:(float)arg2 withError:(id *)arg3;
- (void)setFloatValue:(float)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (int)intValueForKey:(NSString *)arg1 withDefaultValue:(int)arg2 withError:(id *)arg3;
- (void)setIntValue:(int)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (_Bool)booleanValueForKey:(NSString *)arg1 withDefaultValue:(_Bool)arg2 withError:(id *)arg3;
- (void)setBooleanValue:(_Bool)arg1 forKey:(NSString *)arg2 withError:(id *)arg3;
- (id)initWithPlatform:(id <HsPlatform>)arg1 domainName:(NSString *)arg2 withError:(id *)arg3;
@end

