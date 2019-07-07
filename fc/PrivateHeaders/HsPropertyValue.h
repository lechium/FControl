//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface HsPropertyValue : NSObject <NSCopying, NSCoding>
{
    short _type;	// 8 = 0x8
    short _isSynced;	// 10 = 0xa
    id _value;	// 16 = 0x10
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) short isSynced; // @synthesize isSynced=_isSynced;
@property(nonatomic) short type; // @synthesize type=_type;
- (void).cxx_destruct;	// IMP=0x000000010141bdd8
- (_Bool)setDate:(id)arg1;	// IMP=0x000000010141bc58
- (_Bool)setBoolean:(_Bool)arg1;	// IMP=0x000000010141bb5c
- (_Bool)setLongLong:(long long)arg1;	// IMP=0x000000010141ba5c
- (_Bool)setString:(id)arg1;	// IMP=0x000000010141b930
- (_Bool)setObject:(id)arg1;	// IMP=0x000000010141b748
- (id)getValue;	// IMP=0x000000010141b73c
- (id)getValueInfo;	// IMP=0x000000010141b56c
- (id)getTypeInString;	// IMP=0x000000010141b4c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010141b42c
- (_Bool)isEqualToPropertyValue:(id)arg1;	// IMP=0x000000010141b2b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010141b1dc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010141b0d8
- (id)initWithDate:(id)arg1;	// IMP=0x000000010141afe0
- (id)initWithBoolean:(_Bool)arg1;	// IMP=0x000000010141af58
- (id)initWithLongLong:(long long)arg1;	// IMP=0x000000010141aed0
- (id)initWithString:(id)arg1;	// IMP=0x000000010141ad9c
- (id)initWithType:(short)arg1 andValue:(id)arg2;	// IMP=0x000000010141ab9c
- (id)initWithObject:(id)arg1;	// IMP=0x000000010141a9c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010141a918
- (id)init;	// IMP=0x000000010141a894

@end

