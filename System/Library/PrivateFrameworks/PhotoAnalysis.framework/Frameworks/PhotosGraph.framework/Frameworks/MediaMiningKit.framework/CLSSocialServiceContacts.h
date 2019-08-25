/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSSocialService.h>

@protocol CLSSocialServiceContactsDelegate;
@class CNContactStore, CNContact, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CLSSocialServiceContacts : CLSSocialService {

	CNContactStore* _contactStore;
	CNContact* _meContact;
	NSMutableArray* _allContacts;
	NSMutableArray* _allPersons;
	NSMutableDictionary* _personsForCNIdentifiers;
	NSMutableDictionary* _personsForPHIdentifiers;
	id<CLSSocialServiceContactsDelegate> _delegate;
	NSMutableDictionary* _personByFullName;
	NSMutableSet* _nonFoundFullNames;
	NSMutableDictionary* _personByHandle;
	NSMutableSet* _nonFoundHandles;

}

@property (nonatomic,retain) NSMutableDictionary * personByFullName;                            //@synthesize personByFullName=_personByFullName - In the implementation block
@property (nonatomic,retain) NSMutableSet * nonFoundFullNames;                                  //@synthesize nonFoundFullNames=_nonFoundFullNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personByHandle;                              //@synthesize personByHandle=_personByHandle - In the implementation block
@property (nonatomic,retain) NSMutableSet * nonFoundHandles;                                    //@synthesize nonFoundHandles=_nonFoundHandles - In the implementation block
@property (assign,nonatomic,__weak) id<CLSSocialServiceContactsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultKeysToFetch;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(id)_fullNameWithContact:(id)arg1 ;
-(void)invalidateCacheForPersonWithIdentifiers:(id)arg1 ;
-(id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)enumeratePersonsAndHomeAddressUsingBlock:(/*^block*/id)arg1 ;
-(id)_personWithContact:(id)arg1 createPersonIfNeeded:(BOOL)arg2 ;
-(id)_personResultsForPHPersonIdentifier:(id)arg1 isLackingFaces:(out BOOL*)arg2 inPhotoLibrary:(id)arg3 ;
-(id)_personResultsForFullName:(id)arg1 ;
-(id)_personWithContactIdentifier:(id)arg1 ;
-(id)__newPersonWithContact:(id)arg1 ;
-(unsigned long long)_relationshipForContact:(id)arg1 ;
-(void)_addAddressesToPerson:(id)arg1 withContact:(id)arg2 ;
-(id)_allPersons;
-(id)_personsMatchingPredicate:(id)arg1 ;
-(id)_meRecords;
-(id)_mePersons;
-(id)_allPersonRecords;
-(id)_fullNameForPersonRecord:(id)arg1 ;
-(id)_firstNameForPersonRecord:(id)arg1 ;
-(id)_lastNameForPersonRecord:(id)arg1 ;
-(id)_nicknameForPersonRecord:(id)arg1 ;
-(id)_maidenNameForPersonRecord:(id)arg1 ;
-(void)_enumerateContactsFetchingKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)personByFullName;
-(void)setPersonByFullName:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)nonFoundFullNames;
-(void)setNonFoundFullNames:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)personByHandle;
-(void)setPersonByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)nonFoundHandles;
-(void)setNonFoundHandles:(NSMutableSet *)arg1 ;
-(id)mePerson;
-(id)personForIdentifier:(id)arg1 ;
-(id)personForPersonHandle:(id)arg1 ;
-(void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersonsAndBirthdayDateUsingBlock:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<CLSSocialServiceContactsDelegate>)arg1 ;
-(id<CLSSocialServiceContactsDelegate>)delegate;
@end
