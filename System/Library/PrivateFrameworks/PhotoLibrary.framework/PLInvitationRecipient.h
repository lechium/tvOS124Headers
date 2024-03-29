/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFComposeRecipient, NSString, NSMutableArray, NSArray;

@interface PLInvitationRecipient : NSObject {

	MFComposeRecipient* _mfRecipient;
	NSString* _firstName;
	NSString* _lastName;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhones;
	NSString* _selectedPhoneString;
	NSString* _selectedEmailString;
	NSString* _invalidAddressString;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,retain,readonly) NSArray * allEmails;                        //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,retain,readonly) NSArray * allPhones;                        //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedPhoneString;               //@synthesize selectedPhoneString=_selectedPhoneString - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedEmailString;               //@synthesize selectedEmailString=_selectedEmailString - In the implementation block
@property (nonatomic,copy,readonly) NSString * invalidAddressString;              //@synthesize invalidAddressString=_invalidAddressString - In the implementation block
+(id)validEmailAddressFromComposeRecipient:(id)arg1 ;
+(id)validPhoneNumberFromString:(id)arg1 ;
-(NSString *)selectedPhoneString;
-(NSString *)selectedEmailString;
-(NSString *)invalidAddressString;
-(NSString *)firstName;
-(id)initWithRecipient:(id)arg1 ;
-(NSArray *)allEmails;
-(NSString *)lastName;
-(NSArray *)allPhones;
-(void)dealloc;
-(id)description;
-(id)displayName;
@end

