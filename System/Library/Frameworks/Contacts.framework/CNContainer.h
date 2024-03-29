/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContainerPermissions;

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _accountIdentifier;
	NSString* _name;
	long long _type;
	CNContainer* _snapshot;
	CNContainerPermissions* _permissions;
	int _iOSLegacyIdentifier;
	BOOL _enabled;

}

@property (nonatomic,copy,readonly) CNContainer * snapshot; 
@property (nonatomic,readonly) int iOSLegacyIdentifier;                                //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy,readonly) CNContainerPermissions * permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2 ;
+(id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1 ;
+(id)predicateForContainersIncludingDisabled:(BOOL)arg1 ;
+(id)predicateForLocalContainer;
+(id)makeDefaultContainerPermissions;
+(id)predicateForContainerOfContactWithIdentifier:(id)arg1 ;
+(id)predicateForContainersWithIdentifiers:(id)arg1 ;
+(id)predicateForContainerOfGroupWithIdentifier:(id)arg1 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForContainersInAccountWithIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithContainer:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 name:(id)arg3 type:(long long)arg4 permissions:(id)arg5 ;
-(id)descriptionForContainerType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(int)iOSLegacyIdentifier;
-(CNContainerPermissions *)permissions;
-(NSString *)accountIdentifier;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CNContainer *)snapshot;
-(id)initWithName:(id)arg1 ;
@end

