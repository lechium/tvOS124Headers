/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {

	NSString* _password;
	int _securityType;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasPassword; 
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) int securityType;                  //@synthesize securityType=_securityType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSecurityType:(int)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(int)securityType;
-(BOOL)hasPassword;
-(id)securityTypeAsString:(int)arg1 ;
-(int)StringAsSecurityType:(id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)password;
@end

