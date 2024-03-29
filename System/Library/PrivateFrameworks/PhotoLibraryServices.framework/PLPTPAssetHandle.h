/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID;

@interface PLPTPAssetHandle : NSObject {

	BOOL _requiresConversion;
	long long _type;
	NSManagedObjectID* _assetID;
	NSManagedObjectID* _sidecarID;

}

@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * assetID;                //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSManagedObjectID * sidecarID;              //@synthesize sidecarID=_sidecarID - In the implementation block
@property (nonatomic,readonly) BOOL requiresConversion;                         //@synthesize requiresConversion=_requiresConversion - In the implementation block
-(NSManagedObjectID *)assetID;
-(NSManagedObjectID *)sidecarID;
-(BOOL)requiresConversion;
-(id)initWithType:(long long)arg1 assetID:(id)arg2 sidecarID:(id)arg3 requiresConversion:(BOOL)arg4 ;
-(id)assetHandleBySettingRequiresConversion;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)type;
@end

