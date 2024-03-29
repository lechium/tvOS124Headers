/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID, NSString, NSData, CKDZonePCSData, CKRecordZoneID, CKDSharePCSData, CKDChainPCSData, CKEncryptedData;

@interface CKDRecordPCSData : CKDPCSData {

	CKRecordID* _recordID;
	NSString* _recordType;
	CKRecordID* _parentID;
	CKDRecordPCSData* _parentPCSData;
	NSData* _chainParentPublicKeyID;
	CKDZonePCSData* _zonePCSData;
	CKRecordZoneID* _zoneID;
	NSData* _zoneishPublicKeyID;
	CKDSharePCSData* _sharePCSData;
	CKRecordID* _shareID;
	CKDChainPCSData* _chainPCSData;
	CKEncryptedData* _encryptedPublicSharingKey;

}

@property (nonatomic,retain) CKRecordID * recordID;                                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSString * recordType;                                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) CKRecordID * parentID;                                    //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) CKDRecordPCSData * parentPCSData;                         //@synthesize parentPCSData=_parentPCSData - In the implementation block
@property (nonatomic,retain) NSData * chainParentPublicKeyID;                          //@synthesize chainParentPublicKeyID=_chainParentPublicKeyID - In the implementation block
@property (nonatomic,retain) CKDZonePCSData * zonePCSData;                             //@synthesize zonePCSData=_zonePCSData - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                                  //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSData * zoneishPublicKeyID;                              //@synthesize zoneishPublicKeyID=_zoneishPublicKeyID - In the implementation block
@property (nonatomic,retain) CKDSharePCSData * sharePCSData;                           //@synthesize sharePCSData=_sharePCSData - In the implementation block
@property (nonatomic,retain) CKRecordID * shareID;                                     //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKDChainPCSData * chainPCSData;                           //@synthesize chainPCSData=_chainPCSData - In the implementation block
@property (nonatomic,retain) CKEncryptedData * encryptedPublicSharingKey;              //@synthesize encryptedPublicSharingKey=_encryptedPublicSharingKey - In the implementation block
+(id)dataWithRecord:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)itemID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(CKDChainPCSData *)chainPCSData;
-(CKDZonePCSData *)zonePCSData;
-(NSData *)zoneishPublicKeyID;
-(void)setZonePCSData:(CKDZonePCSData *)arg1 ;
-(CKEncryptedData *)encryptedPublicSharingKey;
-(CKDSharePCSData *)sharePCSData;
-(CKRecordID *)parentID;
-(NSData *)chainParentPublicKeyID;
-(void)setChainParentPublicKeyID:(NSData *)arg1 ;
-(void)setParentPCSData:(CKDRecordPCSData *)arg1 ;
-(void)setChainPCSData:(CKDChainPCSData *)arg1 ;
-(void)setEncryptedPublicSharingKey:(CKEncryptedData *)arg1 ;
-(CKDRecordPCSData *)parentPCSData;
-(void)setParentID:(CKRecordID *)arg1 ;
-(id)initWithPCSData:(id)arg1 recordID:(id)arg2 ;
-(BOOL)shouldEncodePCSData;
-(void)setZoneishPublicKeyID:(NSData *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(NSString *)recordType;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

