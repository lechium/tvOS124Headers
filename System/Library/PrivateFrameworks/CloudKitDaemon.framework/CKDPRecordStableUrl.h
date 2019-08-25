/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDPRecordStableUrl : PBCodable <NSCopying> {

	NSString* _displayedHostname;
	NSData* _encryptedPublicSharingKey;
	NSData* _protectedFullToken;
	NSString* _routingKey;
	NSData* _shortTokenHash;

}

@property (nonatomic,readonly) BOOL hasRoutingKey; 
@property (nonatomic,retain) NSString * routingKey;                            //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasShortTokenHash; 
@property (nonatomic,retain) NSData * shortTokenHash;                          //@synthesize shortTokenHash=_shortTokenHash - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedFullToken; 
@property (nonatomic,retain) NSData * protectedFullToken;                      //@synthesize protectedFullToken=_protectedFullToken - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedPublicSharingKey; 
@property (nonatomic,retain) NSData * encryptedPublicSharingKey;               //@synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayedHostname; 
@property (nonatomic,retain) NSString * displayedHostname;                     //@synthesize displayedHostname=_displayedHostname - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(NSData *)protectedFullToken;
-(NSString *)displayedHostname;
-(void)setShortTokenHash:(NSData *)arg1 ;
-(BOOL)hasRoutingKey;
-(BOOL)hasShortTokenHash;
-(NSData *)shortTokenHash;
-(void)setProtectedFullToken:(NSData *)arg1 ;
-(BOOL)hasProtectedFullToken;
-(NSData *)encryptedPublicSharingKey;
-(void)setEncryptedPublicSharingKey:(NSData *)arg1 ;
-(BOOL)hasDisplayedHostname;
-(BOOL)hasEncryptedPublicSharingKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

