/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, CKContainerID, CKServerChangeToken, NSData, NSString, NSDate, CKEncryptedDate;

@interface CKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	BOOL _needsZoneishPCSRolled;
	BOOL _zoneKeyRollAllowed;
	BOOL _serializeProtectionData;
	int _deviceCount;
	CKRecordZoneID* _zoneID;
	unsigned long long _capabilities;
	CKContainerID* _containerID;
	CKServerChangeToken* _currentServerChangeToken;
	NSData* _clientChangeToken;
	NSData* _protectionData;
	NSString* _protectionEtag;
	NSData* _zoneishProtectionData;
	NSDate* _zonePCSModificationDate;
	CKEncryptedDate* _encryptedLastZoneishPCSRollDate;
	NSString* _zonePCSLastModifierDevice;
	NSData* _pcsKeyID;
	NSData* _zoneishKeyID;
	NSString* _previousProtectionEtag;
	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;

}

@property (nonatomic,copy) CKContainerID * containerID;                                      //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                                        //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long capabilities;                                //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) int deviceCount;                                                //@synthesize deviceCount=_deviceCount - In the implementation block
@property (nonatomic,readonly) NSData * currentServerContinuationToken; 
@property (nonatomic,retain) CKServerChangeToken * currentServerChangeToken;                 //@synthesize currentServerChangeToken=_currentServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * clientChangeToken;                                     //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,retain) NSData * protectionData;                                        //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * protectionEtag;                                      //@synthesize protectionEtag=_protectionEtag - In the implementation block
@property (nonatomic,retain) NSData * zoneishProtectionData;                                 //@synthesize zoneishProtectionData=_zoneishProtectionData - In the implementation block
@property (assign,nonatomic) BOOL needsZoneishPCSRolled;                                     //@synthesize needsZoneishPCSRolled=_needsZoneishPCSRolled - In the implementation block
@property (assign,nonatomic) BOOL zoneKeyRollAllowed;                                        //@synthesize zoneKeyRollAllowed=_zoneKeyRollAllowed - In the implementation block
@property (nonatomic,retain) NSDate * zonePCSModificationDate;                               //@synthesize zonePCSModificationDate=_zonePCSModificationDate - In the implementation block
@property (nonatomic,retain) CKEncryptedDate * encryptedLastZoneishPCSRollDate;              //@synthesize encryptedLastZoneishPCSRollDate=_encryptedLastZoneishPCSRollDate - In the implementation block
@property (nonatomic,retain) NSString * zonePCSLastModifierDevice;                           //@synthesize zonePCSLastModifierDevice=_zonePCSLastModifierDevice - In the implementation block
@property (nonatomic,retain) NSData * pcsKeyID;                                              //@synthesize pcsKeyID=_pcsKeyID - In the implementation block
@property (nonatomic,retain) NSData * zoneishKeyID;                                          //@synthesize zoneishKeyID=_zoneishKeyID - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtag;                              //@synthesize previousProtectionEtag=_previousProtectionEtag - In the implementation block
@property (assign,nonatomic) long long assetQuotaUsage;                                      //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) long long metadataQuotaUsage;                                   //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
@property (assign,nonatomic) BOOL serializeProtectionData;                                   //@synthesize serializeProtectionData=_serializeProtectionData - In the implementation block
+(id)defaultRecordZone;
+(BOOL)supportsSecureCoding;
-(void)setDeviceCount:(int)arg1 ;
-(int)deviceCount;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(BOOL)needsZoneishPCSRolled;
-(NSDate *)zonePCSModificationDate;
-(NSString *)zonePCSLastModifierDevice;
-(CKServerChangeToken *)currentServerChangeToken;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(CKContainerID *)containerID;
-(void)setSerializeProtectionData:(BOOL)arg1 ;
-(BOOL)serializeProtectionData;
-(id)CKPropertiesDescription;
-(NSData *)pcsKeyID;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)protectionData;
-(NSData *)zoneishKeyID;
-(void)setProtectionData:(NSData *)arg1 ;
-(void)setProtectionEtag:(NSString *)arg1 ;
-(void)setZoneishProtectionData:(NSData *)arg1 ;
-(void)setPreviousProtectionEtag:(NSString *)arg1 ;
-(NSData *)zoneishProtectionData;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSString *)previousProtectionEtag;
-(void)setEncryptedLastZoneishPCSRollDate:(CKEncryptedDate *)arg1 ;
-(CKEncryptedDate *)encryptedLastZoneishPCSRollDate;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(void)setZoneKeyRollAllowed:(BOOL)arg1 ;
-(NSData *)currentServerContinuationToken;
-(NSData *)clientChangeToken;
-(long long)assetQuotaUsage;
-(long long)metadataQuotaUsage;
-(BOOL)zoneKeyRollAllowed;
-(void)setZoneishKeyID:(NSData *)arg1 ;
-(NSString *)protectionEtag;
-(void)setPcsKeyID:(NSData *)arg1 ;
-(void)setCurrentServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setNeedsZoneishPCSRolled:(BOOL)arg1 ;
-(void)setZonePCSModificationDate:(NSDate *)arg1 ;
-(void)setZonePCSLastModifierDevice:(NSString *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(unsigned long long)capabilities;
-(id)initWithZoneName:(id)arg1 ;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

