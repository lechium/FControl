//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MidasIAPCacheComletionItem : NSObject
{
    NSString *_key;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;	// IMP=0x000000010058d6c0

@end
