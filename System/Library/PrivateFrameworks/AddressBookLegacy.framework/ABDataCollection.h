/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary;

@interface ABDataCollection : NSObject {

	void* _addressBook;
	BOOL _runningUnitTests;
	BOOL _isLocalSourceOnly;
	BOOL _isLocalSourceRemaining;
	BOOL _isMeCardSet;
	BOOL _isMeCardHomeAddressSet;
	BOOL _isMeCardWorkAddressSet;
	int _totalContacts;
	int _totalGroups;
	int _totalContactsWithPhotos;
	int _totalContactsWithBirthdays;
	int _totalContactsWithYearOnBirthday;
	int _totalContactsWithAnniversaries;
	NSCountedSet* _sourceTypeScalarKeys;
	NSMutableDictionary* _propertyCountForRecordID;

}

@property (assign,nonatomic) BOOL runningUnitTests;                                       //@synthesize runningUnitTests=_runningUnitTests - In the implementation block
@property (assign,nonatomic) int totalContacts;                                           //@synthesize totalContacts=_totalContacts - In the implementation block
@property (assign,nonatomic) int totalGroups;                                             //@synthesize totalGroups=_totalGroups - In the implementation block
@property (nonatomic,retain) NSCountedSet * sourceTypeScalarKeys;                         //@synthesize sourceTypeScalarKeys=_sourceTypeScalarKeys - In the implementation block
@property (assign,nonatomic) BOOL isLocalSourceOnly;                                      //@synthesize isLocalSourceOnly=_isLocalSourceOnly - In the implementation block
@property (assign,nonatomic) BOOL isLocalSourceRemaining;                                 //@synthesize isLocalSourceRemaining=_isLocalSourceRemaining - In the implementation block
@property (assign,nonatomic) BOOL isMeCardSet;                                            //@synthesize isMeCardSet=_isMeCardSet - In the implementation block
@property (assign,nonatomic) BOOL isMeCardHomeAddressSet;                                 //@synthesize isMeCardHomeAddressSet=_isMeCardHomeAddressSet - In the implementation block
@property (assign,nonatomic) BOOL isMeCardWorkAddressSet;                                 //@synthesize isMeCardWorkAddressSet=_isMeCardWorkAddressSet - In the implementation block
@property (assign,nonatomic) int totalContactsWithPhotos;                                 //@synthesize totalContactsWithPhotos=_totalContactsWithPhotos - In the implementation block
@property (assign,nonatomic) int totalContactsWithBirthdays;                              //@synthesize totalContactsWithBirthdays=_totalContactsWithBirthdays - In the implementation block
@property (assign,nonatomic) int totalContactsWithYearOnBirthday;                         //@synthesize totalContactsWithYearOnBirthday=_totalContactsWithYearOnBirthday - In the implementation block
@property (assign,nonatomic) int totalContactsWithAnniversaries;                          //@synthesize totalContactsWithAnniversaries=_totalContactsWithAnniversaries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * propertyCountForRecordID;              //@synthesize propertyCountForRecordID=_propertyCountForRecordID - In the implementation block
+(void)logContactUpdate:(long long)arg1 ;
+(void)logContactCreation:(long long)arg1 ;
+(void)logPropertyAdded:(int)arg1 forContact:(void*)arg2 ;
+(BOOL)isEnabled;
-(void)logAllData;
-(void)logTotalContacts;
-(void)logTotalGroups;
-(void)logSources;
-(void)logMeCard;
-(void)logTotalContactsWithPhotos;
-(void)logTotalContactsWithAnniversary;
-(void)logTotalContactsWithBirthday;
-(void)logTotalContactsWithYearOnBirthday;
-(void)logPropertyCountPerContact;
-(void)setTotalContacts:(int)arg1 ;
-(int)totalContacts;
-(void)setTotalGroups:(int)arg1 ;
-(int)totalGroups;
-(void)setIsLocalSourceOnly:(BOOL)arg1 ;
-(void)setIsLocalSourceRemaining:(BOOL)arg1 ;
-(id)_sourceTypeAsString:(int)arg1 ;
-(NSCountedSet *)sourceTypeScalarKeys;
-(void)setSourceTypeScalarKeys:(NSCountedSet *)arg1 ;
-(BOOL)isLocalSourceOnly;
-(BOOL)isLocalSourceRemaining;
-(void)setIsMeCardSet:(BOOL)arg1 ;
-(void)setIsMeCardHomeAddressSet:(BOOL)arg1 ;
-(void)setIsMeCardWorkAddressSet:(BOOL)arg1 ;
-(BOOL)isMeCardHomeAddressSet;
-(BOOL)isMeCardWorkAddressSet;
-(BOOL)isMeCardSet;
-(void)setTotalContactsWithPhotos:(int)arg1 ;
-(int)totalContactsWithPhotos;
-(void)setTotalContactsWithBirthdays:(int)arg1 ;
-(int)totalContactsWithBirthdays;
-(void)setTotalContactsWithAnniversaries:(int)arg1 ;
-(int)totalContactsWithAnniversaries;
-(void)setTotalContactsWithYearOnBirthday:(int)arg1 ;
-(int)totalContactsWithYearOnBirthday;
-(NSMutableDictionary *)propertyCountForRecordID;
-(void)setPropertyCountForRecordID:(NSMutableDictionary *)arg1 ;
-(void)logTotalContactsWithManualLinks;
-(void)setRunningUnitTests:(BOOL)arg1 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(BOOL)runningUnitTests;
-(void)dealloc;
@end

