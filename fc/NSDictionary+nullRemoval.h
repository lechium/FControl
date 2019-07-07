//
//  NSDictionary+trelloAdditions.h
//  XTrello
//
//  Created by Kevin Bradley on 7/10/14.
//  Copyright (c) 2014 Kevin Bradley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (nullRemoval)

- (BOOL)boolForKey:(NSString *)key;
- (NSDictionary *)dictionaryByReplacingNullsWithStrings;
- (NSString *)stringRepresentation;
- (NSString *)base64String;
- (NSDictionary *)dictionaryByRemovingNull;
- (NSString *)JSONStringRepresentation;
@end

@interface NSArray (nullRemoval)
- (NSArray *)nullReplacedArray;
- (NSArray *)reverseArray;
@end

@interface NSObject (documents)

+ (NSString *)documentsFolder;
- (NSString *)JSONString;
@end

