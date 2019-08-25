/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {

	unsigned _reconfigurationTimestamp;
	int _resolution;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasReconfigurationTimestamp; 
@property (assign,nonatomic) unsigned reconfigurationTimestamp;              //@synthesize reconfigurationTimestamp=_reconfigurationTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResolution; 
@property (assign,nonatomic) int resolution;                                 //@synthesize resolution=_resolution - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resolution;
-(void)setResolution:(int)arg1 ;
-(void)setHasResolution:(BOOL)arg1 ;
-(BOOL)hasResolution;
-(id)resolutionAsString:(int)arg1 ;
-(int)StringAsResolution:(id)arg1 ;
-(void)setReconfigurationTimestamp:(unsigned)arg1 ;
-(void)setHasReconfigurationTimestamp:(BOOL)arg1 ;
-(BOOL)hasReconfigurationTimestamp;
-(unsigned)reconfigurationTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

