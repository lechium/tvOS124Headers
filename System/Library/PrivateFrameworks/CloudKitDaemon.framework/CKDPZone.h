/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKDPProtectionInfo, CKDPRecordZoneIdentifier;

@interface CKDPZone : PBCodable <NSCopying> {

	NSData* _encryptedLastZoneishPCSRollDate;
	CKDPProtectionInfo* _protectionInfo;
	CKDPProtectionInfo* _recordProtectionInfo;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;                    //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * recordProtectionInfo;              //@synthesize recordProtectionInfo=_recordProtectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedLastZoneishPCSRollDate; 
@property (nonatomic,retain) NSData * encryptedLastZoneishPCSRollDate;               //@synthesize encryptedLastZoneishPCSRollDate=_encryptedLastZoneishPCSRollDate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasProtectionInfo;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(void)setRecordProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(void)setEncryptedLastZoneishPCSRollDate:(NSData *)arg1 ;
-(BOOL)hasRecordProtectionInfo;
-(BOOL)hasEncryptedLastZoneishPCSRollDate;
-(CKDPProtectionInfo *)recordProtectionInfo;
-(NSData *)encryptedLastZoneishPCSRollDate;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

