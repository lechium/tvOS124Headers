/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEventsTableBase.h>

@interface SSWatchMetricsEventTable : SSEventsTableBase
+(id)databasePath;
-(BOOL)_setupDatabase;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
-(BOOL)_migrateToVersion4;
-(BOOL)_migrateToVersion5;
-(BOOL)_migrateToVersion6;
-(BOOL)_migrateToVersion7;
@end

