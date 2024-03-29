/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	int _iOSLegacyIdentifier;
	NSString* _name;
	CNGroup* _snapshot;
	NSDate* _creationDate;
	NSDate* _modificationDate;

}

@property (nonatomic,copy,readonly) CNGroup * snapshot; 
@property (nonatomic,copy,readonly) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) int iOSLegacyIdentifier;                     //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForGroupsWithNameMatching:(id)arg1 ;
+(id)predicateForGroupWithNameMatching:(id)arg1 ;
+(id)predicateForGroupsWithIdentifiers:(id)arg1 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)predicateForGroupsInContainerWithIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 ;
-(NSDate *)creationDate;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 ;
-(int)iOSLegacyIdentifier;
-(id)initWithGroup:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CNGroup *)snapshot;
-(id)initWithName:(id)arg1 ;
-(NSDate *)modificationDate;
@end

