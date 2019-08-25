/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@class NSUUID, NSString;

@interface HMDCloudZoneInformation : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol> {

	BOOL _fetchFailed;
	BOOL _firstFetch;
	BOOL _zoneCreated;
	BOOL _handlesCloudRecord;
	NSUUID* _uuid;
	NSString* _ownerName;
	long long _schemaVersion;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * ownerName;                                               //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,getter=didFetchFailed,nonatomic) BOOL fetchFailed;                             //@synthesize fetchFailed=_fetchFailed - In the implementation block
@property (assign,getter=isFirstFetch,nonatomic) BOOL firstFetch;                                //@synthesize firstFetch=_firstFetch - In the implementation block
@property (assign,getter=isZoneCreated,nonatomic) BOOL zoneCreated;                              //@synthesize zoneCreated=_zoneCreated - In the implementation block
@property (assign,nonatomic) long long schemaVersion;                                            //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (assign,getter=doesHandlesCloudRecord,nonatomic) BOOL handlesCloudRecord;              //@synthesize handlesCloudRecord=_handlesCloudRecord - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudZonesWithDictionary:(id)arg1 ;
+(id)cloudZoneInformationWithCloudZones:(id)arg1 ;
+(id)cloudZonesArrayWithCloudZones:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSString *)ownerName;
-(void)setOwnerName:(NSString *)arg1 ;
-(long long)schemaVersion;
-(void)setSchemaVersion:(long long)arg1 ;
-(id)initWithOwnerName:(id)arg1 uuid:(id)arg2 ;
-(void)setFetchFailed:(BOOL)arg1 ;
-(void)setHandlesCloudRecord:(BOOL)arg1 ;
-(BOOL)didFetchFailed;
-(BOOL)isZoneCreated;
-(void)setZoneCreated:(BOOL)arg1 ;
-(void)updateCloudZoneInformationWithModel:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 parent:(id)arg3 ;
-(id)emptyModelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2 ;
-(BOOL)isFirstFetch;
-(void)setFirstFetch:(BOOL)arg1 ;
-(BOOL)doesHandlesCloudRecord;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSUUID *)uuid;
-(id)shortDescription;
@end

