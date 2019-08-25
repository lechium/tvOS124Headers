/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRCDevice.h>

@class NSDictionary;

@interface CoreCECDevice : CoreRCDevice {

	unsigned char _logicalAddress;
	BOOL _isActiveSource;
	BOOL _systemAudioControlEnabled;
	unsigned long long _physicalAddress;
	unsigned long long _deviceType;
	unsigned long long _cecVersion;
	unsigned long long _vendorID;
	unsigned long long _allDeviceTypes;
	unsigned long long _deviceFeatures;
	NSDictionary* _rcProfile;
	unsigned long long _powerStatus;
	unsigned long long _deckStatus;

}

@property (assign,nonatomic) unsigned char logicalAddress;                    //@synthesize logicalAddress=_logicalAddress - In the implementation block
@property (assign,nonatomic) unsigned long long physicalAddress;              //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                   //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) unsigned long long cecVersion;                   //@synthesize cecVersion=_cecVersion - In the implementation block
@property (assign,nonatomic) unsigned long long vendorID;                     //@synthesize vendorID=_vendorID - In the implementation block
@property (assign,nonatomic) unsigned long long powerStatus;                  //@synthesize powerStatus=_powerStatus - In the implementation block
@property (assign,nonatomic) unsigned long long deckStatus;                   //@synthesize deckStatus=_deckStatus - In the implementation block
@property (assign,nonatomic) unsigned long long allDeviceTypes;               //@synthesize allDeviceTypes=_allDeviceTypes - In the implementation block
@property (assign,nonatomic) unsigned long long deviceFeatures;               //@synthesize deviceFeatures=_deviceFeatures - In the implementation block
@property (nonatomic,copy) NSDictionary * rcProfile;                          //@synthesize rcProfile=_rcProfile - In the implementation block
@property (assign,nonatomic) BOOL isActiveSource;                             //@synthesize isActiveSource=_isActiveSource - In the implementation block
@property (nonatomic,readonly) BOOL systemAudioControlEnabled;                //@synthesize systemAudioControlEnabled=_systemAudioControlEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isCEC2Device; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)deviceFeatures;
-(void)setVendorID:(unsigned long long)arg1 ;
-(unsigned long long)vendorID;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(unsigned long long)deviceType;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)powerStatus;
-(void)setPowerStatus:(unsigned long long)arg1 ;
-(void)shouldAssertActiveSource;
-(void)deckControlPlayHasBeenReceived:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)deckControlCommandHasBeenReceived:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)deckControlStatusHasBeenUpdated:(unsigned long long)arg1 fromDevice:(id)arg2 ;
-(void)featureAbort:(id)arg1 ;
-(void)standbyRequestHasBeenReceived:(id)arg1 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 ;
-(unsigned long long)physicalAddress;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 attributes:(id)arg5 ;
-(unsigned char)logicalAddress;
-(id)mergeProperties;
-(void)setPhysicalAddress:(unsigned long long)arg1 ;
-(void)setLogicalAddress:(unsigned char)arg1 ;
-(unsigned long long)allDeviceTypes;
-(void)setAllDeviceTypes:(unsigned long long)arg1 ;
-(unsigned long long)cecVersion;
-(NSDictionary *)rcProfile;
-(void)setCecVersion:(unsigned long long)arg1 ;
-(void)setDeviceFeatures:(unsigned long long)arg1 ;
-(void)setRcProfile:(NSDictionary *)arg1 ;
-(unsigned long long)deckStatus;
-(BOOL)systemAudioControlEnabled;
-(void)notifyDelegateActiveSourceStatusHasChanged;
-(BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(void)willChangePowerStatus:(unsigned long long)arg1 ;
-(void)didChangePowerStatus:(unsigned long long)arg1 ;
-(void)notifyDelegateDeckControlCommandHasBeenReceived:(id)arg1 command:(unsigned long long)arg2 ;
-(void)notifyDelegateDeckControlPlayHasBeenReceived:(id)arg1 playMode:(unsigned long long)arg2 ;
-(void)notifyDelegateDeckControlStatusHasBeenUpdated:(id)arg1 deckInfo:(unsigned long long)arg2 ;
-(void)notifyDelegateFeatureAbort:(id)arg1 ;
-(void)notifyDelegateShouldAssertActiveSource;
-(void)notifyDelegateStandbyRequestHasBeenReceived:(id)arg1 ;
-(BOOL)isCEC2Device;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 logicalAddress:(unsigned char)arg3 physicalAddress:(unsigned long long)arg4 deviceType:(unsigned long long)arg5 ;
-(void)setDeckStatus:(unsigned long long)arg1 ;
-(BOOL)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)refreshDevices:(id*)arg1 ;
-(BOOL)refreshPropertiesOfDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestActiveSource:(id*)arg1 ;
-(BOOL)resignActiveSource:(id*)arg1 ;
-(BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)isActiveSource;
-(BOOL)setPowerStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setIsActiveSource:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

