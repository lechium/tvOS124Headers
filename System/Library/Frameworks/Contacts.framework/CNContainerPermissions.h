/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canCreateContacts;
	BOOL _canDeleteContacts;
	BOOL _canCreateGroups;

}

@property (nonatomic,readonly) BOOL canCreateContacts;              //@synthesize canCreateContacts=_canCreateContacts - In the implementation block
@property (nonatomic,readonly) BOOL canDeleteContacts;              //@synthesize canDeleteContacts=_canDeleteContacts - In the implementation block
@property (nonatomic,readonly) BOOL canCreateGroups;                //@synthesize canCreateGroups=_canCreateGroups - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCanCreateContacts:(BOOL)arg1 canDeleteContacts:(BOOL)arg2 canCreateGroups:(BOOL)arg3 ;
-(BOOL)canCreateContacts;
-(BOOL)canDeleteContacts;
-(BOOL)canCreateGroups;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
