/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactStore.h>

@protocol CNDataMapper, CNContactsLogger, CNRegulatoryLogger;
@interface CNDataMapperContactStore : CNContactStore {

	id<CNDataMapper> _mapper;
	id<CNContactsLogger> _logger;
	id<CNRegulatoryLogger> _regulatoryLogger;

}

@property (nonatomic,readonly) id<CNContactsLogger> logger;                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<CNRegulatoryLogger> regulatoryLogger;              //@synthesize regulatoryLogger=_regulatoryLogger - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<CNDataMapper> mapper;                //@synthesize mapper=_mapper - In the implementation block
+(BOOL)enableContactsOutOfProcess;
+(Class)dataMapperClass;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id)contactCountForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3 ;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(id)_allCustomProperties;
-(id)_createInfo;
-(id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2 ;
-(id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_persistentStoreURLForRecordWithIdentifier:(id)arg1 ;
-(BOOL)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3 ;
-(BOOL)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2 ;
-(id<CNRegulatoryLogger>)regulatoryLogger;
-(id)initWithEnvironment:(id)arg1 managedConfiguration:(id)arg2 ;
-(id)initWithDataMapper:(id)arg1 environment:(id)arg2 ;
-(NSObject*<CNDataMapper>)mapper;
-(id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 error:(id*)arg3 ;
-(BOOL)isValidSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_smartGroupsForAccountsWithIdentifiers:(id)arg1 ;
-(id)_smartGroupsMatchingPredicate:(id)arg1 ;
-(id)iOSMapper;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)defaultContainerIdentifier;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id<CNContactsLogger>)logger;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)description;
-(id)initWithEnvironment:(id)arg1 ;
@end

