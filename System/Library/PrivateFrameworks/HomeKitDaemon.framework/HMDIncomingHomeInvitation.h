/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDHomeInvitation.h>

@class HMDAccount, HMFPairingIdentity, NSDictionary, NSString, NSUUID;

@interface HMDIncomingHomeInvitation : HMDHomeInvitation {

	HMDAccount* _inviterAccount;
	HMFPairingIdentity* _inviterIdentity;

}

@property (nonatomic,readonly) NSDictionary * bulletinContext; 
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
@property (readonly) HMDAccount * inviterAccount;                            //@synthesize inviterAccount=_inviterAccount - In the implementation block
@property (copy,readonly) HMFPairingIdentity * inviterIdentity;              //@synthesize inviterIdentity=_inviterIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviterUserID; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)bulletinContext;
-(BOOL)refreshDisplayName;
-(id)describeWithFormat;
-(NSString *)homeName;
-(NSUUID *)homeUUID;
-(NSString *)inviterUserID;
-(HMDAccount *)inviterAccount;
-(HMFPairingIdentity *)inviterIdentity;
-(id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 expiryDate:(id)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

