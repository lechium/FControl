//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSDKToolStatRSA : NSObject
{
}

+ (id)decryptData:(id)arg1 publicKey:(id)arg2;	// IMP=0x000000010062f380
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;	// IMP=0x000000010062f298
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;	// IMP=0x000000010062f204
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;	// IMP=0x000000010062f12c
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;	// IMP=0x000000010062f098
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;	// IMP=0x000000010062efb0
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;	// IMP=0x000000010062ee18
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;	// IMP=0x000000010062ed84
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;	// IMP=0x000000010062ec40
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2;	// IMP=0x000000010062eae4
+ (struct __SecKey *)addPrivateKey:(id)arg1;	// IMP=0x000000010062e658
+ (struct __SecKey *)addPublicKey:(id)arg1;	// IMP=0x000000010062e190
+ (id)stripPrivateKeyHeader:(id)arg1;	// IMP=0x000000010062e0ac
+ (id)stripPublicKeyHeader:(id)arg1;	// IMP=0x000000010062dfa0

@end

