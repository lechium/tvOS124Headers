/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSMutableDictionary, NSMutableSet, NSObject;

@interface CDMonitorManager : NSObject {

	NSArray* _monitorManagers;
	NSMutableDictionary* _monitors;
	NSMutableSet* _lazyMonitorNames;
	/*^block*/id _generalInstantHandler;
	/*^block*/id _generalHistoricalHandler;
	/*^block*/id _generalHistoricalDeletingHandler;
	/*^block*/id _generalShutdownHandler;
	NSMutableDictionary* _instantHandlerMap;
	NSMutableDictionary* _historicalHandlerMap;
	NSMutableSet* _shutdownHandlingMonitors;
	NSObject*<OS_dispatch_queue> _monitorWorkQueue;

}
+(id)monitorManagerForEventStreams:(id)arg1 ;
-(id)_createMonitorManagers;
-(void)setInstantHandler:(/*^block*/id)arg1 ;
-(void)setHistoricalHandler:(/*^block*/id)arg1 ;
-(void)setShutdownHandler:(/*^block*/id)arg1 ;
-(void)setHistoricalDeletingHandler:(/*^block*/id)arg1 ;
-(id)initWithEventStreams:(id)arg1 ;
-(void)_setInstantHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(void)_setHistoricalHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(id)_monitorForStreamName:(id)arg1 ;
-(void)_startMonitorForStreamName:(id)arg1 ;
-(id)_allStreamNames;
-(void)_stopMonitorForStreamName:(id)arg1 ;
-(id)_currentEventForStreamName:(id)arg1 ;
-(void)_updateForStreamName:(id)arg1 ;
-(id)_lastUpdateForStreamName:(id)arg1 ;
-(id)_allMonitors;
-(void)_addMonitor:(id)arg1 forStreamName:(id)arg2 ;
-(void)_removeMonitorForStreamName:(id)arg1 ;
-(BOOL)_hasMonitorForStreamName:(id)arg1 ;
-(void)setInstantHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)setHistoricalHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)startMonitorForStream:(id)arg1 ;
-(void)stopMonitorForStream:(id)arg1 ;
-(void)populateCurrentValueForStreamName:(id)arg1 ;
-(id)currentEventForStream:(id)arg1 ;
-(void)updateForStream:(id)arg1 ;
-(id)lastUpdateForStream:(id)arg1 ;
-(void)deliverNotificationEvent:(id)arg1 ;
-(void)handleShutdownNotification;
-(void)addMonitor:(id)arg1 ;
-(void)removeMonitor:(id)arg1 ;
-(BOOL)hasMonitor:(id)arg1 ;
-(id)init;
-(void)update;
-(void)stop;
-(void)start;
-(id)lastUpdate;
-(id)currentEvent;
@end

