//
//  NSDictionary+trelloAdditions.m
//  XTrello
//
//  Created by Kevin Bradley on 7/10/14.
//  Copyright (c) 2014 Kevin Bradley. All rights reserved.
//

#import "NSDictionary+nullRemoval.h"

@implementation NSDictionary (nullRemoval)

- (BOOL)boolForKey:(NSString *)key
{
    return [[self valueForKey:key] boolValue];
}


- (NSString *)JSONStringRepresentation
{
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self options:NSJSONWritingPrettyPrinted error:nil];
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}


- (NSString *)stringRepresentation
{
	NSString *error = nil;
	NSData *xmlData = [NSPropertyListSerialization dataFromPropertyList:self format:NSPropertyListXMLFormat_v1_0 errorDescription:&error];
	NSString *s=[[NSString alloc] initWithData:xmlData encoding: NSUTF8StringEncoding];
	return s;
}

- (NSString *)base64String
{
    NSString *error = nil;
    NSData *xmlData = [NSPropertyListSerialization dataFromPropertyList:self format:NSPropertyListXMLFormat_v1_0 errorDescription:&error];
    return [xmlData base64EncodedStringWithOptions:0];
}

- (NSDictionary *)dictionaryByRemovingNull {
    const NSMutableDictionary *replaced = [self mutableCopy];
    const id nul = [NSNull null];
  //  const NSString *blank = @"";
    
    for(NSString *key in self) {
        const id object = [self objectForKey:key];
        if(object == nul) {
            //pointer comparison is way faster than -isKindOfClass:
            //since [NSNull null] is a singleton, they'll all point to the same
            //location in memory.
         
            [replaced removeObjectForKey:key];
            //   [replaced setObject:blank
         //                forKey:key];
        }
        if ([object respondsToSelector:@selector(allKeys)])
        {
            id newObject = [object dictionaryByRemovingNull];
            [replaced setObject:newObject forKey:key];
        } else if ([object respondsToSelector:@selector(objectAtIndex:)])
        {
            id newObject = [object nullReplacedArray];
            [replaced setObject:newObject forKey:key];
        }
    }
    
    return [replaced copy];
}

- (NSDictionary *)dictionaryByReplacingNullsWithStrings {
    const NSMutableDictionary *replaced = [self mutableCopy];
    const id nul = [NSNull null];
    const NSString *blank = @"";
    
    for(NSString *key in self) {
        const id object = [self objectForKey:key];
        if(object == nul) {
            //pointer comparison is way faster than -isKindOfClass:
            //since [NSNull null] is a singleton, they'll all point to the same
            //location in memory.
            [replaced setObject:blank
                         forKey:key];
        }
        if ([object respondsToSelector:@selector(allKeys)])
        {
            id newObject = [object dictionaryByReplacingNullsWithStrings];
            [replaced setObject:newObject forKey:key];
        } else if ([object respondsToSelector:@selector(objectAtIndex:)])
        {
            id newObject = [object nullReplacedArray];
            [replaced setObject:newObject forKey:key];
        }
    }
    
    return [replaced copy];
}

@end

@implementation NSArray (nullRemoval)



- (NSArray *)reverseArray
{
    return [[self reverseObjectEnumerator] allObjects];
}

- (NSArray *)nullReplacedArray
{
    NSMutableArray *newArray = [[NSMutableArray alloc] init];
    for (NSDictionary *currentDictionary in self)
    {
        if ([currentDictionary respondsToSelector:@selector(allKeys)])
        {
            if ([[currentDictionary allKeys] containsObject:@"msg"])
            {
                //NSLog(@"server message: %@", [currentDictionary objectForKey:@"msg"]);
                return nil;
            }
            NSDictionary *newDict = [currentDictionary dictionaryByReplacingNullsWithStrings];
            [newArray addObject:newDict];
    
        } else {
           // NSLog(@"improper JSON: %@", currentDictionary);
            [newArray addObject:currentDictionary];
            
        }
        
    }
    return newArray;
}

@end

@implementation NSObject (documents)

- (NSString *)JSONString
{
    NSError* error;
    // Get dictionary into JSON
    NSData* jsonData = [NSJSONSerialization dataWithJSONObject:self
                                                       options:NSJSONWritingPrettyPrinted // or NSJSONWritingPrettyPrinted
                                                         error:&error];
    if (error != nil || jsonData == nil)
    {
        return nil;
    }
    
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    
}

+ (NSString *)documentsFolder
{
     NSArray* paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
     return [paths objectAtIndex:0];
}

@end
