/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENAccountPublicKey.h>

@class IDSMPPublicAccountIdentity, IDSMPPublicServiceIdentityAdmin, IDSMPPublicServiceIdentitySigning, NSString;

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey> {

	IDSMPPublicAccountIdentity* _accountIdentity;
	IDSMPPublicServiceIdentityAdmin* _adminIdentity;
	IDSMPPublicServiceIdentitySigning* _signingIdentity;

}

@property (nonatomic,readonly) IDSMPPublicAccountIdentity * accountIdentity;                     //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicServiceIdentityAdmin * adminIdentity;                  //@synthesize adminIdentity=_adminIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicServiceIdentitySigning * signingIdentity;              //@synthesize signingIdentity=_signingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IDSMPPublicAccountIdentity *)accountIdentity;
-(id)initWithAccountIdentity:(id)arg1 adminIdentity:(id)arg2 signingIdentity:(id)arg3 ;
-(IDSMPPublicServiceIdentityAdmin *)adminIdentity;
-(IDSMPPublicServiceIdentitySigning *)signingIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

