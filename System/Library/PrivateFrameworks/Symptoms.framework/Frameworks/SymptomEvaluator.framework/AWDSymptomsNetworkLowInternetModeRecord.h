/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDSymptomsNetworkLowInternetModeRecord : PBCodable <NSCopying> {

	unsigned long long _limConnTimeoutRatePercent;
	unsigned long long _limDLMaxBWBps;
	unsigned long long _limPacketLossRatePercent;
	unsigned long long _limPacketOOORatePercent;
	unsigned long long _limRTTAvgMilliseconds;
	unsigned long long _limRTTMinMilliseconds;
	unsigned long long _limRTTVarMilliseconds;
	unsigned long long _limULMaxBWBps;
	unsigned long long _timestamp;
	unsigned _limDLDetected;
	unsigned _limInterfaceType;
	NSData* _limSignature;
	unsigned _limULDetected;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasLimSignature; 
@property (nonatomic,retain) NSData * limSignature;                                     //@synthesize limSignature=_limSignature - In the implementation block
@property (assign,nonatomic) BOOL hasLimDLMaxBWBps; 
@property (assign,nonatomic) unsigned long long limDLMaxBWBps;                          //@synthesize limDLMaxBWBps=_limDLMaxBWBps - In the implementation block
@property (assign,nonatomic) BOOL hasLimULMaxBWBps; 
@property (assign,nonatomic) unsigned long long limULMaxBWBps;                          //@synthesize limULMaxBWBps=_limULMaxBWBps - In the implementation block
@property (assign,nonatomic) BOOL hasLimPacketLossRatePercent; 
@property (assign,nonatomic) unsigned long long limPacketLossRatePercent;               //@synthesize limPacketLossRatePercent=_limPacketLossRatePercent - In the implementation block
@property (assign,nonatomic) BOOL hasLimPacketOOORatePercent; 
@property (assign,nonatomic) unsigned long long limPacketOOORatePercent;                //@synthesize limPacketOOORatePercent=_limPacketOOORatePercent - In the implementation block
@property (assign,nonatomic) BOOL hasLimRTTVarMilliseconds; 
@property (assign,nonatomic) unsigned long long limRTTVarMilliseconds;                  //@synthesize limRTTVarMilliseconds=_limRTTVarMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasLimRTTMinMilliseconds; 
@property (assign,nonatomic) unsigned long long limRTTMinMilliseconds;                  //@synthesize limRTTMinMilliseconds=_limRTTMinMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasLimRTTAvgMilliseconds; 
@property (assign,nonatomic) unsigned long long limRTTAvgMilliseconds;                  //@synthesize limRTTAvgMilliseconds=_limRTTAvgMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasLimConnTimeoutRatePercent; 
@property (assign,nonatomic) unsigned long long limConnTimeoutRatePercent;              //@synthesize limConnTimeoutRatePercent=_limConnTimeoutRatePercent - In the implementation block
@property (assign,nonatomic) BOOL hasLimDLDetected; 
@property (assign,nonatomic) unsigned limDLDetected;                                    //@synthesize limDLDetected=_limDLDetected - In the implementation block
@property (assign,nonatomic) BOOL hasLimULDetected; 
@property (assign,nonatomic) unsigned limULDetected;                                    //@synthesize limULDetected=_limULDetected - In the implementation block
@property (assign,nonatomic) BOOL hasLimInterfaceType; 
@property (assign,nonatomic) unsigned limInterfaceType;                                 //@synthesize limInterfaceType=_limInterfaceType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLimSignature:(NSData *)arg1 ;
-(BOOL)hasLimSignature;
-(void)setLimDLMaxBWBps:(unsigned long long)arg1 ;
-(void)setHasLimDLMaxBWBps:(BOOL)arg1 ;
-(BOOL)hasLimDLMaxBWBps;
-(void)setLimULMaxBWBps:(unsigned long long)arg1 ;
-(void)setHasLimULMaxBWBps:(BOOL)arg1 ;
-(BOOL)hasLimULMaxBWBps;
-(void)setLimPacketLossRatePercent:(unsigned long long)arg1 ;
-(void)setHasLimPacketLossRatePercent:(BOOL)arg1 ;
-(BOOL)hasLimPacketLossRatePercent;
-(void)setLimPacketOOORatePercent:(unsigned long long)arg1 ;
-(void)setHasLimPacketOOORatePercent:(BOOL)arg1 ;
-(BOOL)hasLimPacketOOORatePercent;
-(void)setLimRTTVarMilliseconds:(unsigned long long)arg1 ;
-(void)setHasLimRTTVarMilliseconds:(BOOL)arg1 ;
-(BOOL)hasLimRTTVarMilliseconds;
-(void)setLimRTTMinMilliseconds:(unsigned long long)arg1 ;
-(void)setHasLimRTTMinMilliseconds:(BOOL)arg1 ;
-(BOOL)hasLimRTTMinMilliseconds;
-(void)setLimRTTAvgMilliseconds:(unsigned long long)arg1 ;
-(void)setHasLimRTTAvgMilliseconds:(BOOL)arg1 ;
-(BOOL)hasLimRTTAvgMilliseconds;
-(void)setLimConnTimeoutRatePercent:(unsigned long long)arg1 ;
-(void)setHasLimConnTimeoutRatePercent:(BOOL)arg1 ;
-(BOOL)hasLimConnTimeoutRatePercent;
-(void)setLimDLDetected:(unsigned)arg1 ;
-(void)setHasLimDLDetected:(BOOL)arg1 ;
-(BOOL)hasLimDLDetected;
-(void)setLimULDetected:(unsigned)arg1 ;
-(void)setHasLimULDetected:(BOOL)arg1 ;
-(BOOL)hasLimULDetected;
-(void)setLimInterfaceType:(unsigned)arg1 ;
-(void)setHasLimInterfaceType:(BOOL)arg1 ;
-(BOOL)hasLimInterfaceType;
-(NSData *)limSignature;
-(unsigned long long)limDLMaxBWBps;
-(unsigned long long)limULMaxBWBps;
-(unsigned long long)limPacketLossRatePercent;
-(unsigned long long)limPacketOOORatePercent;
-(unsigned long long)limRTTVarMilliseconds;
-(unsigned long long)limRTTMinMilliseconds;
-(unsigned long long)limRTTAvgMilliseconds;
-(unsigned long long)limConnTimeoutRatePercent;
-(unsigned)limDLDetected;
-(unsigned)limULDetected;
-(unsigned)limInterfaceType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

