/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying> {

	SCD_Struct_AW15* _bcnFrmsHistorys;
	SCD_Struct_AW15* _bcnPerHistorys;
	SCD_Struct_AW15* _fwTxFrmsHistorys;
	SCD_Struct_AW15* _fwTxPerHistorys;
	SCD_Struct_AW15* _rssiHistorys;
	SCD_Struct_AW15* _txFrmsHistorys;
	SCD_Struct_AW15* _txPerHistorys;
	double _associationDuration;
	unsigned long long _timestamp;
	unsigned _akmSuites;
	unsigned _capabilities;
	unsigned _channel;
	unsigned _channelWidth;
	NSString* _countryCode;
	unsigned _flags;
	unsigned _gatewayARPHistory;
	unsigned _htASel;
	unsigned _htAmpduParams;
	unsigned _htExtended;
	unsigned _htInfo;
	NSData* _htSupportedMcsSet;
	unsigned _htTxBf;
	NSString* _locale;
	unsigned _mcastCipher;
	NSData* _oui;
	unsigned _phyMode;
	unsigned _reason;
	unsigned _securityType;
	unsigned _subreason;
	unsigned _ucastCipher;
	unsigned _vhtInfo;
	NSData* _vhtSupportedMcsSet;
	unsigned _wpaProtocol;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	BOOL _isInVol;
	BOOL _isLinkUp;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long rssiHistorysCount; 
@property (nonatomic,readonly) int* rssiHistorys; 
@property (assign,nonatomic) BOOL hasIsLinkUp; 
@property (assign,nonatomic) BOOL isLinkUp;                                           //@synthesize isLinkUp=_isLinkUp - In the implementation block
@property (assign,nonatomic) BOOL hasIsInVol; 
@property (assign,nonatomic) BOOL isInVol;                                            //@synthesize isInVol=_isInVol - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasSubreason; 
@property (assign,nonatomic) unsigned subreason;                                      //@synthesize subreason=_subreason - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                        //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                   //@synthesize channelWidth=_channelWidth - In the implementation block
@property (assign,nonatomic) BOOL hasPhyMode; 
@property (assign,nonatomic) unsigned phyMode;                                        //@synthesize phyMode=_phyMode - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                                            //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                                   //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasWpaProtocol; 
@property (assign,nonatomic) unsigned wpaProtocol;                                    //@synthesize wpaProtocol=_wpaProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasMcastCipher; 
@property (assign,nonatomic) unsigned mcastCipher;                                    //@synthesize mcastCipher=_mcastCipher - In the implementation block
@property (assign,nonatomic) BOOL hasUcastCipher; 
@property (assign,nonatomic) unsigned ucastCipher;                                    //@synthesize ucastCipher=_ucastCipher - In the implementation block
@property (assign,nonatomic) BOOL hasAkmSuites; 
@property (assign,nonatomic) unsigned akmSuites;                                      //@synthesize akmSuites=_akmSuites - In the implementation block
@property (assign,nonatomic) BOOL hasCapabilities; 
@property (assign,nonatomic) unsigned capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasHtInfo; 
@property (assign,nonatomic) unsigned htInfo;                                         //@synthesize htInfo=_htInfo - In the implementation block
@property (assign,nonatomic) BOOL hasHtExtended; 
@property (assign,nonatomic) unsigned htExtended;                                     //@synthesize htExtended=_htExtended - In the implementation block
@property (assign,nonatomic) BOOL hasHtTxBf; 
@property (assign,nonatomic) unsigned htTxBf;                                         //@synthesize htTxBf=_htTxBf - In the implementation block
@property (assign,nonatomic) BOOL hasHtASel; 
@property (assign,nonatomic) unsigned htASel;                                         //@synthesize htASel=_htASel - In the implementation block
@property (assign,nonatomic) BOOL hasHtAmpduParams; 
@property (assign,nonatomic) unsigned htAmpduParams;                                  //@synthesize htAmpduParams=_htAmpduParams - In the implementation block
@property (nonatomic,readonly) BOOL hasHtSupportedMcsSet; 
@property (nonatomic,retain) NSData * htSupportedMcsSet;                              //@synthesize htSupportedMcsSet=_htSupportedMcsSet - In the implementation block
@property (assign,nonatomic) BOOL hasVhtInfo; 
@property (assign,nonatomic) unsigned vhtInfo;                                        //@synthesize vhtInfo=_vhtInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasVhtSupportedMcsSet; 
@property (nonatomic,retain) NSData * vhtSupportedMcsSet;                             //@synthesize vhtSupportedMcsSet=_vhtSupportedMcsSet - In the implementation block
@property (nonatomic,readonly) unsigned long long txPerHistorysCount; 
@property (nonatomic,readonly) int* txPerHistorys; 
@property (nonatomic,readonly) unsigned long long txFrmsHistorysCount; 
@property (nonatomic,readonly) int* txFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxPerHistorysCount; 
@property (nonatomic,readonly) int* fwTxPerHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxFrmsHistorysCount; 
@property (nonatomic,readonly) int* fwTxFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long bcnPerHistorysCount; 
@property (nonatomic,readonly) int* bcnPerHistorys; 
@property (nonatomic,readonly) unsigned long long bcnFrmsHistorysCount; 
@property (nonatomic,readonly) int* bcnFrmsHistorys; 
@property (assign,nonatomic) BOOL hasGatewayARPHistory; 
@property (assign,nonatomic) unsigned gatewayARPHistory;                              //@synthesize gatewayARPHistory=_gatewayARPHistory - In the implementation block
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL hasAssociationDuration; 
@property (assign,nonatomic) double associationDuration;                              //@synthesize associationDuration=_associationDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType;                              //@synthesize wpsResponseType=_wpsResponseType - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement;                       //@synthesize wpsManufacturerElement=_wpsManufacturerElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName;                                 //@synthesize wpsModelName=_wpsModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber;                               //@synthesize wpsModelNumber=_wpsModelNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory;                 //@synthesize wpsPrimaryDeviceTypeCategory=_wpsPrimaryDeviceTypeCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory;              //@synthesize wpsPrimaryDeviceTypeSubCategory=_wpsPrimaryDeviceTypeSubCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement;                         //@synthesize wpsDeviceNameElement=_wpsDeviceNameElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData;                            //@synthesize wpsDeviceNameData=_wpsDeviceNameData - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods;                             //@synthesize wpsConfigMethods=_wpsConfigMethods - In the implementation block
-(void)setOui:(NSData *)arg1 ;
-(BOOL)hasOui;
-(NSData *)oui;
-(void)setHtSupportedMcsSet:(NSData *)arg1 ;
-(void)setVhtSupportedMcsSet:(NSData *)arg1 ;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(unsigned long long)rssiHistorysCount;
-(void)clearRssiHistorys;
-(int)rssiHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addRssiHistory:(int)arg1 ;
-(unsigned long long)txPerHistorysCount;
-(void)clearTxPerHistorys;
-(int)txPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addTxPerHistory:(int)arg1 ;
-(unsigned long long)txFrmsHistorysCount;
-(void)clearTxFrmsHistorys;
-(int)txFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addTxFrmsHistory:(int)arg1 ;
-(unsigned long long)fwTxPerHistorysCount;
-(void)clearFwTxPerHistorys;
-(int)fwTxPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addFwTxPerHistory:(int)arg1 ;
-(unsigned long long)fwTxFrmsHistorysCount;
-(void)clearFwTxFrmsHistorys;
-(int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addFwTxFrmsHistory:(int)arg1 ;
-(unsigned long long)bcnPerHistorysCount;
-(void)clearBcnPerHistorys;
-(int)bcnPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addBcnPerHistory:(int)arg1 ;
-(unsigned long long)bcnFrmsHistorysCount;
-(void)clearBcnFrmsHistorys;
-(int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addBcnFrmsHistory:(int)arg1 ;
-(int*)rssiHistorys;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setIsLinkUp:(BOOL)arg1 ;
-(void)setHasIsLinkUp:(BOOL)arg1 ;
-(BOOL)hasIsLinkUp;
-(void)setIsInVol:(BOOL)arg1 ;
-(void)setHasIsInVol:(BOOL)arg1 ;
-(BOOL)hasIsInVol;
-(void)setSubreason:(unsigned)arg1 ;
-(void)setHasSubreason:(BOOL)arg1 ;
-(BOOL)hasSubreason;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(void)setWpaProtocol:(unsigned)arg1 ;
-(void)setHasWpaProtocol:(BOOL)arg1 ;
-(BOOL)hasWpaProtocol;
-(void)setMcastCipher:(unsigned)arg1 ;
-(void)setHasMcastCipher:(BOOL)arg1 ;
-(BOOL)hasMcastCipher;
-(void)setUcastCipher:(unsigned)arg1 ;
-(void)setHasUcastCipher:(BOOL)arg1 ;
-(BOOL)hasUcastCipher;
-(void)setAkmSuites:(unsigned)arg1 ;
-(void)setHasAkmSuites:(BOOL)arg1 ;
-(BOOL)hasAkmSuites;
-(void)setHasCapabilities:(BOOL)arg1 ;
-(BOOL)hasCapabilities;
-(void)setHtInfo:(unsigned)arg1 ;
-(void)setHasHtInfo:(BOOL)arg1 ;
-(BOOL)hasHtInfo;
-(void)setHtExtended:(unsigned)arg1 ;
-(void)setHasHtExtended:(BOOL)arg1 ;
-(BOOL)hasHtExtended;
-(void)setHtTxBf:(unsigned)arg1 ;
-(void)setHasHtTxBf:(BOOL)arg1 ;
-(BOOL)hasHtTxBf;
-(void)setHtASel:(unsigned)arg1 ;
-(void)setHasHtASel:(BOOL)arg1 ;
-(BOOL)hasHtASel;
-(void)setHtAmpduParams:(unsigned)arg1 ;
-(void)setHasHtAmpduParams:(BOOL)arg1 ;
-(BOOL)hasHtAmpduParams;
-(BOOL)hasHtSupportedMcsSet;
-(void)setVhtInfo:(unsigned)arg1 ;
-(void)setHasVhtInfo:(BOOL)arg1 ;
-(BOOL)hasVhtInfo;
-(BOOL)hasVhtSupportedMcsSet;
-(int*)txPerHistorys;
-(void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)txFrmsHistorys;
-(void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)fwTxPerHistorys;
-(void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)fwTxFrmsHistorys;
-(void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)bcnPerHistorys;
-(void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)bcnFrmsHistorys;
-(void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setGatewayARPHistory:(unsigned)arg1 ;
-(void)setHasGatewayARPHistory:(BOOL)arg1 ;
-(BOOL)hasGatewayARPHistory;
-(void)setAssociationDuration:(double)arg1 ;
-(void)setHasAssociationDuration:(BOOL)arg1 ;
-(BOOL)hasAssociationDuration;
-(BOOL)hasWpsResponseType;
-(BOOL)hasWpsManufacturerElement;
-(BOOL)hasWpsModelName;
-(BOOL)hasWpsModelNumber;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsDeviceNameElement;
-(BOOL)hasWpsDeviceNameData;
-(BOOL)hasWpsConfigMethods;
-(BOOL)isLinkUp;
-(BOOL)isInVol;
-(unsigned)subreason;
-(unsigned)wpaProtocol;
-(unsigned)mcastCipher;
-(unsigned)ucastCipher;
-(unsigned)akmSuites;
-(unsigned)htInfo;
-(unsigned)htExtended;
-(unsigned)htTxBf;
-(unsigned)htASel;
-(unsigned)htAmpduParams;
-(NSData *)htSupportedMcsSet;
-(unsigned)vhtInfo;
-(NSData *)vhtSupportedMcsSet;
-(unsigned)gatewayARPHistory;
-(double)associationDuration;
-(NSString *)wpsResponseType;
-(NSString *)wpsManufacturerElement;
-(NSString *)wpsModelName;
-(NSString *)wpsModelNumber;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsDeviceNameElement;
-(NSString *)wpsDeviceNameData;
-(NSString *)wpsConfigMethods;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(void)setChannelWidth:(unsigned)arg1 ;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(BOOL)hasChannelWidth;
-(void)setPhyMode:(unsigned)arg1 ;
-(void)setHasPhyMode:(BOOL)arg1 ;
-(BOOL)hasPhyMode;
-(unsigned)securityType;
-(unsigned)channel;
-(unsigned)channelWidth;
-(unsigned)phyMode;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(BOOL)hasLocale;
-(unsigned)flags;
-(BOOL)hasReason;
-(void)setFlags:(unsigned)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(unsigned)capabilities;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reason;
-(unsigned long long)timestamp;
-(void)setLocale:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)locale;
@end

