/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMPIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic,readonly) SecMPFullIdentityRef fullIdentity; 
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityFromData:(id)arg1 error:(id*)arg2 ;
+(SecMPFullIdentityRef)_createFullIdentityWithError:(id*)arg1 ;
+(SecMPPublicIdentityRef)_copyPublicIdentityFromFullIdentity:(SecMPFullIdentityRef)arg1 error:(id*)arg2 ;
+(id)identityWithError:(id*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicIdentityWithError:(id*)arg1 ;
-(id)initWithFullIdentity:(SecMPFullIdentityRef)arg1 ;
-(SecMPFullIdentityRef)fullIdentity;
-(id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3 ;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
