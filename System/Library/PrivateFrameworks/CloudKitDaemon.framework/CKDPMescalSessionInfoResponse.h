/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPMescalSessionInfoResponse : PBCodable <NSCopying> {

	NSData* _sessionInfo;
	int _status;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasSessionInfo; 
@property (nonatomic,retain) NSData * sessionInfo;               //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                         //@synthesize status=_status - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setSessionInfo:(NSData *)arg1 ;
-(BOOL)hasSessionInfo;
-(NSData *)sessionInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
@end

