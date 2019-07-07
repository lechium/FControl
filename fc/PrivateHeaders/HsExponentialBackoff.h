//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HsExponentialBackoff : NSObject
{
    float _randomness;	// 8 = 0x8
    float _multiplier;	// 12 = 0xc
    double _baseInterval;	// 16 = 0x10
    double _maxInterval;	// 24 = 0x18
    long long _maxAttempts;	// 32 = 0x20
    double _currentBaseInterval;	// 40 = 0x28
    long long _attempts;	// 48 = 0x30
}

@property(nonatomic) long long attempts; // @synthesize attempts=_attempts;
@property(nonatomic) double currentBaseInterval; // @synthesize currentBaseInterval=_currentBaseInterval;
@property(nonatomic) long long maxAttempts; // @synthesize maxAttempts=_maxAttempts;
@property(nonatomic) float multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) float randomness; // @synthesize randomness=_randomness;
@property(nonatomic) double maxInterval; // @synthesize maxInterval=_maxInterval;
@property(nonatomic) double baseInterval; // @synthesize baseInterval=_baseInterval;
- (double)nextInterval;	// IMP=0x000000010146c748
- (void)reset;	// IMP=0x000000010146c700
- (id)initWithBuilder:(id)arg1;	// IMP=0x000000010146c5e4

@end
