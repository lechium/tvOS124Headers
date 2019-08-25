/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageNicknamePublished : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _hasAvatar;
	int _linkQuality;
	unsigned _privateOperationalErrorCode;
	NSString* _privateOperationalErrorDomain;
	unsigned _privateSuccess;
	unsigned _publicOperationalErrorCode;
	NSString* _publicOperationalErrorDomain;
	unsigned _publicSuccess;
	unsigned _updated;
	SCD_Struct_AW12 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUpdated; 
@property (assign,nonatomic) unsigned updated;                                      //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) BOOL hasHasAvatar; 
@property (assign,nonatomic) unsigned hasAvatar;                                    //@synthesize hasAvatar=_hasAvatar - In the implementation block
@property (assign,nonatomic) BOOL hasPublicSuccess; 
@property (assign,nonatomic) unsigned publicSuccess;                                //@synthesize publicSuccess=_publicSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateSuccess; 
@property (assign,nonatomic) unsigned privateSuccess;                               //@synthesize privateSuccess=_privateSuccess - In the implementation block
@property (nonatomic,readonly) BOOL hasPublicOperationalErrorDomain; 
@property (nonatomic,retain) NSString * publicOperationalErrorDomain;               //@synthesize publicOperationalErrorDomain=_publicOperationalErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasPublicOperationalErrorCode; 
@property (assign,nonatomic) unsigned publicOperationalErrorCode;                   //@synthesize publicOperationalErrorCode=_publicOperationalErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateOperationalErrorDomain; 
@property (nonatomic,retain) NSString * privateOperationalErrorDomain;              //@synthesize privateOperationalErrorDomain=_privateOperationalErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasPrivateOperationalErrorCode; 
@property (assign,nonatomic) unsigned privateOperationalErrorCode;                  //@synthesize privateOperationalErrorCode=_privateOperationalErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                       //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                               //@synthesize connectionType=_connectionType - In the implementation block
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setPublicOperationalErrorDomain:(NSString *)arg1 ;
-(void)setPrivateOperationalErrorDomain:(NSString *)arg1 ;
-(void)setUpdated:(unsigned)arg1 ;
-(void)setHasUpdated:(BOOL)arg1 ;
-(BOOL)hasUpdated;
-(void)setHasAvatar:(unsigned)arg1 ;
-(void)setHasHasAvatar:(BOOL)arg1 ;
-(BOOL)hasHasAvatar;
-(void)setPublicSuccess:(unsigned)arg1 ;
-(void)setHasPublicSuccess:(BOOL)arg1 ;
-(BOOL)hasPublicSuccess;
-(void)setPrivateSuccess:(unsigned)arg1 ;
-(void)setHasPrivateSuccess:(BOOL)arg1 ;
-(BOOL)hasPrivateSuccess;
-(BOOL)hasPublicOperationalErrorDomain;
-(void)setPublicOperationalErrorCode:(unsigned)arg1 ;
-(void)setHasPublicOperationalErrorCode:(BOOL)arg1 ;
-(BOOL)hasPublicOperationalErrorCode;
-(BOOL)hasPrivateOperationalErrorDomain;
-(void)setPrivateOperationalErrorCode:(unsigned)arg1 ;
-(void)setHasPrivateOperationalErrorCode:(BOOL)arg1 ;
-(BOOL)hasPrivateOperationalErrorCode;
-(unsigned)updated;
-(unsigned)hasAvatar;
-(unsigned)publicSuccess;
-(unsigned)privateSuccess;
-(NSString *)publicOperationalErrorDomain;
-(unsigned)publicOperationalErrorCode;
-(NSString *)privateOperationalErrorDomain;
-(unsigned)privateOperationalErrorCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

