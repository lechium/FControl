//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HSSectionDb : NSObject
{
    NSObject<OS_dispatch_queue> *workerQueue;	// 8 = 0x8
}

+ (_Bool)removeOldTablesAndRenameNewOnesInDatabase:(struct sqlite3 *)arg1 newSectionTableName:(id)arg2 newFAQTableName:(id)arg3;	// IMP=0x00000001013d8458
+ (_Bool)copyDataToNewTablesInDatabase:(struct sqlite3 *)arg1 newSectionTableName:(id)arg2 newFAQTableName:(id)arg3;	// IMP=0x00000001013d82d4
+ (_Bool)createNewFAQTablesOnDatabase:(struct sqlite3 *)arg1 newSectionTableName:(id)arg2 newFAQTableName:(id)arg3;	// IMP=0x00000001013d80f4
+ (_Bool)migrateSectionsPublishIdDataType;	// IMP=0x00000001013d7ea4
+ (id)getSectionListItemsForSections:(id)arg1;	// IMP=0x00000001013d7d34
+ (void)clearData;	// IMP=0x00000001013d7c20
+ (id)getSectionIdForPublishId:(id)arg1;	// IMP=0x00000001013d7ac8
+ (id)sectionListItemForPublishId:(id)arg1;	// IMP=0x00000001013d7628
+ (id)getSectionForPublishId:(id)arg1 withTagsFilter:(id)arg2;	// IMP=0x00000001013d70e4
+ (unsigned long long)getSectionsCount;	// IMP=0x00000001013d6efc
+ (id)getSectionIds;	// IMP=0x00000001013d6c3c
+ (id)getAllSectionsWithTagsFilter:(id)arg1;	// IMP=0x00000001013d66d4
+ (void)addEmptySectionForId:(id)arg1;	// IMP=0x00000001013d6514
+ (void)storeSection:(id)arg1;	// IMP=0x00000001013d642c
+ (void)storeSections:(id)arg1;	// IMP=0x00000001013d6254
+ (void)saveSections:(id)arg1;	// IMP=0x00000001013d5b70
+ (void)_storeSections:(id)arg1;	// IMP=0x00000001013d5b18
+ (id)doesExist:(id)arg1;	// IMP=0x00000001013d59f4
+ (id)getStringFromColumnBlob:(const void *)arg1 withSize:(int)arg2;	// IMP=0x00000001013d5988
+ (id)getColumns:(id)arg1;	// IMP=0x00000001013d5778
+ (id)sharedInstance;	// IMP=0x00000001013d56a0
- (void).cxx_destruct;	// IMP=0x00000001013d86f8

@end

