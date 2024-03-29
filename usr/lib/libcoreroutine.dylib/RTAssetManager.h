/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class NSDate, RTInvocationDispatcher, RTDefaultsManager, RTMetricManager, RTXPCActivityManager, ASAssetQuery;

@interface RTAssetManager : RTService {

	BOOL _ready;
	NSDate* _dateOfLastUpdateAttempt;
	NSDate* _dateOfLastSuccessfulUpdate;
	RTInvocationDispatcher* _dispatcher;
	RTDefaultsManager* _defaultsManager;
	RTMetricManager* _metricManager;
	RTXPCActivityManager* _xpcActivityManager;
	ASAssetQuery* _assetQuery;

}

@property (nonatomic,retain) NSDate * dateOfLastUpdateAttempt;                       //@synthesize dateOfLastUpdateAttempt=_dateOfLastUpdateAttempt - In the implementation block
@property (nonatomic,retain) NSDate * dateOfLastSuccessfulUpdate;                    //@synthesize dateOfLastSuccessfulUpdate=_dateOfLastSuccessfulUpdate - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                    //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                        //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;              //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (assign,nonatomic) BOOL ready;                                             //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) ASAssetQuery * assetQuery;                              //@synthesize assetQuery=_assetQuery - In the implementation block
-(void)_setup;
-(void)setReady:(BOOL)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)shutdown;
-(BOOL)ready;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(id)initWithDefaultsManager:(id)arg1 metricManager:(id)arg2 xpcActivityManager:(id)arg3 ;
-(RTDefaultsManager *)defaultsManager;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setDateOfLastUpdateAttempt:(NSDate *)arg1 ;
-(void)setDateOfLastSuccessfulUpdate:(NSDate *)arg1 ;
-(void)_finalizeAssetUpdateOperationWithError:(id)arg1 ;
-(void)performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_registerForMetricSubmission;
-(void)_submitAssertVersionMetric;
-(void)_invalidateAssetQuery;
-(ASAssetQuery *)assetQuery;
-(void)setAssetQuery:(ASAssetQuery *)arg1 ;
-(void)_performUpdateOfAssetsWithTypeAssetType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSDate *)dateOfLastUpdateAttempt;
-(NSDate *)dateOfLastSuccessfulUpdate;
-(void)_downloadAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_installAsset:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)forceUpdateAssetMetadata;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(void)_submitAssertVersionMetricWithHandler:(/*^block*/id)arg1 ;
-(id)init;
@end

