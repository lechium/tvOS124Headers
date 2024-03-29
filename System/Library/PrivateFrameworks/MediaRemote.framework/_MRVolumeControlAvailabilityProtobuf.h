/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {

	int _volumeCapabilities;
	BOOL _volumeControlAvailable;
	SCD_Struct_MR2 _has;

}

@property (assign,nonatomic) BOOL hasVolumeControlAvailable; 
@property (assign,nonatomic) BOOL volumeControlAvailable;                 //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasVolumeCapabilities; 
@property (assign,nonatomic) int volumeCapabilities;                      //@synthesize volumeCapabilities=_volumeCapabilities - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setVolumeCapabilities:(int)arg1 ;
-(BOOL)hasVolumeCapabilities;
-(BOOL)hasVolumeControlAvailable;
-(void)setHasVolumeControlAvailable:(BOOL)arg1 ;
-(void)setHasVolumeCapabilities:(BOOL)arg1 ;
-(int)volumeCapabilities;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)volumeControlAvailable;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

