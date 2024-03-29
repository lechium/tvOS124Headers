/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSPrimitive.h>

@class NSMutableArray, NSString, NSDate, NSMutableDictionary, NSSet, NSArray;

@interface CLSPerson : CLSPrimitive {

	NSMutableArray* _homeAddresses;
	NSMutableArray* _workAddresses;
	BOOL _isFavorite;
	BOOL _isUserCreated;
	NSString* _PHIdentifier;
	NSString* _CNIdentifier;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _middleName;
	NSString* _lastName;
	NSString* _nickname;
	unsigned long long _gender;
	NSDate* _birthdayDate;
	NSDate* _anniversaryDate;
	NSString* _companyName;
	NSMutableDictionary* _socialProfiles;
	NSSet* _emailAddresses;
	NSSet* _phoneNumbers;
	unsigned long long _relationship;
	NSArray* _sourceURLs;

}

@property (nonatomic,retain) NSString * CNIdentifier;                           //@synthesize CNIdentifier=_CNIdentifier - In the implementation block
@property (nonatomic,retain) NSString * PHIdentifier;                           //@synthesize PHIdentifier=_PHIdentifier - In the implementation block
@property (nonatomic,retain) NSString * fullName;                               //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                             //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * nickname;                               //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSDate * birthdayDate;                             //@synthesize birthdayDate=_birthdayDate - In the implementation block
@property (nonatomic,retain) NSDate * anniversaryDate;                          //@synthesize anniversaryDate=_anniversaryDate - In the implementation block
@property (nonatomic,retain) NSString * companyName;                            //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * socialProfiles;              //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,retain) NSSet * emailAddresses;                            //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSSet * phoneNumbers;                              //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (assign,nonatomic) unsigned long long relationship;                   //@synthesize relationship=_relationship - In the implementation block
@property (assign,nonatomic) unsigned long long gender;                         //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                   //@synthesize isFavorite=_isFavorite - In the implementation block
@property (assign,nonatomic) BOOL isUserCreated;                                //@synthesize isUserCreated=_isUserCreated - In the implementation block
@property (nonatomic,readonly) NSArray * sourceURLs;                            //@synthesize sourceURLs=_sourceURLs - In the implementation block
@property (nonatomic,readonly) BOOL isMe; 
+(id)personWithPHIdentifier:(id)arg1 ;
+(id)presentationStringForPeople:(id)arg1 withScores:(id)arg2 ;
+(id)relationshipRegularExpressionForRelationship:(unsigned long long)arg1 locale:(id)arg2 ;
+(id)_personRelationshipVocabularyByLocaleDictionary;
+(id)descriptionForPersonRelationship:(unsigned long long)arg1 ;
+(id)personWithCNIdentifier:(id)arg1 ;
+(id)personWithPHPerson:(id)arg1 ;
+(id)presentationStringForPeople:(id)arg1 ;
+(unsigned long long)_personRelationshipFromString:(id)arg1 ;
+(BOOL)isParentRelationship:(unsigned long long)arg1 ;
+(BOOL)isFamilyRelationship:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)person;
-(unsigned long long)relationship;
-(NSSet *)phoneNumbers;
-(BOOL)isMe;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(NSString *)companyName;
-(void)setRelationship:(unsigned long long)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(NSMutableDictionary *)socialProfiles;
-(void)setSocialProfiles:(NSMutableDictionary *)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSSet *)arg1 ;
-(void)setPhoneNumbers:(NSSet *)arg1 ;
-(NSSet *)emailAddresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isUserCreated;
-(NSString *)middleName;
-(NSString *)nickname;
-(void)setCNIdentifier:(NSString *)arg1 ;
-(void)setPHIdentifier:(NSString *)arg1 ;
-(void)setIsUserCreated:(BOOL)arg1 ;
-(void)setSourceService:(id)arg1 andID:(id)arg2 ;
-(void)addAddresses:(id)arg1 ofType:(unsigned long long)arg2 ;
-(NSArray *)sourceURLs;
-(id)_addressArrayFromAddressType:(unsigned long long)arg1 ;
-(void)_enumerateAddresses:(id)arg1 as:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_relationshipAsString;
-(id)pluralPresentationString;
-(id)presentationString;
-(id)_motherAndFatherRelationships;
-(void)mergeWithPerson:(id)arg1 ;
-(unsigned long long)countOfAddressesOfType:(unsigned long long)arg1 ;
-(void)enumerateAddressesOfType:(unsigned long long)arg1 asPlacemarkWithBlock:(/*^block*/id)arg2 ;
-(void)sanitize;
-(BOOL)isEqualToPerson:(id)arg1 ;
-(BOOL)isLocationCoordinate:(CLLocationCoordinate2D)arg1 closeToAddressesOfType:(unsigned long long)arg2 ;
-(BOOL)isLocationCoordinate:(CLLocationCoordinate2D)arg1 farAwayFromAddressesOfType:(unsigned long long)arg2 ;
-(unsigned long long)relationshipHintFromNameUsingLocales:(id)arg1 ;
-(BOOL)hasSameFamilyNameAsPerson:(id)arg1 ;
-(BOOL)isOrganization;
-(void)setBirthdayDate:(NSDate *)arg1 ;
-(void)setAnniversaryDate:(NSDate *)arg1 ;
-(void)prefetchPersonAddressesIfNeeded;
-(NSDate *)birthdayDate;
-(NSString *)CNIdentifier;
-(NSString *)PHIdentifier;
-(void)enumerateAddressesOfType:(unsigned long long)arg1 asCLLocationsWithBlock:(/*^block*/id)arg2 ;
-(NSDate *)anniversaryDate;
-(BOOL)isSamePersonAs:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

