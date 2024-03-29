/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSString, RMDevice, RMUser, RMUsageSettings, RMManagementSettings;

@interface RMUserDevicePairRecord : RMUniquedManagedObject

@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,copy) NSString * altURI; 
@property (nonatomic,retain) RMDevice * sourceDevice; 
@property (nonatomic,retain) RMUser * sourceUser; 
@property (nonatomic,retain) RMUsageSettings * usageSettings; 
@property (nonatomic,retain) RMManagementSettings * managementSettings; 
+(id)fetchRequestMatchingUserDevicePairsForLocalUserAndDeviceFromOrganizationWithIdentifier:(id)arg1 ;
+(id)fetchRequestForUserDevicePairRecordsFromOrganizationWithIdentifier:(id)arg1 ;
+(id)fetchRequestForUserDevicePairRecordsWithURI:(id)arg1 ;
+(id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 userDSID:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)setUri:(NSString *)arg1 ;
-(id)computeUniqueIdentifier;
@end

