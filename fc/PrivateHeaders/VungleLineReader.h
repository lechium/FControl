//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString;

@interface VungleLineReader : NSObject
{
    NSString *_lineDelimiter;	// 8 = 0x8
    unsigned long long _chunkSize;	// 16 = 0x10
    NSString *_filePath;	// 24 = 0x18
    NSFileHandle *_fileHandle;	// 32 = 0x20
    unsigned long long _currentOffset;	// 40 = 0x28
    unsigned long long _totalFileLength;	// 48 = 0x30
}

@property(nonatomic) unsigned long long totalFileLength; // @synthesize totalFileLength=_totalFileLength;
@property(nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property(copy, nonatomic) NSString *lineDelimiter; // @synthesize lineDelimiter=_lineDelimiter;
- (void).cxx_destruct;	// IMP=0x0000000100acb2e4
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100acb184
- (id)readTrimmedLine;	// IMP=0x0000000100acb0f8
- (id)readLine;	// IMP=0x0000000100acacf8
- (void)dealloc;	// IMP=0x0000000100acac88
- (id)initWithFilePath:(id)arg1;	// IMP=0x0000000100acaad8

@end
