/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/DADataElement.h>

@class NSDate, NSString, NSArray;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {

	BOOL _bodyTruncated;
	int _bodySize;
	void* _abRecord;
	NSDate* _anniversary;
	NSString* _assistantName;
	NSString* _assistantTelephoneNumber;
	NSDate* _birthday;
	NSString* _body;
	NSString* _business2TelephoneNumber;
	NSString* _businessAddressCity;
	NSString* _businessAddressCountry;
	NSString* _businessAddressPostalCode;
	NSString* _businessAddressState;
	NSString* _businessAddressStreet;
	NSString* _businessFaxNumber;
	NSString* _businessTelephoneNumber;
	NSString* _carTelephoneNumber;
	NSArray* _categories;
	NSArray* _children;
	NSString* _companyName;
	NSString* _department;
	NSString* _email1Address;
	NSString* _email2Address;
	NSString* _email3Address;
	NSString* _fileAs;
	NSString* _firstName;
	NSString* _home2TelephoneNumber;
	NSString* _homeAddressCity;
	NSString* _homeAddressCountry;
	NSString* _homeAddressPostalCode;
	NSString* _homeAddressState;
	NSString* _homeAddressStreet;
	NSString* _homeTelephoneNumber;
	NSString* _homeFaxNumber;
	NSString* _jobTitle;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _mobileTelephoneNumber;
	NSString* _officeLocation;
	NSString* _otherAddressCity;
	NSString* _otherAddressCountry;
	NSString* _otherAddressPostalCode;
	NSString* _otherAddressState;
	NSString* _otherAddressStreet;
	NSString* _pagerNumber;
	NSString* _picture;
	NSString* _radioTelephoneNumber;
	NSString* _spouse;
	NSString* _suffix;
	NSString* _title;
	NSString* _webpage;
	NSString* _yomiCompanyName;
	NSString* _yomiFirstName;
	NSString* _yomiLastName;
	NSString* _customerID;
	NSString* _governmentID;
	NSString* _im1Address;
	NSString* _im2Address;
	NSString* _im3Address;
	NSString* _managerName;
	NSString* _companyMainPhone;
	NSString* _accountName;
	NSString* _nickName;
	NSString* _mms;
	long long _fileAsAutoConstruction;

}

@property (assign,nonatomic) long long fileAsAutoConstruction;                  //@synthesize fileAsAutoConstruction=_fileAsAutoConstruction - In the implementation block
@property (assign,setter=setABRecord:,nonatomic) void* abRecord;                //@synthesize abRecord=_abRecord - In the implementation block
@property (nonatomic,retain) NSDate * anniversary;                              //@synthesize anniversary=_anniversary - In the implementation block
@property (nonatomic,retain) NSString * assistantName;                          //@synthesize assistantName=_assistantName - In the implementation block
@property (nonatomic,retain) NSString * assistantTelephoneNumber;               //@synthesize assistantTelephoneNumber=_assistantTelephoneNumber - In the implementation block
@property (nonatomic,retain) NSDate * birthday;                                 //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) NSString * body;                                   //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) int bodySize;                                      //@synthesize bodySize=_bodySize - In the implementation block
@property (assign,nonatomic) BOOL bodyTruncated;                                //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (nonatomic,retain) NSString * business2TelephoneNumber;               //@synthesize business2TelephoneNumber=_business2TelephoneNumber - In the implementation block
@property (nonatomic,retain) NSString * businessAddressCity;                    //@synthesize businessAddressCity=_businessAddressCity - In the implementation block
@property (nonatomic,retain) NSString * businessAddressCountry;                 //@synthesize businessAddressCountry=_businessAddressCountry - In the implementation block
@property (nonatomic,retain) NSString * businessAddressPostalCode;              //@synthesize businessAddressPostalCode=_businessAddressPostalCode - In the implementation block
@property (nonatomic,retain) NSString * businessAddressState;                   //@synthesize businessAddressState=_businessAddressState - In the implementation block
@property (nonatomic,retain) NSString * businessAddressStreet;                  //@synthesize businessAddressStreet=_businessAddressStreet - In the implementation block
@property (nonatomic,retain) NSString * businessFaxNumber;                      //@synthesize businessFaxNumber=_businessFaxNumber - In the implementation block
@property (nonatomic,retain) NSString * businessTelephoneNumber;                //@synthesize businessTelephoneNumber=_businessTelephoneNumber - In the implementation block
@property (nonatomic,retain) NSString * carTelephoneNumber;                     //@synthesize carTelephoneNumber=_carTelephoneNumber - In the implementation block
@property (nonatomic,retain) NSArray * categories;                              //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSArray * children;                                //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSString * companyName;                            //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,retain) NSString * department;                             //@synthesize department=_department - In the implementation block
@property (nonatomic,retain) NSString * email1Address;                          //@synthesize email1Address=_email1Address - In the implementation block
@property (nonatomic,retain) NSString * email2Address;                          //@synthesize email2Address=_email2Address - In the implementation block
@property (nonatomic,retain) NSString * email3Address;                          //@synthesize email3Address=_email3Address - In the implementation block
@property (nonatomic,retain) NSString * fileAs;                                 //@synthesize fileAs=_fileAs - In the implementation block
@property (nonatomic,retain) NSString * firstName;                              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * home2TelephoneNumber;                   //@synthesize home2TelephoneNumber=_home2TelephoneNumber - In the implementation block
@property (nonatomic,retain) NSString * homeAddressCity;                        //@synthesize homeAddressCity=_homeAddressCity - In the implementation block
@property (nonatomic,retain) NSString * homeAddressCountry;                     //@synthesize homeAddressCountry=_homeAddressCountry - In the implementation block
@property (nonatomic,retain) NSString * homeAddressPostalCode;                  //@synthesize homeAddressPostalCode=_homeAddressPostalCode - In the implementation block
@property (nonatomic,retain) NSString * homeAddressState;                       //@synthesize homeAddressState=_homeAddressState - In the implementation block
@property (nonatomic,retain) NSString * homeAddressStreet;                      //@synthesize homeAddressStreet=_homeAddressStreet - In the implementation block
@property (nonatomic,retain) NSString * homeTelephoneNumber;                    //@synthesize homeTelephoneNumber=_homeTelephoneNumber - In the implementation block
@property (nonatomic,retain) NSString * homeFaxNumber;                          //@synthesize homeFaxNumber=_homeFaxNumber - In the implementation block
@property (nonatomic,retain) NSString * jobTitle;                               //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,retain) NSString * lastName;                               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                             //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * mobileTelephoneNumber;                  //@synthesize mobileTelephoneNumber=_mobileTelephoneNumber - In the implementation block
@property (nonatomic,retain) NSString * officeLocation;                         //@synthesize officeLocation=_officeLocation - In the implementation block
@property (nonatomic,retain) NSString * otherAddressCity;                       //@synthesize otherAddressCity=_otherAddressCity - In the implementation block
@property (nonatomic,retain) NSString * otherAddressCountry;                    //@synthesize otherAddressCountry=_otherAddressCountry - In the implementation block
@property (nonatomic,retain) NSString * otherAddressPostalCode;                 //@synthesize otherAddressPostalCode=_otherAddressPostalCode - In the implementation block
@property (nonatomic,retain) NSString * otherAddressState;                      //@synthesize otherAddressState=_otherAddressState - In the implementation block
@property (nonatomic,retain) NSString * otherAddressStreet;                     //@synthesize otherAddressStreet=_otherAddressStreet - In the implementation block
@property (nonatomic,retain) NSString * pagerNumber;                            //@synthesize pagerNumber=_pagerNumber - In the implementation block
@property (nonatomic,retain) NSString * picture;                                //@synthesize picture=_picture - In the implementation block
@property (nonatomic,retain) NSString * radioTelephoneNumber;                   //@synthesize radioTelephoneNumber=_radioTelephoneNumber - In the implementation block
@property (nonatomic,retain) NSString * spouse;                                 //@synthesize spouse=_spouse - In the implementation block
@property (nonatomic,retain) NSString * suffix;                                 //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,retain) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * webpage;                                //@synthesize webpage=_webpage - In the implementation block
@property (nonatomic,retain) NSString * yomiCompanyName;                        //@synthesize yomiCompanyName=_yomiCompanyName - In the implementation block
@property (nonatomic,retain) NSString * yomiFirstName;                          //@synthesize yomiFirstName=_yomiFirstName - In the implementation block
@property (nonatomic,retain) NSString * yomiLastName;                           //@synthesize yomiLastName=_yomiLastName - In the implementation block
@property (nonatomic,retain) NSString * customerID;                             //@synthesize customerID=_customerID - In the implementation block
@property (nonatomic,retain) NSString * governmentID;                           //@synthesize governmentID=_governmentID - In the implementation block
@property (nonatomic,retain) NSString * im1Address;                             //@synthesize im1Address=_im1Address - In the implementation block
@property (nonatomic,retain) NSString * im2Address;                             //@synthesize im2Address=_im2Address - In the implementation block
@property (nonatomic,retain) NSString * im3Address;                             //@synthesize im3Address=_im3Address - In the implementation block
@property (nonatomic,retain) NSString * managerName;                            //@synthesize managerName=_managerName - In the implementation block
@property (nonatomic,retain) NSString * companyMainPhone;                       //@synthesize companyMainPhone=_companyMainPhone - In the implementation block
@property (nonatomic,retain) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,retain) NSString * nickName;                               //@synthesize nickName=_nickName - In the implementation block
@property (nonatomic,retain) NSString * mms;                                    //@synthesize mms=_mms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(id)externalRepClasses;
+(void)_setSystemTimeZoneForUnitTests:(id)arg1 ;
+(id)contactWithABRecord:(void*)arg1 serverID:(id)arg2 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)department;
-(void)setJobTitle:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setBirthday:(NSDate *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)picture;
-(void)setPicture:(NSString *)arg1 ;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)jobTitle;
-(int)bodySize;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSDate *)birthday;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)middleName;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(long long)dataclass;
-(void)loadClientIDs;
-(BOOL)bodyTruncated;
-(void)setBodyTruncated:(BOOL)arg1 ;
-(id)_transformedDateForActiveSync:(id)arg1 ;
-(void)setAnniversary:(NSDate *)arg1 ;
-(void)setAssistantName:(NSString *)arg1 ;
-(void)setManagerName:(NSString *)arg1 ;
-(void)setSpouse:(NSString *)arg1 ;
-(void)setHomeTelephoneNumber:(NSString *)arg1 ;
-(void)setHome2TelephoneNumber:(NSString *)arg1 ;
-(void)setBusinessTelephoneNumber:(NSString *)arg1 ;
-(void)setBusiness2TelephoneNumber:(NSString *)arg1 ;
-(void)setBusinessFaxNumber:(NSString *)arg1 ;
-(void)setHomeFaxNumber:(NSString *)arg1 ;
-(void)setMobileTelephoneNumber:(NSString *)arg1 ;
-(void)setPagerNumber:(NSString *)arg1 ;
-(void)setAssistantTelephoneNumber:(NSString *)arg1 ;
-(void)setCarTelephoneNumber:(NSString *)arg1 ;
-(void)setRadioTelephoneNumber:(NSString *)arg1 ;
-(void)setCompanyMainPhone:(NSString *)arg1 ;
-(void)setBusinessAddressCity:(NSString *)arg1 ;
-(void)setBusinessAddressCountry:(NSString *)arg1 ;
-(void)setBusinessAddressPostalCode:(NSString *)arg1 ;
-(void)setBusinessAddressState:(NSString *)arg1 ;
-(void)setBusinessAddressStreet:(NSString *)arg1 ;
-(void)setHomeAddressCity:(NSString *)arg1 ;
-(void)setHomeAddressCountry:(NSString *)arg1 ;
-(void)setHomeAddressPostalCode:(NSString *)arg1 ;
-(void)setHomeAddressState:(NSString *)arg1 ;
-(void)setHomeAddressStreet:(NSString *)arg1 ;
-(void)setOtherAddressCity:(NSString *)arg1 ;
-(void)setOtherAddressCountry:(NSString *)arg1 ;
-(void)setOtherAddressPostalCode:(NSString *)arg1 ;
-(void)setOtherAddressState:(NSString *)arg1 ;
-(void)setOtherAddressStreet:(NSString *)arg1 ;
-(void)setEmail1Address:(NSString *)arg1 ;
-(void)setEmail2Address:(NSString *)arg1 ;
-(void)setEmail3Address:(NSString *)arg1 ;
-(void)setWebpage:(NSString *)arg1 ;
-(void)setIm1Address:(NSString *)arg1 ;
-(void)setIm2Address:(NSString *)arg1 ;
-(void)setIm3Address:(NSString *)arg1 ;
-(void)setOfficeLocation:(NSString *)arg1 ;
-(void)setYomiCompanyName:(NSString *)arg1 ;
-(void)setCustomerID:(NSString *)arg1 ;
-(void)setGovernmentID:(NSString *)arg1 ;
-(void)setMms:(NSString *)arg1 ;
-(void)setFileAs:(NSString *)arg1 ;
-(void)setDepartment:(NSString *)arg1 ;
-(void)setYomiFirstName:(NSString *)arg1 ;
-(void)setYomiLastName:(NSString *)arg1 ;
-(void)_setImageOnContactFromPerson:(void*)arg1 ;
-(BOOL)_setDatesWithExistingRecord:(void*)arg1 ;
-(BOOL)_setRelatedNamesWithExistingRecord:(void*)arg1 ;
-(BOOL)_setPhoneNumbersWithExistingRecord:(void*)arg1 ;
-(BOOL)_setStreetAddressesWithExistingRecord:(void*)arg1 ;
-(BOOL)_setEmailsWithExistingRecord:(void*)arg1 ;
-(BOOL)_setURLsWithExistingRecord:(void*)arg1 ;
-(BOOL)_setIMsWithExistingRecord:(void*)arg1 ;
-(BOOL)_setExternalRepWithExistingRecord:(void*)arg1 ;
-(void)_reconstructFileAsField;
-(void)_loadAttributesFromABRecord:(void*)arg1 ;
-(void)setABRecord:(void*)arg1 ;
-(id)initWithABRecord:(void*)arg1 serverID:(id)arg2 ;
-(NSDate *)anniversary;
-(id)_transformedDateForABFramework:(id)arg1 ;
-(NSString *)assistantName;
-(NSString *)managerName;
-(NSString *)spouse;
-(NSString *)businessTelephoneNumber;
-(NSString *)business2TelephoneNumber;
-(NSString *)businessFaxNumber;
-(NSString *)homeTelephoneNumber;
-(NSString *)home2TelephoneNumber;
-(NSString *)homeFaxNumber;
-(NSString *)mobileTelephoneNumber;
-(NSString *)pagerNumber;
-(NSString *)assistantTelephoneNumber;
-(NSString *)carTelephoneNumber;
-(NSString *)radioTelephoneNumber;
-(NSString *)companyMainPhone;
-(NSString *)businessAddressCity;
-(NSString *)businessAddressCountry;
-(NSString *)businessAddressPostalCode;
-(NSString *)businessAddressState;
-(NSString *)businessAddressStreet;
-(NSString *)homeAddressCity;
-(NSString *)homeAddressCountry;
-(NSString *)homeAddressPostalCode;
-(NSString *)homeAddressState;
-(NSString *)homeAddressStreet;
-(NSString *)otherAddressCity;
-(NSString *)otherAddressCountry;
-(NSString *)otherAddressPostalCode;
-(NSString *)otherAddressState;
-(NSString *)otherAddressStreet;
-(NSString *)email1Address;
-(NSString *)email2Address;
-(NSString *)email3Address;
-(NSString *)webpage;
-(NSString *)im1Address;
-(NSString *)im2Address;
-(NSString *)im3Address;
-(NSString *)fileAs;
-(NSString *)yomiFirstName;
-(NSString *)yomiLastName;
-(BOOL)_saveDatesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_saveEmailsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_saveURLsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_saveIMsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 ;
-(BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 storeExternalRep:(BOOL)arg3 ;
-(NSString *)yomiCompanyName;
-(NSString *)officeLocation;
-(NSString *)customerID;
-(NSString *)governmentID;
-(NSString *)mms;
-(void)setBodySize:(int)arg1 ;
-(id)bestEmailFromAppData:(int)arg1 ;
-(void)_detectFileAsAutoConstruction;
-(BOOL)saveToAddressBookWithExistingRecord:(void*)arg1 inSource:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 storeExternalRep:(BOOL)arg5 ;
-(BOOL)loadABRecord;
-(BOOL)saveServerIDToContact;
-(BOOL)deleteFromAddressBook;
-(void)setBodySizeNumber:(id)arg1 ;
-(void)setBodyTruncatedNumber:(id)arg1 ;
-(void*)abRecord;
-(long long)fileAsAutoConstruction;
-(void)setFileAsAutoConstruction:(long long)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(NSString *)accountName;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSArray *)categories;
-(NSArray *)children;
@end

