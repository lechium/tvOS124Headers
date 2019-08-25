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

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR27* _deviceIDs;
	unsigned _errorCode;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) unsigned long long deviceIDsCount; 
@property (nonatomic,readonly) unsigned* deviceIDs; 
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                               //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(void)addDeviceIDs:(unsigned)arg1 ;
-(unsigned long long)deviceIDsCount;
-(unsigned)deviceIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearDeviceIDs;
-(void)setDeviceIDs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)deviceIDs;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
