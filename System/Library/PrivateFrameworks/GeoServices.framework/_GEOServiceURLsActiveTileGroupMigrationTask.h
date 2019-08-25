/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOActiveTileGroupMigrationTask.h>

@protocol NSObject;
@class GEOServiceURLsActiveTileGroupMigrator, GEOResourceManifestConfiguration, GEOTileGroup, GEOResources, GEOActiveTileGroup, GEODataSetDescription, GEOReportedProgress, NSString, NSProgress;

@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {

	GEOServiceURLsActiveTileGroupMigrator* _migrator;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	GEOTileGroup* _newTileGroup;
	GEOResources* _resourceManifest;
	GEOActiveTileGroup* _oldTileGroup;
	GEODataSetDescription* _dataSetDescription;
	GEOReportedProgress* _progress;
	id<NSObject> _transaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(void)populateTileGroup:(id)arg1 ;
-(void)removeOldData:(id)arg1 ;
-(long long)estimatedWeight;
-(id<NSObject>)transaction;
-(void)setTransaction:(id<NSObject>)arg1 ;
-(id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6 ;
-(id)init;
-(void)cancel;
-(NSProgress *)progress;
@end
