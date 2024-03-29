/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying> {

	unsigned _maxMediaBitrate;
	unsigned _maxNetworkBitrate;
	float _maxPacketsPerSecond;
	unsigned _qualityIndex;
	unsigned _repairedMaxNetworkBitrate;
	unsigned _repairedStreamID;
	unsigned _ssrc;
	unsigned _streamID;
	unsigned _supportedPayloads;
	SCD_Struct_VC3 _has;

}

@property (assign,nonatomic) unsigned ssrc;                                   //@synthesize ssrc=_ssrc - In the implementation block
@property (assign,nonatomic) BOOL hasMaxNetworkBitrate; 
@property (assign,nonatomic) unsigned maxNetworkBitrate;                      //@synthesize maxNetworkBitrate=_maxNetworkBitrate - In the implementation block
@property (assign,nonatomic) BOOL hasSupportedPayloads; 
@property (assign,nonatomic) unsigned supportedPayloads;                      //@synthesize supportedPayloads=_supportedPayloads - In the implementation block
@property (assign,nonatomic) unsigned streamID;                               //@synthesize streamID=_streamID - In the implementation block
@property (assign,nonatomic) unsigned qualityIndex;                           //@synthesize qualityIndex=_qualityIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMaxMediaBitrate; 
@property (assign,nonatomic) unsigned maxMediaBitrate;                        //@synthesize maxMediaBitrate=_maxMediaBitrate - In the implementation block
@property (assign,nonatomic) BOOL hasMaxPacketsPerSecond; 
@property (assign,nonatomic) float maxPacketsPerSecond;                       //@synthesize maxPacketsPerSecond=_maxPacketsPerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasRepairedStreamID; 
@property (assign,nonatomic) unsigned repairedStreamID;                       //@synthesize repairedStreamID=_repairedStreamID - In the implementation block
@property (assign,nonatomic) BOOL hasRepairedMaxNetworkBitrate; 
@property (assign,nonatomic) unsigned repairedMaxNetworkBitrate;              //@synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxNetworkBitrate:(unsigned)arg1 ;
-(void)setHasMaxNetworkBitrate:(BOOL)arg1 ;
-(BOOL)hasMaxNetworkBitrate;
-(void)setMaxMediaBitrate:(unsigned)arg1 ;
-(void)setHasMaxMediaBitrate:(BOOL)arg1 ;
-(BOOL)hasMaxMediaBitrate;
-(void)setMaxPacketsPerSecond:(float)arg1 ;
-(void)setHasMaxPacketsPerSecond:(BOOL)arg1 ;
-(BOOL)hasMaxPacketsPerSecond;
-(void)setRepairedStreamID:(unsigned)arg1 ;
-(void)setHasRepairedStreamID:(BOOL)arg1 ;
-(BOOL)hasRepairedStreamID;
-(void)setRepairedMaxNetworkBitrate:(unsigned)arg1 ;
-(void)setHasRepairedMaxNetworkBitrate:(BOOL)arg1 ;
-(BOOL)hasRepairedMaxNetworkBitrate;
-(unsigned)ssrc;
-(void)setSsrc:(unsigned)arg1 ;
-(unsigned)maxNetworkBitrate;
-(unsigned)streamID;
-(void)setStreamID:(unsigned)arg1 ;
-(unsigned)qualityIndex;
-(void)setQualityIndex:(unsigned)arg1 ;
-(unsigned)maxMediaBitrate;
-(float)maxPacketsPerSecond;
-(unsigned)repairedStreamID;
-(unsigned)repairedMaxNetworkBitrate;
-(void)setSupportedPayloads:(unsigned)arg1 ;
-(void)setHasSupportedPayloads:(BOOL)arg1 ;
-(BOOL)hasSupportedPayloads;
-(unsigned)supportedPayloads;
-(id)initWithMultiwayConfig:(id)arg1 ;
-(id)newAudioRuleCollectionWithAudioRuleCollection:(id)arg1 ;
-(void)printWithLogFile:(void*)arg1 ;
-(void)setPayloadFlagsWithAudioRuleCollection:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

