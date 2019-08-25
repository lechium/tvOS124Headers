/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying> {

	unsigned _connectionComplete;
	unsigned _connectionRequested;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasConnectionRequested; 
@property (assign,nonatomic) unsigned connectionRequested;              //@synthesize connectionRequested=_connectionRequested - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionComplete; 
@property (assign,nonatomic) unsigned connectionComplete;               //@synthesize connectionComplete=_connectionComplete - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setConnectionRequested:(unsigned)arg1 ;
-(void)setHasConnectionRequested:(BOOL)arg1 ;
-(BOOL)hasConnectionRequested;
-(void)setConnectionComplete:(unsigned)arg1 ;
-(void)setHasConnectionComplete:(BOOL)arg1 ;
-(BOOL)hasConnectionComplete;
-(unsigned)connectionRequested;
-(unsigned)connectionComplete;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

