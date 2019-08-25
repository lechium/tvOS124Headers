/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitVendorInformation, NSString;

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _addOperation;
	BOOL _addViaWAC;
	BOOL _wacLegacy;
	AWDHomeKitVendorInformation* _vendorInfo;
	long long _linkType;
	long long _certificationStatus;
	unsigned long long _authMethod;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorInfo;               //@synthesize vendorInfo=_vendorInfo - In the implementation block
@property (assign,nonatomic) long long linkType;                                     //@synthesize linkType=_linkType - In the implementation block
@property (getter=isAddOperation,nonatomic,readonly) BOOL addOperation;              //@synthesize addOperation=_addOperation - In the implementation block
@property (assign,getter=isAddViaWAC,nonatomic) BOOL addViaWAC;                      //@synthesize addViaWAC=_addViaWAC - In the implementation block
@property (assign,getter=isWacLegacy,nonatomic) BOOL wacLegacy;                      //@synthesize wacLegacy=_wacLegacy - In the implementation block
@property (assign,nonatomic) long long certificationStatus;                          //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                          //@synthesize authMethod=_authMethod - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
+(id)pairingAccessory:(id)arg1 ;
+(id)pairingAccessoryWithDescription:(id)arg1 ;
+(id)removingAccessory:(id)arg1 hapAccessory:(id)arg2 ;
+(void)initialize;
+(id)uuid;
-(void)setLinkType:(long long)arg1 ;
-(long long)linkType;
-(AWDHomeKitVendorInformation *)vendorInfo;
-(void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2 ;
-(void)setAuthenticationMethod:(unsigned long long)arg1 ;
-(void)pairedAccessory:(id)arg1 ;
-(void)setCertificationStatus:(long long)arg1 ;
-(long long)certificationStatus;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithAccessoryDescription:(id)arg1 ;
-(id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 isAddOperation:(BOOL)arg4 ;
-(void)setAddViaWAC:(BOOL)arg1 ;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(BOOL)isAddOperation;
-(BOOL)isAddViaWAC;
-(BOOL)isWacLegacy;
-(void)setWacLegacy:(BOOL)arg1 ;
-(void)setAddedViaWAC:(BOOL)arg1 ;
-(void)setcertificationStatus:(long long)arg1 ;
-(void)setVendorInfo:(AWDHomeKitVendorInformation *)arg1 ;
-(unsigned long long)authMethod;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end

