/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmarksXPCConnection;

@interface WebBookmarksSettingsGateway : NSObject {

	WebBookmarksXPCConnection* _connection;

}
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOriginsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deleteSafariWebsiteDataRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getSafariDataUsageByteCountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearAllSafariHistoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)scheduleBookmarksDatabaseMaintenance;
-(void)scheduleBookmarksDatabaseMigrationTask;
-(void)scheduleHSTSSuperCookieCleanup;
-(void)schedulePasswordIconsCleanup;
-(id)init;
@end
