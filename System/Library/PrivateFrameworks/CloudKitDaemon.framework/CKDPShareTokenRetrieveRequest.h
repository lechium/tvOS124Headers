/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPShareIdentifier, NSData;

@interface CKDPShareTokenRetrieveRequest : PBRequest <NSCopying> {

	NSString* _routingKey;
	CKDPShareIdentifier* _shareId;
	NSData* _shortTokenHash;
	BOOL _forceFetch;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                      //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                    //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;              //@synthesize shareId=_shareId - In the implementation block
@property (assign,nonatomic) BOOL hasForceFetch; 
@property (assign,nonatomic) BOOL forceFetch;                            //@synthesize forceFetch=_forceFetch - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasRoutingKey;
-(BOOL)hasShortTokenHash;
-(void)setForceFetch:(BOOL)arg1 ;
-(void)setHasForceFetch:(BOOL)arg1 ;
-(BOOL)hasForceFetch;
-(NSData *)shortTokenHash;
-(BOOL)forceFetch;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

