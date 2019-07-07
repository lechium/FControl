//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsSQLDbHelper;

@interface HsConversationPersistentStorage : NSObject
{
    HsSQLDbHelper *_dbHelper;	// 8 = 0x8
}

+ (void)destroyWithError:(id *)arg1;	// IMP=0x000000010133f100
+ (id)createTableQueries;	// IMP=0x000000010133ed8c
+ (id)dbPath;	// IMP=0x000000010133ed04
- (void).cxx_destruct;	// IMP=0x000000010133fdac
- (void)runQuery:(id)arg1 withParams:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010133fd48
- (void)setCurrentDatabaseVersion:(int)arg1;	// IMP=0x000000010133fd30
- (int)databaseVersion;	// IMP=0x000000010133fd18
- (void)addDefaultValues:(id)arg1 ToColumns:(id)arg2 inTables:(id)arg3 withError:(id *)arg4;	// IMP=0x000000010133fa00
- (void)addColumns:(id)arg1 columnTypes:(id)arg2 toTables:(id)arg3 withError:(id *)arg4;	// IMP=0x000000010133f7b8
- (id)getOldestConversationCreatedAtTimeForUser:(id)arg1;	// IMP=0x000000010133f604
- (id)getLatestConversationCreatedAtTimeForUser:(id)arg1;	// IMP=0x000000010133f450
- (id)conversationMetaFromConversationDM:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133f1c8
- (void)destroyAndRecreateWithError:(id *)arg1;	// IMP=0x000000010133ebf4
- (id)initWithError:(id *)arg1;	// IMP=0x000000010133ead4
- (id)conversationDMFromDict:(id)arg1;	// IMP=0x000000010133e328
- (void)addAutoRetriableMetaForMessage:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133e270
- (unsigned long long)messageSyncStateFromServerId:(id)arg1 metaDict:(id)arg2;	// IMP=0x000000010133e15c
- (_Bool)doesConversationExistForSdkId:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133dffc
- (void)removeAgentSuggestedFAQForPublishId:(id)arg1 andLanguage:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010133dee4
- (void)insertOrUpdateAgentSuggestedFAQ:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133d9d4
- (id)agentSuggestedFAQForPublishId:(id)arg1 andLanguage:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010133d7c0
- (void)addMetaForDateTime:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133d6e0
- (void)addMetaForBotInfo:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133d664
- (void)addMetaForInputKeyboardType:(unsigned long long)arg1 toDict:(id)arg2;	// IMP=0x000000010133d5d4
- (void)addMetaForIsResponseSkipped:(_Bool)arg1 toDict:(id)arg2;	// IMP=0x000000010133d544
- (void)addMetaForSelectedOptionData:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133d4c8
- (void)addMetaForReferredMessageType:(unsigned long long)arg1 toDict:(id)arg2;	// IMP=0x000000010133d438
- (void)addMetaForOptionInput:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133cfe8
- (void)addMetaForTextInput:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133ccf0
- (void)addFAQListMetaFromMessage:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c9ec
- (void)addAttachmentMetaFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c688
- (void)addAdminImageAttachmentMetaFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c5b4
- (void)addFollowupRejectedFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c46c
- (void)addIsSuggestionsReadEventSentMetaFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c378
- (void)addReferredMetaFromID:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c2fc
- (void)addMessageSeenMetaFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c12c
- (void)addIsAnsweredMetaFromBOOL:(_Bool)arg1 toDict:(id)arg2;	// IMP=0x000000010133c09c
- (void)addUserImageAttachmentMetaFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133c04c
- (void)addImageAttachmentMetaFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133bba8
- (void)addUserBotControlMessageFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133ba3c
- (void)addAgentBotControlMessageFromDM:(id)arg1 toDict:(id)arg2;	// IMP=0x000000010133b924
- (void)addIsMessageEmptyMetaFromBOOL:(_Bool)arg1 toDict:(id)arg2;	// IMP=0x000000010133b894
- (void)deleteConversationsForUser:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133b69c
- (void)deleteConversationInboxDataForUser:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133b574
- (_Bool)updateMessages:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133af1c
- (id)metaForMessageDM:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133a658
- (id)insertMessages:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010133a030
- (id)readMessagesForConversationLocalId:(id)arg1 createdBefore:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000101339cd4
- (id)messageDMForMessageServerId:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101339ba8
- (id)messageDMForMessageLocalId:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101339a54
- (_Bool)isSecureAttachmentFromMeta:(id)arg1;	// IMP=0x00000001013399ac
- (_Bool)isSuggestionsReadEventSentFromMeta:(id)arg1;	// IMP=0x0000000101339904
- (id)suggestionReadFAQPublishIdFromMeta:(id)arg1;	// IMP=0x0000000101339804
- (id)suggestedFaqsFromMeta:(id)arg1;	// IMP=0x0000000101339550
- (id)inputOptionsFromMeta:(id)arg1;	// IMP=0x00000001013392d0
- (_Bool)hasNextBotFromMeta:(id)arg1;	// IMP=0x00000001013391f0
- (_Bool)isMessageEmptyFromDict:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0000000101339134
- (unsigned long long)keyboardTypeFromDict:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x0000000101339078
- (_Bool)isResponseSkippedFromMeta:(id)arg1;	// IMP=0x0000000101338fb4
- (id)botEndedReasonFromMeta:(id)arg1;	// IMP=0x0000000101338f00
- (unsigned long long)botControlActionFromMeta:(id)arg1;	// IMP=0x0000000101338e48
- (id)selectedOptionDataFromMeta:(id)arg1;	// IMP=0x0000000101338d94
- (unsigned long long)messageReferredTypeFromMeta:(id)arg1;	// IMP=0x0000000101338cd4
- (id)botInfoStringFromMeta:(id)arg1;	// IMP=0x0000000101338b74
- (_Bool)isAnsweredFromMeta:(id)arg1;	// IMP=0x0000000101338ab4
- (void)populateFollowupRejectedDataForDM:(id)arg1 withData:(id)arg2;	// IMP=0x0000000101338994
- (void)populateMessageSeenDataForDM:(id)arg1 withData:(id)arg2;	// IMP=0x000000010133883c
- (id)dictToMessageDM:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101337048
- (id)conversationInboxDTOForUserLocalId:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101336bb4
- (_Bool)storeConversationInboxDTO:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013364b4
- (id)messagesForConversationIds:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013361dc
- (id)messageCountsForConversationIds:(id)arg1 forMessageTypes:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000101335c68
- (void)deleteConversationWithSDKId:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101335adc
- (id)conversationDMForConversationLocalId:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013358d4
- (id)userLocalIdForConversationServerId:(id)arg1 preconversationServerId:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010133554c
- (id)preconversationDMForPreconversationServerId:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101335350
- (id)conversationDMForConversationServerId:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101335154
- (id)conversationDMsForUserLocalId:(id)arg1 createdBeforeOrOn:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000101334e2c
- (_Bool)updateConversation:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001013347d8
- (id)rowIdFromStoringConversationDM:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000101334214

@end
