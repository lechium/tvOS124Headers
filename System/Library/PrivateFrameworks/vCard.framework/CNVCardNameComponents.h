/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardNameDataSource.h>

@class NSString;

@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource> {

	NSString* _formattedName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _middleName;
	NSString* _title;
	NSString* _suffix;
	NSString* _companyName;
	BOOL _isCompany;

}

@property (copy,readonly) NSString * formattedName;                 //@synthesize formattedName=_formattedName - In the implementation block
@property (readonly) BOOL isCompany;                                //@synthesize isCompany=_isCompany - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * middleName;                         //@synthesize middleName=_middleName - In the implementation block
@property (readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (readonly) NSString * suffix;                             //@synthesize suffix=_suffix - In the implementation block
@property (readonly) NSString * companyName;                        //@synthesize companyName=_companyName - In the implementation block
+(id)componentsWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 title:(id)arg4 suffix:(id)arg5 companyName:(id)arg6 isCompany:(BOOL)arg7 ;
+(id)components;
-(NSString *)formattedName;
-(NSString *)companyName;
-(NSString *)suffix;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)middleName;
-(BOOL)isCompany;
-(NSString *)title;
@end

