/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterOperationDelegate.h>

@protocol OS_os_activity, OS_voucher, OS_dispatch_queue;
@class GEOTileRequestBalancer, NSMutableArray, NSObject, GEODataSession, GEOTileKeyMap, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate> {

	GEOTileRequestBalancer* _balancer;
	NSMutableArray* _running;
	NSMutableArray* _errors;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_voucher> _voucher;
	NSObject*<OS_dispatch_queue> _workQueue;
	GEODataSession* _dataSession;
	unsigned _qos;
	GEOOnce_s _didStart;
	GEOOnce_s _didCallDelegate;
	BOOL _cancelled;
	BOOL _subclassImplementsTileEdition;
	BOOL _hasRemainingTileKeys;
	GEOTileKeyMap* _signpostIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                  //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) GEOTileRequestBalancer * balancer;                   //@synthesize balancer=_balancer - In the implementation block
@property (nonatomic,retain) GEODataSession * dataSession;                          //@synthesize dataSession=_dataSession - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(void)_updateRunningCountAndCheckIfDone;
-(GEOTileRequestBalancer *)balancer;
-(void)_checkIfDone;
-(void)_notifyDelegateDone:(/*^block*/id)arg1 ;
-(void)createRequest:(id*)arg1 localizationRequest:(id*)arg2 forKey:(const GEOTileKey*)arg3 ;
-(id)editionHeader;
-(void)setDataSession:(GEODataSession *)arg1 ;
-(GEODataSession *)dataSession;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)newRequestWithType:(int)arg1 URL:(id)arg2 useProxyAuth:(BOOL)arg3 entityTag:(id)arg4 cachedData:(id)arg5 allowedRequestMode:(char)arg6 timeout:(double)arg7 requestCounterTicket:(id)arg8 ;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)allowsCookies;
-(void)_cancelAllRunningOperations;
-(void)_generateEndSignpostEventIfNecessary:(GEOTileKey)arg1 ;
-(void)_cancelKey:(GEOTileKey)arg1 ;
-(id)removeOperationsForKey:(const GEOTileKey*)arg1 ;
-(void)_reprioritizeKey:(GEOTileKey)arg1 newPriority:(unsigned)arg2 ;
-(id)operationsForKey:(const GEOTileKey*)arg1 ;
-(void)_didStartOperationsForAllTileKeys;
-(id)_createOperationsForTileKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 ;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)_addRunningOperation:(id)arg1 ;
-(BOOL)_removeRunningOperation:(id)arg1 ;
-(BOOL)_isRunningOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 ;
-(void)createAndStartOperationsForTileKeys:(id)arg1 ;
-(unsigned long long)estimatedNumberOfOperationsForTileKey:(GEOTileKey)arg1 ;
-(void)didStartOperationsForAllTileKeys;
-(BOOL)shouldParticipateInBalancerScheduling;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1 ;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1 ;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2 ;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
-(int)checksumMethodForIncomingTileDataWithKey:(GEOTileKey*)arg1 ;
-(void)_operationFinished:(id)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)operationFailed:(id)arg1 error:(id)arg2 ;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2 ;
-(void)dealloc;
-(BOOL)isRunning;
-(void)cancel;
-(void)start;
-(void)_cleanup;
-(void)_cancel;
-(NSObject*<OS_os_activity>)activity;
@end

