/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSmartPropertyFetcher.h>

@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {

	BOOL _ignoresNickname;
	BOOL _ignoresOrganization;
	NSSet* _mandatoryNameProperties;
	NSDictionary* _fallBackNamePropertyByNameKey;

}

@property (nonatomic,copy) NSSet * mandatoryNameProperties;                           //@synthesize mandatoryNameProperties=_mandatoryNameProperties - In the implementation block
@property (nonatomic,copy) NSDictionary * fallBackNamePropertyByNameKey;              //@synthesize fallBackNamePropertyByNameKey=_fallBackNamePropertyByNameKey - In the implementation block
@property (assign,nonatomic) BOOL ignoresNickname;                                    //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) BOOL ignoresOrganization;                                //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(BOOL)ignoresNickname;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(BOOL)ignoresOrganization;
-(void)setupNameKeys;
-(NSSet *)mandatoryNameProperties;
-(void)setMandatoryNameProperties:(NSSet *)arg1 ;
-(NSDictionary *)fallBackNamePropertyByNameKey;
-(void)setFallBackNamePropertyByNameKey:(NSDictionary *)arg1 ;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

