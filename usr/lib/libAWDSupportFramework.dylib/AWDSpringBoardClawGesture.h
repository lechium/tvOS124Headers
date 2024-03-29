/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSpringBoardClawGesture : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	BOOL _didPressLock;
	BOOL _didPressVolumeDown;
	BOOL _didPressVolumeUp;
	BOOL _didTriggerSOS;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDidPressLock; 
@property (assign,nonatomic) BOOL didPressLock;                         //@synthesize didPressLock=_didPressLock - In the implementation block
@property (assign,nonatomic) BOOL hasDidPressVolumeUp; 
@property (assign,nonatomic) BOOL didPressVolumeUp;                     //@synthesize didPressVolumeUp=_didPressVolumeUp - In the implementation block
@property (assign,nonatomic) BOOL hasDidPressVolumeDown; 
@property (assign,nonatomic) BOOL didPressVolumeDown;                   //@synthesize didPressVolumeDown=_didPressVolumeDown - In the implementation block
@property (assign,nonatomic) BOOL hasDidTriggerSOS; 
@property (assign,nonatomic) BOOL didTriggerSOS;                        //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
-(void)setDidPressLock:(BOOL)arg1 ;
-(void)setHasDidPressLock:(BOOL)arg1 ;
-(BOOL)hasDidPressLock;
-(void)setDidPressVolumeUp:(BOOL)arg1 ;
-(void)setHasDidPressVolumeUp:(BOOL)arg1 ;
-(BOOL)hasDidPressVolumeUp;
-(void)setDidPressVolumeDown:(BOOL)arg1 ;
-(void)setHasDidPressVolumeDown:(BOOL)arg1 ;
-(BOOL)hasDidPressVolumeDown;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(void)setHasDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)hasDidTriggerSOS;
-(BOOL)didPressLock;
-(BOOL)didPressVolumeUp;
-(BOOL)didPressVolumeDown;
-(BOOL)didTriggerSOS;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

