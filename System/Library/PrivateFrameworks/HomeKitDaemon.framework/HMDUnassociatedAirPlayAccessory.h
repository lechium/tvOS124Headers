/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryAssociation.h>

@class HMFPairingIdentity, NSString;

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMFLogging, HMDAccessoryAssociation> {

	HMFPairingIdentity* _pairingIdentity;

}

@property (copy) HMFPairingIdentity * pairingIdentity;              //@synthesize pairingIdentity=_pairingIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL supportsAssociation; 
+(id)logCategory;
+(Class)modelClass;
-(id)logIdentifier;
-(HMFPairingIdentity *)pairingIdentity;
-(void)setPairingIdentity:(HMFPairingIdentity *)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(void)associateToHome:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsAssociation;
@end

