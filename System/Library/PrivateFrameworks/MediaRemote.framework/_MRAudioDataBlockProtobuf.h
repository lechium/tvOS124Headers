/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying> {

	double _gain;
	_MRAudioBufferProtobuf* _buffer;
	_MRAudioTimeProtobuf* _time;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasBuffer; 
@property (nonatomic,retain) _MRAudioBufferProtobuf * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) BOOL hasTime; 
@property (nonatomic,retain) _MRAudioTimeProtobuf * time;                  //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL hasGain; 
@property (assign,nonatomic) double gain;                                  //@synthesize gain=_gain - In the implementation block
-(_MRAudioBufferProtobuf *)buffer;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(_MRAudioTimeProtobuf *)time;
-(void)setTime:(_MRAudioTimeProtobuf *)arg1 ;
-(BOOL)hasTime;
-(void)setBuffer:(_MRAudioBufferProtobuf *)arg1 ;
-(BOOL)hasBuffer;
-(void)setHasGain:(BOOL)arg1 ;
-(BOOL)hasGain;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setGain:(double)arg1 ;
-(double)gain;
@end

