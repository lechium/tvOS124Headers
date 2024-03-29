/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENDeviceKey.h>

@class IDSMPFullLegacyIdentity, IDSMPFullDeviceIdentity, IDSAccountIdentity, NSString;

@interface IDSDeviceIdentity : NSObject <ENDeviceKey> {

	IDSMPFullLegacyIdentity* _legacyIdentity;
	IDSMPFullDeviceIdentity* _modernIdentity;
	IDSAccountIdentity* _accountIdentity;

}

@property (nonatomic,readonly) IDSMPFullLegacyIdentity * legacyIdentity;              //@synthesize legacyIdentity=_legacyIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPFullDeviceIdentity * modernIdentity;              //@synthesize modernIdentity=_modernIdentity - In the implementation block
@property (nonatomic,readonly) IDSAccountIdentity * accountIdentity;                  //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<ENDevicePublicKey> devicePublicKey; 
+(BOOL)supportsSecureCoding;
-(IDSAccountIdentity *)accountIdentity;
-(IDSMPFullLegacyIdentity *)legacyIdentity;
-(IDSMPFullDeviceIdentity *)modernIdentity;
-(id)initWithLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3 ;
-(id<ENDevicePublicKey>)devicePublicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

