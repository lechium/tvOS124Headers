/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessControl.h>

@class HMUserPresenceAuthorization, HMUserPresenceCompute;

@interface HMHomeAccessControl : HMAccessControl {

	BOOL _owner;
	BOOL _administrator;
	BOOL _remoteAccessAllowed;
	HMUserPresenceAuthorization* _presenceAuthStatus;
	HMUserPresenceCompute* _presenceComputeStatus;

}

@property (getter=isOwner) BOOL owner;                                                      //@synthesize owner=_owner - In the implementation block
@property (assign,getter=isAdministrator,nonatomic) BOOL administrator;                     //@synthesize administrator=_administrator - In the implementation block
@property (getter=isRemoteAccessAllowed) BOOL remoteAccessAllowed;                          //@synthesize remoteAccessAllowed=_remoteAccessAllowed - In the implementation block
@property (nonatomic,retain) HMUserPresenceAuthorization * presenceAuthStatus;              //@synthesize presenceAuthStatus=_presenceAuthStatus - In the implementation block
@property (nonatomic,retain) HMUserPresenceCompute * presenceComputeStatus;                 //@synthesize presenceComputeStatus=_presenceComputeStatus - In the implementation block
-(void)setAdministrator:(BOOL)arg1 ;
-(void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithUser:(id)arg1 owner:(BOOL)arg2 administratorPrivilege:(BOOL)arg3 remoteAccess:(BOOL)arg4 presenceAuthStatus:(id)arg5 presenceComputeStatus:(id)arg6 ;
-(void)updateAdministratorAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)presenceComputationStatus;
-(HMUserPresenceAuthorization *)presenceAuthStatus;
-(HMUserPresenceCompute *)presenceComputeStatus;
-(BOOL)isRemoteAccessAllowed;
-(BOOL)isOwner;
-(void)setPresenceAuthStatus:(HMUserPresenceAuthorization *)arg1 ;
-(BOOL)isAdministrator;
-(void)setRemoteAccessAllowed:(BOOL)arg1 ;
-(unsigned long long)presenceAuthorizationStatus;
-(void)setPresenceComputeStatus:(HMUserPresenceCompute *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOwner:(BOOL)arg1 ;
@end

