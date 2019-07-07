//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GTMLogWriter.h"

@class NSString;

@interface GTMLogger : NSObject <GTMLogWriter>
{
    id <GTMLogWriter> writer_;	// 8 = 0x8
    id <GTMLogFormatter> formatter_;	// 16 = 0x10
    id <GTMLogFilter> filter_;	// 24 = 0x18
}

+ (id)logger;	// IMP=0x0000000100928904
+ (id)loggerWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3;	// IMP=0x00000001009288ac
+ (id)standardLoggerWithPath:(id)arg1;	// IMP=0x0000000100928820
+ (id)standardLoggerWithStdoutAndStderr;	// IMP=0x0000000100928634
+ (id)standardLoggerWithStderr;	// IMP=0x00000001009285c0
+ (id)standardLogger;	// IMP=0x00000001009284c8
+ (void)setSharedLogger:(id)arg1;	// IMP=0x000000010092845c
+ (id)sharedLogger;	// IMP=0x00000001009283c8
- (void)logAssert:(id)arg1;	// IMP=0x0000000100928df4
- (void)logError:(id)arg1;	// IMP=0x0000000100928db4
- (void)logInfo:(id)arg1;	// IMP=0x0000000100928d74
- (void)logDebug:(id)arg1;	// IMP=0x0000000100928d34
- (void)setFilter:(id)arg1;	// IMP=0x0000000100928c7c
- (id)filter;	// IMP=0x0000000100928c4c
- (void)setFormatter:(id)arg1;	// IMP=0x0000000100928b94
- (id)formatter;	// IMP=0x0000000100928b64
- (void)setWriter:(id)arg1;	// IMP=0x0000000100928aac
- (id)writer;	// IMP=0x0000000100928a7c
- (void)dealloc;	// IMP=0x00000001009289e8
- (id)initWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3;	// IMP=0x000000010092894c
- (id)init;	// IMP=0x0000000100928934
- (void)logFuncAssert:(const char *)arg1 msg:(id)arg2;	// IMP=0x0000000100928ed0
- (void)logFuncError:(const char *)arg1 msg:(id)arg2;	// IMP=0x0000000100928e9c
- (void)logFuncInfo:(const char *)arg1 msg:(id)arg2;	// IMP=0x0000000100928e68
- (void)logFuncDebug:(const char *)arg1 msg:(id)arg2;	// IMP=0x0000000100928e34
- (void)logInternalFunc:(const char *)arg1 format:(id)arg2 valist:(char *)arg3 level:(int)arg4;	// IMP=0x0000000100928f04
- (void)logMessage:(id)arg1 level:(int)arg2;	// IMP=0x000000010092928c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

