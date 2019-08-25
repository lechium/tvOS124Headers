/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CURangingMeasurement, CUMobileDevice, NSData, NSUUID, CUPairedPeer, NSDictionary;

@interface RPDevice : NSObject <NSSecureCoding> {

	unsigned char _deviceActionType;
	BOOL _needsSetup;
	int _activityLevel;
	unsigned _flags;
	int _proximity;
	unsigned _blePairState;
	int _rawRSSI;
	int _smoothedRSSI;
	unsigned _systemPairState;
	unsigned _wifiDeviceIEFlags;
	NSString* _accountID;
	NSString* _contactID;
	NSString* _identifier;
	NSString* _idsDeviceIdentifier;
	NSString* _model;
	NSString* _name;
	CURangingMeasurement* _relativeLocation;
	CUMobileDevice* _mobileDevice;
	NSData* _authTag;
	NSData* _bleAdvertisementData;
	NSData* _bleDeviceAddress;
	NSUUID* _identifierUUID;
	CUPairedPeer* _pairedPeer;
	NSUUID* _pairingIdentifier;
	NSData* _txtData;
	NSDictionary* _txtDictionary;
	NSString* _udid;
	NSData* _wifiAddress;
	NSData* _wifiBSSID;
	NSData* _wifiDeviceIEDeviceID;
	NSData* _wifiDeviceIEName;
	NSData* _wifiIEData;
	id _wifiPlatformObject;
	NSString* _wifiSSID;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CUMobileDevice * mobileDevice;                      //@synthesize mobileDevice=_mobileDevice - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (retain) CURangingMeasurement * relativeLocation;                      //@synthesize relativeLocation=_relativeLocation - In the implementation block
@property (nonatomic,copy,readonly) NSData * authTag;                            //@synthesize authTag=_authTag - In the implementation block
@property (nonatomic,copy,readonly) NSData * bleAdvertisementData;               //@synthesize bleAdvertisementData=_bleAdvertisementData - In the implementation block
@property (nonatomic,copy,readonly) NSData * bleDeviceAddress;                   //@synthesize bleDeviceAddress=_bleDeviceAddress - In the implementation block
@property (nonatomic,readonly) unsigned blePairState;                            //@synthesize blePairState=_blePairState - In the implementation block
@property (nonatomic,readonly) unsigned char deviceActionType;                   //@synthesize deviceActionType=_deviceActionType - In the implementation block
@property (nonatomic,copy) NSUUID * identifierUUID;                              //@synthesize identifierUUID=_identifierUUID - In the implementation block
@property (nonatomic,readonly) BOOL needsSetup;                                  //@synthesize needsSetup=_needsSetup - In the implementation block
@property (nonatomic,retain) CUPairedPeer * pairedPeer;                          //@synthesize pairedPeer=_pairedPeer - In the implementation block
@property (nonatomic,copy) NSUUID * pairingIdentifier;                           //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,readonly) int rawRSSI;                                      //@synthesize rawRSSI=_rawRSSI - In the implementation block
@property (nonatomic,readonly) int smoothedRSSI;                                 //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (assign,nonatomic) unsigned systemPairState;                           //@synthesize systemPairState=_systemPairState - In the implementation block
@property (nonatomic,copy,readonly) NSData * txtData;                            //@synthesize txtData=_txtData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * txtDictionary;                //@synthesize txtDictionary=_txtDictionary - In the implementation block
@property (nonatomic,copy) NSString * udid;                                      //@synthesize udid=_udid - In the implementation block
@property (nonatomic,copy) NSData * wifiAddress;                                 //@synthesize wifiAddress=_wifiAddress - In the implementation block
@property (nonatomic,copy) NSData * wifiBSSID;                                   //@synthesize wifiBSSID=_wifiBSSID - In the implementation block
@property (nonatomic,copy) NSData * wifiDeviceIEDeviceID;                        //@synthesize wifiDeviceIEDeviceID=_wifiDeviceIEDeviceID - In the implementation block
@property (nonatomic,readonly) unsigned wifiDeviceIEFlags;                       //@synthesize wifiDeviceIEFlags=_wifiDeviceIEFlags - In the implementation block
@property (nonatomic,copy) NSData * wifiDeviceIEName;                            //@synthesize wifiDeviceIEName=_wifiDeviceIEName - In the implementation block
@property (nonatomic,copy) NSData * wifiIEData;                                  //@synthesize wifiIEData=_wifiIEData - In the implementation block
@property (nonatomic,retain) id wifiPlatformObject;                              //@synthesize wifiPlatformObject=_wifiPlatformObject - In the implementation block
@property (nonatomic,copy) NSString * wifiSSID;                                  //@synthesize wifiSSID=_wifiSSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountID;                        //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) int activityLevel;                                //@synthesize activityLevel=_activityLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                        //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy,readonly) NSString * idsDeviceIdentifier;              //@synthesize idsDeviceIdentifier=_idsDeviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) int proximity;                                    //@synthesize proximity=_proximity - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)flags;
-(void)setRelativeLocation:(CURangingMeasurement *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(int)rawRSSI;
-(void)setIdentifierUUID:(NSUUID *)arg1 ;
-(void)_updateTXTDictionary:(id)arg1 ;
-(NSData *)txtData;
-(NSUUID *)identifierUUID;
-(void)setPairedPeer:(CUPairedPeer *)arg1 ;
-(void)setUdid:(NSString *)arg1 ;
-(NSData *)wifiAddress;
-(void)setWifiAddress:(NSData *)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(int)proximity;
-(NSString *)udid;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(NSString *)accountID;
-(NSUUID *)pairingIdentifier;
-(int)smoothedRSSI;
-(unsigned)systemPairState;
-(void)setSystemPairState:(unsigned)arg1 ;
-(NSDictionary *)txtDictionary;
-(CUPairedPeer *)pairedPeer;
-(unsigned char)deviceActionType;
-(NSString *)contactID;
-(unsigned)updateWithMobileDevice:(id)arg1 ;
-(unsigned)updateWithSFDevice:(id)arg1 changes:(unsigned)arg2 ;
-(void)updateWithSystemInfo:(id)arg1 ;
-(void)updateWithWiFiDevice:(id)arg1 changes:(unsigned)arg2 ;
-(int)activityLevel;
-(CUMobileDevice *)mobileDevice;
-(void)setMobileDevice:(CUMobileDevice *)arg1 ;
-(NSData *)authTag;
-(NSData *)bleAdvertisementData;
-(NSData *)bleDeviceAddress;
-(unsigned)blePairState;
-(NSData *)wifiBSSID;
-(void)setWifiBSSID:(NSData *)arg1 ;
-(NSData *)wifiDeviceIEDeviceID;
-(void)setWifiDeviceIEDeviceID:(NSData *)arg1 ;
-(unsigned)wifiDeviceIEFlags;
-(NSData *)wifiDeviceIEName;
-(void)setWifiDeviceIEName:(NSData *)arg1 ;
-(NSData *)wifiIEData;
-(void)setWifiIEData:(NSData *)arg1 ;
-(id)wifiPlatformObject;
-(void)setWifiPlatformObject:(id)arg1 ;
-(NSString *)wifiSSID;
-(void)setWifiSSID:(NSString *)arg1 ;
-(CURangingMeasurement *)relativeLocation;
-(NSString *)idsDeviceIdentifier;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)model;
-(BOOL)needsSetup;
@end
