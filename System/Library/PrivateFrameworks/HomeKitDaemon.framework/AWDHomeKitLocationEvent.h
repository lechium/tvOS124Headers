/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitLocationEvent : PBCodable <NSCopying> {

	BOOL _notifyOnEntry;
	BOOL _notifyOnExit;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasNotifyOnEntry; 
@property (assign,nonatomic) BOOL notifyOnEntry;                 //@synthesize notifyOnEntry=_notifyOnEntry - In the implementation block
@property (assign,nonatomic) BOOL hasNotifyOnExit; 
@property (assign,nonatomic) BOOL notifyOnExit;                  //@synthesize notifyOnExit=_notifyOnExit - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)notifyOnEntry;
-(BOOL)notifyOnExit;
-(void)setNotifyOnExit:(BOOL)arg1 ;
-(void)setNotifyOnEntry:(BOOL)arg1 ;
-(void)setHasNotifyOnEntry:(BOOL)arg1 ;
-(BOOL)hasNotifyOnEntry;
-(void)setHasNotifyOnExit:(BOOL)arg1 ;
-(BOOL)hasNotifyOnExit;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

