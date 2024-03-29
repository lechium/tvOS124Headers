/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPShareTokenSaveResponse : PBCodable <NSCopying> {

	NSString* _routingKey;
	NSString* _shareEtag;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;              //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasShareEtag; 
@property (nonatomic,retain) NSString * shareEtag;               //@synthesize shareEtag=_shareEtag - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setShareEtag:(NSString *)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(BOOL)hasRoutingKey;
-(BOOL)hasShareEtag;
-(NSString *)shareEtag;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

