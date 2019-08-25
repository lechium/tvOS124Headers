/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardPerson.h>

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents, CNContact;

@interface CNContactVCardWritingAdapter : NSObject <CNVCardPerson> {

	CNContact* _contact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) BOOL isCompany; 
@property (readonly) NSString * nickname; 
@property (readonly) NSString * maidenName; 
@property (readonly) NSString * phoneticFirstName; 
@property (readonly) NSString * phoneticMiddleName; 
@property (readonly) NSString * phoneticLastName; 
@property (readonly) NSString * pronunciationFirstName; 
@property (readonly) NSString * pronunciationLastName; 
@property (readonly) NSString * organization; 
@property (readonly) NSString * phoneticOrganization; 
@property (readonly) NSString * department; 
@property (readonly) NSString * jobTitle; 
@property (readonly) BOOL isMe; 
@property (readonly) int nameOrder; 
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
@property (readonly) NSArray * postalAddresses; 
@property (readonly) NSArray * socialProfiles; 
@property (readonly) NSArray * instantMessagingAddresses; 
@property (readonly) NSArray * urls; 
@property (readonly) NSArray * calendarURIs; 
@property (readonly) NSDictionary * activityAlerts; 
@property (readonly) NSArray * imageReferences; 
@property (readonly) NSDictionary * imageCropRects; 
@property (readonly) NSDictionary * largeImageCropRects; 
@property (readonly) NSData * largeImageData; 
@property (readonly) NSData * imageData; 
@property (readonly) NSDateComponents * birthdayComponents; 
@property (readonly) NSDateComponents * alternateBirthdayComponents; 
@property (readonly) NSArray * otherDateComponents; 
@property (readonly) NSArray * relatedNames; 
@property (readonly) NSString * note; 
@property (readonly) NSArray * namesOfParentGroups; 
@property (readonly) NSString * cardDAVUID; 
@property (readonly) NSString * uid; 
@property (readonly) NSString * phonemeData; 
@property (readonly) NSString * preferredLikenessSource; 
@property (readonly) NSString * preferredApplePersonaIdentifier; 
@property (readonly) NSArray * unknownProperties; 
+(id)adapterWithContact:(id)arg1 ;
+(id)descriptorForAllSupportedKeys;
-(NSString *)organization;
-(NSArray *)phoneNumbers;
-(BOOL)isMe;
-(NSArray *)urls;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(id)vCardPropertyItemsForProperty:(id)arg1 ;
-(id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(/*^block*/id)arg2 ;
-(NSDictionary *)activityAlerts;
-(NSString *)cardDAVUID;
-(NSString *)preferredApplePersonaIdentifier;
-(id)largeImageHashOfType:(id)arg1 ;
-(NSString *)maidenName;
-(NSString *)pronunciationFirstName;
-(NSString *)pronunciationLastName;
-(NSString *)phoneticOrganization;
-(NSString *)department;
-(int)nameOrder;
-(NSArray *)instantMessagingAddresses;
-(NSArray *)calendarURIs;
-(NSArray *)imageReferences;
-(NSDictionary *)imageCropRects;
-(NSDictionary *)largeImageCropRects;
-(NSData *)largeImageData;
-(NSDateComponents *)birthdayComponents;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)namesOfParentGroups;
-(NSArray *)unknownProperties;
-(NSString *)companyName;
-(NSString *)phonemeData;
-(NSArray *)relatedNames;
-(NSArray *)socialProfiles;
-(NSString *)suffix;
-(NSString *)preferredLikenessSource;
-(NSString *)jobTitle;
-(NSArray *)postalAddresses;
-(NSString *)phoneticMiddleName;
-(NSString *)note;
-(NSData *)imageData;
-(id)initWithContact:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)middleName;
-(NSString *)nickname;
-(BOOL)isCompany;
-(NSString *)title;
-(NSString *)uid;
@end
