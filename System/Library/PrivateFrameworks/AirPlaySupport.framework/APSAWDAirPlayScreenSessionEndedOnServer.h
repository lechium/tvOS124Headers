/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayScreenSessionEndedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioLate;
	unsigned _audioLost;
	unsigned _audioUnrecovered;
	int _avgAhead;
	unsigned _avgRTT;
	int _avgReceiveMs;
	unsigned _caDrops;
	unsigned _caFrames;
	unsigned _clearScreens;
	unsigned _configChanges;
	unsigned _duration;
	unsigned _forcedRefreshes;
	unsigned _framesReceived;
	unsigned _negativeAheadFrames;
	int _reason;
	unsigned _resumes;
	NSString* _sessionUUID;
	unsigned _suspends;
	unsigned _unclearScreens;
	SCD_Struct_AP4 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasFramesReceived; 
@property (assign,nonatomic) unsigned framesReceived;                   //@synthesize framesReceived=_framesReceived - In the implementation block
@property (assign,nonatomic) BOOL hasConfigChanges; 
@property (assign,nonatomic) unsigned configChanges;                    //@synthesize configChanges=_configChanges - In the implementation block
@property (assign,nonatomic) BOOL hasClearScreens; 
@property (assign,nonatomic) unsigned clearScreens;                     //@synthesize clearScreens=_clearScreens - In the implementation block
@property (assign,nonatomic) BOOL hasUnclearScreens; 
@property (assign,nonatomic) unsigned unclearScreens;                   //@synthesize unclearScreens=_unclearScreens - In the implementation block
@property (assign,nonatomic) BOOL hasSuspends; 
@property (assign,nonatomic) unsigned suspends;                         //@synthesize suspends=_suspends - In the implementation block
@property (assign,nonatomic) BOOL hasResumes; 
@property (assign,nonatomic) unsigned resumes;                          //@synthesize resumes=_resumes - In the implementation block
@property (assign,nonatomic) BOOL hasForcedRefreshes; 
@property (assign,nonatomic) unsigned forcedRefreshes;                  //@synthesize forcedRefreshes=_forcedRefreshes - In the implementation block
@property (assign,nonatomic) BOOL hasNegativeAheadFrames; 
@property (assign,nonatomic) unsigned negativeAheadFrames;              //@synthesize negativeAheadFrames=_negativeAheadFrames - In the implementation block
@property (assign,nonatomic) BOOL hasCaFrames; 
@property (assign,nonatomic) unsigned caFrames;                         //@synthesize caFrames=_caFrames - In the implementation block
@property (assign,nonatomic) BOOL hasCaDrops; 
@property (assign,nonatomic) unsigned caDrops;                          //@synthesize caDrops=_caDrops - In the implementation block
@property (assign,nonatomic) BOOL hasAudioLost; 
@property (assign,nonatomic) unsigned audioLost;                        //@synthesize audioLost=_audioLost - In the implementation block
@property (assign,nonatomic) BOOL hasAudioUnrecovered; 
@property (assign,nonatomic) unsigned audioUnrecovered;                 //@synthesize audioUnrecovered=_audioUnrecovered - In the implementation block
@property (assign,nonatomic) BOOL hasAudioLate; 
@property (assign,nonatomic) unsigned audioLate;                        //@synthesize audioLate=_audioLate - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTT; 
@property (assign,nonatomic) unsigned avgRTT;                           //@synthesize avgRTT=_avgRTT - In the implementation block
@property (assign,nonatomic) BOOL hasAvgAhead; 
@property (assign,nonatomic) int avgAhead;                              //@synthesize avgAhead=_avgAhead - In the implementation block
@property (assign,nonatomic) BOOL hasAvgReceiveMs; 
@property (assign,nonatomic) int avgReceiveMs;                          //@synthesize avgReceiveMs=_avgReceiveMs - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasReason;
-(void)setAvgRTT:(unsigned)arg1 ;
-(unsigned)avgRTT;
-(void)setReason:(int)arg1 ;
-(BOOL)hasSessionUUID;
-(void)setFramesReceived:(unsigned)arg1 ;
-(void)setHasFramesReceived:(BOOL)arg1 ;
-(BOOL)hasFramesReceived;
-(void)setConfigChanges:(unsigned)arg1 ;
-(void)setHasConfigChanges:(BOOL)arg1 ;
-(BOOL)hasConfigChanges;
-(void)setClearScreens:(unsigned)arg1 ;
-(void)setHasClearScreens:(BOOL)arg1 ;
-(BOOL)hasClearScreens;
-(void)setUnclearScreens:(unsigned)arg1 ;
-(void)setHasUnclearScreens:(BOOL)arg1 ;
-(BOOL)hasUnclearScreens;
-(void)setSuspends:(unsigned)arg1 ;
-(void)setHasSuspends:(BOOL)arg1 ;
-(BOOL)hasSuspends;
-(void)setResumes:(unsigned)arg1 ;
-(void)setHasResumes:(BOOL)arg1 ;
-(BOOL)hasResumes;
-(void)setForcedRefreshes:(unsigned)arg1 ;
-(void)setHasForcedRefreshes:(BOOL)arg1 ;
-(BOOL)hasForcedRefreshes;
-(void)setNegativeAheadFrames:(unsigned)arg1 ;
-(void)setHasNegativeAheadFrames:(BOOL)arg1 ;
-(BOOL)hasNegativeAheadFrames;
-(void)setCaFrames:(unsigned)arg1 ;
-(void)setHasCaFrames:(BOOL)arg1 ;
-(BOOL)hasCaFrames;
-(void)setCaDrops:(unsigned)arg1 ;
-(void)setHasCaDrops:(BOOL)arg1 ;
-(BOOL)hasCaDrops;
-(void)setAudioLost:(unsigned)arg1 ;
-(void)setHasAudioLost:(BOOL)arg1 ;
-(BOOL)hasAudioLost;
-(void)setAudioUnrecovered:(unsigned)arg1 ;
-(void)setHasAudioUnrecovered:(BOOL)arg1 ;
-(BOOL)hasAudioUnrecovered;
-(void)setAudioLate:(unsigned)arg1 ;
-(void)setHasAudioLate:(BOOL)arg1 ;
-(BOOL)hasAudioLate;
-(void)setHasAvgRTT:(BOOL)arg1 ;
-(BOOL)hasAvgRTT;
-(void)setAvgAhead:(int)arg1 ;
-(void)setHasAvgAhead:(BOOL)arg1 ;
-(BOOL)hasAvgAhead;
-(void)setAvgReceiveMs:(int)arg1 ;
-(void)setHasAvgReceiveMs:(BOOL)arg1 ;
-(BOOL)hasAvgReceiveMs;
-(unsigned)framesReceived;
-(unsigned)configChanges;
-(unsigned)clearScreens;
-(unsigned)unclearScreens;
-(unsigned)suspends;
-(unsigned)resumes;
-(unsigned)forcedRefreshes;
-(unsigned)negativeAheadFrames;
-(unsigned)caFrames;
-(unsigned)caDrops;
-(unsigned)audioLost;
-(unsigned)audioUnrecovered;
-(unsigned)audioLate;
-(int)avgAhead;
-(int)avgReceiveMs;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

