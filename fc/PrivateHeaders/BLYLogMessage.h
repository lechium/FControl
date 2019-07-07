//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface BLYLogMessage : NSObject <NSCopying>
{
    NSString *_message;	// 8 = 0x8
    unsigned long long _level;	// 16 = 0x10
    NSString *_file;	// 24 = 0x18
    NSString *_fileName;	// 32 = 0x20
    NSString *_function;	// 40 = 0x28
    unsigned long long _line;	// 48 = 0x30
    NSString *_tag;	// 56 = 0x38
    NSString *_processId;	// 64 = 0x40
    NSString *_threadId;	// 72 = 0x48
    NSString *_threadName;	// 80 = 0x50
    struct tm _timestamp;	// 88 = 0x58
}

@property(readonly, nonatomic) struct tm timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, nonatomic) NSString *processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) unsigned long long line; // @synthesize line=_line;
@property(readonly, nonatomic) NSString *function; // @synthesize function=_function;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly, nonatomic) NSString *file; // @synthesize file=_file;
@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x0000000100728a98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100728894
- (id)logTag;	// IMP=0x00000001007287e8
- (id)logLevelFullName;	// IMP=0x000000010072872c
- (id)logLevelName;	// IMP=0x0000000100728668
- (id)initWithMessage:(id)arg1 level:(unsigned long long)arg2 file:(id)arg3 function:(id)arg4 line:(unsigned long long)arg5 tag:(id)arg6 timestamp:(id)arg7;	// IMP=0x0000000100728300

@end
