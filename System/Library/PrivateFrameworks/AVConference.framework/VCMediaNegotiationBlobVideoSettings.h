/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying> {

	unsigned _rtpSSRC;
	NSMutableArray* _videoPayloadCollections;
	BOOL _allowRTCPFB;

}

@property (assign,nonatomic) unsigned rtpSSRC;                                      //@synthesize rtpSSRC=_rtpSSRC - In the implementation block
@property (assign,nonatomic) BOOL allowRTCPFB;                                      //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoPayloadCollections;              //@synthesize videoPayloadCollections=_videoPayloadCollections - In the implementation block
+(Class)videoPayloadCollectionsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)rtpSSRC;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(BOOL)allowRTCPFB;
-(void)setAllowRTCPFB:(BOOL)arg1 ;
-(void)setVideoPayloadCollections:(NSMutableArray *)arg1 ;
-(void)addVideoPayloadCollections:(id)arg1 ;
-(unsigned long long)videoPayloadCollectionsCount;
-(void)clearVideoPayloadCollections;
-(id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)videoPayloadCollections;
-(id)initWithSSRC:(unsigned)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 ;
-(id)initWithScreenSSRC:(unsigned)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 ;
-(id)newVideoRuleCollectionsForScreen:(BOOL)arg1 isCellular16x9Capable:(BOOL)arg2 ;
-(void)printVideoWithLogFile:(void*)arg1 ;
-(void)printScreenWithLogFile:(void*)arg1 ;
-(BOOL)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(BOOL)arg3 isCellular16x9Capable:(BOOL)arg4 ;
-(id)getPayloadSettingsForPayload:(int)arg1 ;
-(void)checkAndInsertRuleWithWidth:(unsigned)arg1 height:(unsigned)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned*)arg6 negotiationBit:(unsigned)arg7 rules:(id)arg8 isCellular16x9Capable:(BOOL)arg9 ;
-(id)parameterSetStringFromPayloadSettings:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

