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

@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {

	BOOL _hiliteMode;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasHiliteMode; 
@property (assign,nonatomic) BOOL hiliteMode;                 //@synthesize hiliteMode=_hiliteMode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHiliteMode:(BOOL)arg1 ;
-(BOOL)hiliteMode;
-(void)setHasHiliteMode:(BOOL)arg1 ;
-(BOOL)hasHiliteMode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

