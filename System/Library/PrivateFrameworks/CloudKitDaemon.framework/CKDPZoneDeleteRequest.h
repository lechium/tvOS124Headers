/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {

	CKDPDate* _lastMissingManateeIdentityErrorDate;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _userPurge;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                   //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasUserPurge; 
@property (assign,nonatomic) BOOL userPurge;                                              //@synthesize userPurge=_userPurge - In the implementation block
@property (nonatomic,readonly) BOOL hasLastMissingManateeIdentityErrorDate; 
@property (nonatomic,retain) CKDPDate * lastMissingManateeIdentityErrorDate;              //@synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate - In the implementation block
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(void)setLastMissingManateeIdentityErrorDate:(CKDPDate *)arg1 ;
-(void)setUserPurge:(BOOL)arg1 ;
-(void)setHasUserPurge:(BOOL)arg1 ;
-(BOOL)hasUserPurge;
-(BOOL)hasLastMissingManateeIdentityErrorDate;
-(BOOL)userPurge;
-(CKDPDate *)lastMissingManateeIdentityErrorDate;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

