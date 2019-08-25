/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ENAccountIdentity, NSDictionary, NSString;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject {

	ENAccountIdentity* _accountIdentity;
	NSDictionary* _aliasToAccountsMap;
	NSString* _serviceName;

}

@property (nonatomic,readonly) ENAccountIdentity * accountIdentity;              //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * aliasToAccountsMap;                //@synthesize aliasToAccountsMap=_aliasToAccountsMap - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
-(ENAccountIdentity *)accountIdentity;
-(id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3 ;
-(NSDictionary *)aliasToAccountsMap;
-(id)accountForAlias:(id)arg1 ;
-(NSString *)serviceName;
@end

