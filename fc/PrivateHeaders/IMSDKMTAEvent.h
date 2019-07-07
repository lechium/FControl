//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKMTAEventProtocol.h"

@class NSString;

@interface IMSDKMTAEvent : NSObject <IMSDKMTAEventProtocol>
{
    _Bool _isRealTime;	// 8 = 0x8
    unsigned int _sid;	// 12 = 0xc
    unsigned int _ts;	// 16 = 0x10
    int _eventIndex;	// 20 = 0x14
    NSString *_timeStr;	// 24 = 0x18
    NSString *_appkey;	// 32 = 0x20
}

@property _Bool isRealTime; // @synthesize isRealTime=_isRealTime;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
@property int eventIndex; // @synthesize eventIndex=_eventIndex;
@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int sid; // @synthesize sid=_sid;
- (void).cxx_destruct;	// IMP=0x00000001006529d8
- (id)toJsonString;	// IMP=0x0000000100651c74
- (int)generateIDX;	// IMP=0x0000000100651b04
- (int)getRandomNumber:(int)arg1 to:(int)arg2;	// IMP=0x0000000100651ac8
- (void)encode:(id)arg1;	// IMP=0x0000000100651ac4
- (int)getType;	// IMP=0x0000000100651abc
- (id)init;	// IMP=0x0000000100651954

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
