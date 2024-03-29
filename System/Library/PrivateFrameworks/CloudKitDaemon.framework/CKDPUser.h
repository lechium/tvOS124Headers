/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPUserAlias, NSString, CKDPIdentifier, CKDPProtectionInfo;

@interface CKDPUser : PBCodable <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _firstName;
	CKDPIdentifier* _identifier;
	NSString* _lastName;
	CKDPProtectionInfo* _protectionInfo;
	BOOL _isInNetwork;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                            //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                             //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                              //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIsInNetwork; 
@property (assign,nonatomic) BOOL isInNetwork;                                 //@synthesize isInNetwork=_isInNetwork - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(CKDPUserAlias *)alias;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasProtectionInfo;
-(CKDPProtectionInfo *)protectionInfo;
-(BOOL)hasAlias;
-(BOOL)hasFirstName;
-(BOOL)hasLastName;
-(BOOL)isInNetwork;
-(void)setIsInNetwork:(BOOL)arg1 ;
-(void)setHasIsInNetwork:(BOOL)arg1 ;
-(BOOL)hasIsInNetwork;
-(CKDPIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

