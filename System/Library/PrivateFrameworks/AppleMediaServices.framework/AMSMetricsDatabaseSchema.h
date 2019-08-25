/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AMSMetricsDatabaseSchema : NSObject
+(void)migrateVersion0to1WithMigration:(id)arg1 ;
+(void)migrateVersion1to2WithMigration:(id)arg1 ;
+(id)_containerURLForContainerId:(id)arg1 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg1 ;
+(id)databasePathForContainerId:(id)arg1 ;
+(BOOL)removeDatabaseForContainerId:(id)arg1 ;
@end

