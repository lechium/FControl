//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface RqdCrashReporterLiteException : NSObject <NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSString *_threadName;	// 24 = 0x18
    NSString *_callStack;	// 32 = 0x20
    NSString *_appId;	// 40 = 0x28
    NSString *_bundleId;	// 48 = 0x30
    NSString *_appVersion;	// 56 = 0x38
    NSString *_processName;	// 64 = 0x40
    NSString *_cpuArch;	// 72 = 0x48
    NSString *_execUUID;	// 80 = 0x50
    NSString *_baseAddr;	// 88 = 0x58
    NSString *_typeString;	// 96 = 0x60
    unsigned long long _extensionType;	// 104 = 0x68
    double _time;	// 112 = 0x70
    NSString *_screenBoundsString;	// 120 = 0x78
    NSString *_systemVersion;	// 128 = 0x80
    NSString *_deviceName;	// 136 = 0x88
    NSString *_model;	// 144 = 0x90
    NSString *_systemName;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100761888
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *screenBoundsString; // @synthesize screenBoundsString=_screenBoundsString;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long extensionType; // @synthesize extensionType=_extensionType;
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(copy, nonatomic) NSString *baseAddr; // @synthesize baseAddr=_baseAddr;
@property(copy, nonatomic) NSString *execUUID; // @synthesize execUUID=_execUUID;
@property(copy, nonatomic) NSString *cpuArch; // @synthesize cpuArch=_cpuArch;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *callStack; // @synthesize callStack=_callStack;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x0000000100762610
- (id)bugly_encode16:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000001007623ac
- (id)getcpu:(int)arg1 subType:(int)arg2;	// IMP=0x00000001007622cc
- (void)fetchArchInfo;	// IMP=0x0000000100762114
- (id)description;	// IMP=0x0000000100761bc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100761418
- (id)initWithException:(id)arg1;	// IMP=0x000000010076127c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100760db8

@end

