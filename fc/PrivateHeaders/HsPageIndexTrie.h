//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsPageIndexTrieNode, NSMutableArray, NSNumber;

@interface HsPageIndexTrie : NSObject
{
    NSNumber *_BATCH_SIZE;	// 8 = 0x8
    NSNumber *_MAX_TOKEN_SIZE;	// 16 = 0x10
    NSNumber *_totalDocNumber;	// 24 = 0x18
    HsPageIndexTrieNode *_root;	// 32 = 0x20
    NSMutableArray *_searchTokenList;	// 40 = 0x28
    id <HsSearchTokenDao> _searchTokenDao;	// 48 = 0x30
}

+ (int)termWeightForType:(int)arg1;	// IMP=0x0000000101407358
@property(retain) id <HsSearchTokenDao> searchTokenDao; // @synthesize searchTokenDao=_searchTokenDao;
@property(retain) NSMutableArray *searchTokenList; // @synthesize searchTokenList=_searchTokenList;
@property(retain) HsPageIndexTrieNode *root; // @synthesize root=_root;
@property(retain) NSNumber *totalDocNumber; // @synthesize totalDocNumber=_totalDocNumber;
@property(retain) NSNumber *MAX_TOKEN_SIZE; // @synthesize MAX_TOKEN_SIZE=_MAX_TOKEN_SIZE;
@property(retain) NSNumber *BATCH_SIZE; // @synthesize BATCH_SIZE=_BATCH_SIZE;
- (void).cxx_destruct;	// IMP=0x000000010140741c
- (void)createTFIDFTokenAndStorePageIndexTrieNode:(id)arg1 prefix:(id)arg2 level:(id)arg3;	// IMP=0x0000000101406b40
- (void)createTFIDFTokenAndStore;	// IMP=0x0000000101406808
- (void)insertWord:(id)arg1 type:(int)arg2 key:(id)arg3;	// IMP=0x00000001014064dc
- (id)initWithTotalDocNumber:(id)arg1;	// IMP=0x0000000101406344

@end
