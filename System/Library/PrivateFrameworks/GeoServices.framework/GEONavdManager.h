/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEONavdServerProxy, NSMutableArray, NSLock;

@interface GEONavdManager : NSObject {

	GEONavdServerProxy* _proxy;
	NSMutableArray* _openers;
	NSLock* _openersLock;

}
+(id)navdManagerClientIdentifier:(id)arg1 ;
+(id)navdManager;
+(void)setProxyClass:(Class)arg1 ;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2 ;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 ;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
-(void)forceCacheRefresh;
-(id)init;
@end

