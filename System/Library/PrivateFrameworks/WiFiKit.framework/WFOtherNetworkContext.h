/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFCredentialsContext.h>
#import <libobjc.A.dylib/WFContextPresenting.h>
#import <libobjc.A.dylib/WFOtherNetworkProviderContext.h>
#import <libobjc.A.dylib/WFOtherNetworkViewControllerDelegate.h>

@class NSArray, NSString, WFNetworkScanRecord, WFUserSuppliedNetwork, WFNetworkProfile;

@interface WFOtherNetworkContext : WFCredentialsContext <WFContextPresenting, WFOtherNetworkProviderContext, WFOtherNetworkViewControllerDelegate> {

	BOOL passwordSharingSupported;
	BOOL _WAPIEnabled;
	NSArray* _availableTLSIdentities;
	long long _requestedFields;
	NSString* username;
	WFNetworkScanRecord* _network;
	WFUserSuppliedNetwork* _userSuppliedNetwork;
	NSArray* _WAPIRootCertificates;
	NSArray* _WAPIIdentities;
	WFNetworkProfile* _profile;
	unsigned long long _type;

}

@property (assign,nonatomic) BOOL WAPIEnabled;                                                               //@synthesize WAPIEnabled=_WAPIEnabled - In the implementation block
@property (nonatomic,retain) NSArray * WAPIRootCertificates;                                                 //@synthesize WAPIRootCertificates=_WAPIRootCertificates - In the implementation block
@property (nonatomic,retain) NSArray * WAPIIdentities;                                                       //@synthesize WAPIIdentities=_WAPIIdentities - In the implementation block
@property (nonatomic,retain) NSArray * availableTLSIdentities;                                               //@synthesize availableTLSIdentities=_availableTLSIdentities - In the implementation block
@property (assign,nonatomic) long long requestedFields;                                                      //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * network;                                                  //@synthesize network=_network - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) WFUserSuppliedNetwork * userSuppliedNetwork;                                    //@synthesize userSuppliedNetwork=_userSuppliedNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider; 
@property (nonatomic,readonly) BOOL needsDismissal; 
@property (getter=isPasswordSharingSupported,nonatomic,readonly) BOOL passwordSharingSupported; 
@property (nonatomic,readonly) NSString * username; 
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(long long)requestedFields;
-(void)setRequestedFields:(long long)arg1 ;
-(WFNetworkScanRecord *)network;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)finishWithError:(id)arg1 forNetwork:(id)arg2 profile:(id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 isWAPIEnabled:(BOOL)arg2 ;
-(WFUserSuppliedNetwork *)userSuppliedNetwork;
-(void)setWAPIEnabled:(BOOL)arg1 ;
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(NSArray *)WAPIRootCertificates;
-(void)setUserSuppliedNetwork:(WFUserSuppliedNetwork *)arg1 ;
-(void)gatherCredentials:(/*^block*/id)arg1 ;
-(void)_updateActivityStringForError:(id)arg1 networkName:(id)arg2 ;
-(BOOL)isPasswordSharingSupported;
-(NSArray *)availableTLSIdentities;
-(BOOL)WAPIEnabled;
-(NSArray *)WAPIIdentities;
-(void)otherNetworkViewControllerUserDidTapJoin:(id)arg1 ;
-(void)otherNetworkViewControllerUserDidTapCancel:(id)arg1 ;
-(BOOL)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2 ;
-(void)setAvailableTLSIdentities:(NSArray *)arg1 ;
-(void)setWAPIRootCertificates:(NSArray *)arg1 ;
-(void)setWAPIIdentities:(NSArray *)arg1 ;
-(WFNetworkProfile *)profile;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)username;
@end

