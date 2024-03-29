/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTInvocationDispatcher, RTPlatform, NSArray, AWDServerConnection, RTManagedConfiguration, NSObject;

@interface RTMetricManager : NSObject {

	BOOL _ready;
	RTInvocationDispatcher* _dispatcher;
	RTPlatform* _platform;
	NSArray* _configuredMetricClasses;
	AWDServerConnection* _awdServerConnection;
	RTManagedConfiguration* _managedConfigurationManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                               //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                             //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                        //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) NSArray * configuredMetricClasses;                                 //@synthesize configuredMetricClasses=_configuredMetricClasses - In the implementation block
@property (nonatomic,retain) AWDServerConnection * awdServerConnection;                         //@synthesize awdServerConnection=_awdServerConnection - In the implementation block
@property (nonatomic,retain) RTManagedConfiguration * managedConfigurationManager;              //@synthesize managedConfigurationManager=_managedConfigurationManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
+(id)metricForType:(unsigned long long)arg1 ;
+(int)modelTypeFromSupportingEventClass:(Class)arg1 ;
+(id)addonMetricFromAddon:(id)arg1 ;
+(id)addonStringFromType:(int)arg1 ;
+(id)productionMetrics;
+(double)doubleWithSignificantDigits:(double)arg1 digits:(int)arg2 ;
+(int)roundTimeInterval:(double)arg1 byIntervalUnit:(unsigned long long)arg2 ;
+(int)doubleToInt:(double)arg1 shifts:(int)arg2 ;
+(int)intWithSignificantDigits:(int)arg1 digits:(int)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(RTInvocationDispatcher *)dispatcher;
-(void)shutdown;
-(BOOL)ready;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)submitMetric:(id)arg1 ;
-(void)fetchDiagnosticsEnabled:(/*^block*/id)arg1 ;
-(void)submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithPlatform:(id)arg1 ;
-(id)initWithAWDServerConnection:(id)arg1 configuredClasses:(id)arg2 managedConfigurationManager:(id)arg3 platform:(id)arg4 ;
-(NSArray *)configuredMetricClasses;
-(void)_setupWithConfiguredClasses:(id)arg1 ;
-(void)_fetchDiagnosticsEnabled:(/*^block*/id)arg1 ;
-(RTManagedConfiguration *)managedConfigurationManager;
-(AWDServerConnection *)awdServerConnection;
-(void)_registerQueriableMetric:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_releaseMetricPlaceholderForMetric:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_submitMetric:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)convertMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 ;
-(void)submitMetric:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_routineConfiguredForMetric:(id)arg1 ;
-(BOOL)_isDiagnosticsSubmissionAllowed;
-(void)registerQueriableMetric:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)createMetricForType:(unsigned long long)arg1 ;
-(void)setConfiguredMetricClasses:(NSArray *)arg1 ;
-(void)setAwdServerConnection:(AWDServerConnection *)arg1 ;
-(void)setManagedConfigurationManager:(RTManagedConfiguration *)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

