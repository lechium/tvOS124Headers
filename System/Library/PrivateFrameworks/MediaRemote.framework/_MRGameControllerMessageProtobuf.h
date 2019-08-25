/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerButtonsProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {

	unsigned long long _controllerID;
	_MRGameControllerButtonsProtobuf* _buttons;
	_MRGameControllerDigitizerProtobuf* _digitizer;
	_MRGameControllerMotionProtobuf* _motion;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasControllerID; 
@property (assign,nonatomic) unsigned long long controllerID;                             //@synthesize controllerID=_controllerID - In the implementation block
@property (nonatomic,readonly) BOOL hasMotion; 
@property (nonatomic,retain) _MRGameControllerMotionProtobuf * motion;                    //@synthesize motion=_motion - In the implementation block
@property (nonatomic,readonly) BOOL hasButtons; 
@property (nonatomic,retain) _MRGameControllerButtonsProtobuf * buttons;                  //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,readonly) BOOL hasDigitizer; 
@property (nonatomic,retain) _MRGameControllerDigitizerProtobuf * digitizer;              //@synthesize digitizer=_digitizer - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(_MRGameControllerButtonsProtobuf *)buttons;
-(void)setButtons:(_MRGameControllerButtonsProtobuf *)arg1 ;
-(void)setControllerID:(unsigned long long)arg1 ;
-(void)setHasControllerID:(BOOL)arg1 ;
-(BOOL)hasControllerID;
-(unsigned long long)controllerID;
-(BOOL)hasButtons;
-(BOOL)hasMotion;
-(void)setMotion:(_MRGameControllerMotionProtobuf *)arg1 ;
-(void)setDigitizer:(_MRGameControllerDigitizerProtobuf *)arg1 ;
-(BOOL)hasDigitizer;
-(_MRGameControllerDigitizerProtobuf *)digitizer;
-(_MRGameControllerMotionProtobuf *)motion;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

