/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNCountryInformation : NSObject <NSCopying> {

	NSString* _isoCountryCode;
	NSString* _name;
	NSString* _phoneticName;

}

@property (nonatomic,copy,readonly) NSString * isoCountryCode;              //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticName;                //@synthesize phoneticName=_phoneticName - In the implementation block
-(NSString *)phoneticName;
-(NSString *)isoCountryCode;
-(id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
