/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSString, NSData;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon {

	NSString* _contactIdentifier;
	NSString* _firstName;
	NSString* _lastName;
	NSData* _imageData;

}

@property (nonatomic,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                      //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                       //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
-(id)_initForSubclass;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)initWithContactIdentifier:(id)arg1 ;
-(NSString *)contactIdentifier;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

