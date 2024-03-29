/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying> {

	unsigned _receivedImage;
	unsigned _sentImage;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasSentImage; 
@property (assign,nonatomic) unsigned sentImage;                  //@synthesize sentImage=_sentImage - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedImage; 
@property (assign,nonatomic) unsigned receivedImage;              //@synthesize receivedImage=_receivedImage - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSentImage:(unsigned)arg1 ;
-(void)setHasSentImage:(BOOL)arg1 ;
-(BOOL)hasSentImage;
-(void)setReceivedImage:(unsigned)arg1 ;
-(void)setHasReceivedImage:(BOOL)arg1 ;
-(BOOL)hasReceivedImage;
-(unsigned)sentImage;
-(unsigned)receivedImage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

