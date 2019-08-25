/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABSAddressBookContextStorage, ABSChangeCallbacks, CNFuture, ABSBulkFaultHandler, CNContactStore;

@interface ABSAddressBook : NSObject {

	ABSAddressBookContextStorage* _contacts;
	ABSChangeCallbacks* _changeCallbacks;
	CNFuture* _storeFuture;
	ABSBulkFaultHandler* _faultHandler;
	ABSAddressBookContextStorage* _groups;
	ABSAddressBookContextStorage* _sources;

}

@property (nonatomic,readonly) CNFuture * storeFuture;                             //@synthesize storeFuture=_storeFuture - In the implementation block
@property (nonatomic,readonly) ABSBulkFaultHandler * faultHandler;                 //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,retain) ABSAddressBookContextStorage * contacts;              //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) ABSAddressBookContextStorage * groups;                //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) ABSAddressBookContextStorage * sources;               //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) CNContactStore * store; 
@property (readonly) BOOL hasUnsavedChanges; 
@property (readonly) ABSChangeCallbacks * changeCallbacks;                         //@synthesize changeCallbacks=_changeCallbacks - In the implementation block
+(BOOL)eraseAllDataAtLocationName:(id)arg1 error:(id*)arg2 ;
+(void)requestAccessWithCompletion:(/*^block*/id)arg1 ;
+(id)localizedLabelForLabel:(id)arg1 ;
+(void)callLocalChangeCallbacks:(BOOL)arg1 ;
+(long long)authorizationStatus;
-(unsigned long long)_cfTypeID;
-(ABSBulkFaultHandler *)faultHandler;
-(ABSAddressBookContextStorage *)sources;
-(void)setSources:(ABSAddressBookContextStorage *)arg1 ;
-(id)allGroups;
-(id)peopleWithCNIdentifiers:(id)arg1 ;
-(void)completePerson:(id)arg1 withKeysToFetch:(id)arg2 ;
-(id)sourceForRecord:(id)arg1 ;
-(BOOL)recordUpdated:(id)arg1 ;
-(id)peopleLinkedToPerson:(id)arg1 ;
-(id)sourceWithRecordID:(int)arg1 ;
-(id)peopleInGroup:(id)arg1 sortOrder:(unsigned)arg2 ;
-(BOOL)addMember:(id)arg1 toGroup:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeMember:(id)arg1 fromGroup:(id)arg2 error:(id*)arg3 ;
-(id)groupWithRecordID:(int)arg1 ;
-(id)groupsInSource:(id)arg1 ;
-(id)initWithOptions:(id)arg1 policy:(int)arg2 error:(id*)arg3 ;
-(BOOL)removeRecord:(id)arg1 error:(id*)arg2 ;
-(void)registerExternalChangeCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)unregisterExternalChangeCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)initWithSettings:(id)arg1 error:(id*)arg2 ;
-(CNFuture *)storeFuture;
-(id)_storageForRecordClass:(Class)arg1 ;
-(void)updatePeople:(id)arg1 refetchingProperties:(id)arg2 ;
-(void)updateFetchingAllPropertiesForGroups:(id)arg1 ;
-(void)updateFetchingAllPropertiesForSources:(id)arg1 ;
-(ABSChangeCallbacks *)changeCallbacks;
-(id)contactsWithIdentifiers:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_resultRecordsFromFetchedCNImpls:(id)arg1 mergedWithStorage:(id)arg2 creationBlock:(/*^block*/id)arg3 ;
-(id)_peoplePreferringExistingRecordsFetchedWithPredicate:(id)arg1 sortOrder:(unsigned)arg2 ;
-(id)_sourcesPreferringExistingRecordsFetchedWithPredicate:(id)arg1 ;
-(id)personWithRecordID:(int)arg1 ;
-(id)peopleInSource:(id)arg1 sortOrder:(unsigned)arg2 ;
-(id)peopleMatchingNameString:(id)arg1 ;
-(BOOL)linkPerson:(id)arg1 toPerson:(id)arg2 ;
-(BOOL)unlinkPerson:(id)arg1 ;
-(ABSAddressBookContextStorage *)contacts;
-(BOOL)addRecord:(id)arg1 error:(id*)arg2 ;
-(void)revert;
-(id)localSource;
-(long long)groupCount;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(long long)personCount;
-(id)allSources;
-(void)setContacts:(ABSAddressBookContextStorage *)arg1 ;
-(CNContactStore *)store;
-(id)allPeople;
-(id)mePerson;
-(id)defaultSource;
-(id)init;
-(ABSAddressBookContextStorage *)groups;
-(void)setGroups:(ABSAddressBookContextStorage *)arg1 ;
-(BOOL)hasUnsavedChanges;
-(BOOL)save:(id*)arg1 ;
@end

