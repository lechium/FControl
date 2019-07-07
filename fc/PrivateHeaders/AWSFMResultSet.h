//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSFMDatabase, AWSFMStatement, NSMutableDictionary, NSString;

@interface AWSFMResultSet : NSObject
{
    AWSFMDatabase *_parentDB;	// 8 = 0x8
    AWSFMStatement *_statement;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
    NSMutableDictionary *_columnNameToIndexMap;	// 32 = 0x20
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;	// IMP=0x0000000100bb16e8
@property(retain) AWSFMStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;	// IMP=0x0000000100bb2bdc
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000100bb2b98
- (id)objectAtIndexedSubscript:(int)arg1;	// IMP=0x0000000100bb2b8c
- (void)setParentDB:(id)arg1;	// IMP=0x0000000100bb2b78
- (id)columnNameForIndex:(int)arg1;	// IMP=0x0000000100bb2b24
- (id)objectForColumnName:(id)arg1;	// IMP=0x0000000100bb2aec
- (id)objectForColumnIndex:(int)arg1;	// IMP=0x0000000100bb29c8
- (const char *)UTF8StringForColumnName:(id)arg1;	// IMP=0x0000000100bb2990
- (const char *)UTF8StringForColumnIndex:(int)arg1;	// IMP=0x0000000100bb2914
- (_Bool)columnIsNull:(id)arg1;	// IMP=0x0000000100bb28dc
- (_Bool)columnIndexIsNull:(int)arg1;	// IMP=0x0000000100bb2898
- (id)dataNoCopyForColumnIndex:(int)arg1;	// IMP=0x0000000100bb27d8
- (id)dataNoCopyForColumn:(id)arg1;	// IMP=0x0000000100bb27a0
- (id)dataForColumnIndex:(int)arg1;	// IMP=0x0000000100bb26d8
- (id)dataForColumn:(id)arg1;	// IMP=0x0000000100bb26a0
- (id)dateForColumnIndex:(int)arg1;	// IMP=0x0000000100bb25a0
- (id)dateForColumn:(id)arg1;	// IMP=0x0000000100bb2568
- (id)stringForColumn:(id)arg1;	// IMP=0x0000000100bb2530
- (id)stringForColumnIndex:(int)arg1;	// IMP=0x0000000100bb248c
- (double)doubleForColumnIndex:(int)arg1;	// IMP=0x0000000100bb2454
- (double)doubleForColumn:(id)arg1;	// IMP=0x0000000100bb241c
- (_Bool)boolForColumnIndex:(int)arg1;	// IMP=0x0000000100bb23f8
- (_Bool)boolForColumn:(id)arg1;	// IMP=0x0000000100bb23c0
- (unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1;	// IMP=0x0000000100bb23b4
- (unsigned long long)unsignedLongLongIntForColumn:(id)arg1;	// IMP=0x0000000100bb237c
- (long long)longLongIntForColumnIndex:(int)arg1;	// IMP=0x0000000100bb2344
- (long long)longLongIntForColumn:(id)arg1;	// IMP=0x0000000100bb230c
- (long long)longForColumnIndex:(int)arg1;	// IMP=0x0000000100bb22d4
- (long long)longForColumn:(id)arg1;	// IMP=0x0000000100bb229c
- (int)intForColumnIndex:(int)arg1;	// IMP=0x0000000100bb2264
- (int)intForColumn:(id)arg1;	// IMP=0x0000000100bb222c
- (int)columnIndexForName:(id)arg1;	// IMP=0x0000000100bb2160
- (_Bool)hasAnotherRow;	// IMP=0x0000000100bb212c
- (_Bool)nextWithError:(id *)arg1;	// IMP=0x0000000100bb1ed0
- (_Bool)next;	// IMP=0x0000000100bb1ec0
- (id)resultDictionary;	// IMP=0x0000000100bb1d58
- (id)resultDict;	// IMP=0x0000000100bb1bd4
- (void)kvcMagic:(id)arg1;	// IMP=0x0000000100bb1aa0
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
- (int)columnCount;	// IMP=0x0000000100bb18d4
- (void)close;	// IMP=0x0000000100bb1870
- (void)dealloc;	// IMP=0x0000000100bb17f8
- (void)finalize;	// IMP=0x0000000100bb17a8

@end
