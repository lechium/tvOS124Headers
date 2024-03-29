/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>
#import <libobjc.A.dylib/AMSMetricsBagContract.h>
#import <libobjc.A.dylib/MTEventRecorderDelegate.h>

@class AMSBagValue, NSString, NSDictionary, MTPromise, AMSBag;

@interface MTEventRecorderAMSMetricsDelegate : MTObject <AMSMetricsBagContract, MTEventRecorderDelegate> {

	BOOL _monitorsLifecycleEvents;
	NSString* _containerId;
	NSDictionary* _lastMetricsDictionary;
	MTPromise* _metricsPromise;
	AMSBag* _amsBag;

}

@property (nonatomic,retain) NSString * containerId;                                   //@synthesize containerId=_containerId - In the implementation block
@property (nonatomic,retain) NSDictionary * lastMetricsDictionary;                     //@synthesize lastMetricsDictionary=_lastMetricsDictionary - In the implementation block
@property (nonatomic,retain) MTPromise * metricsPromise;                               //@synthesize metricsPromise=_metricsPromise - In the implementation block
@property (nonatomic,retain) AMSBag * amsBag;                                          //@synthesize amsBag=_amsBag - In the implementation block
@property (assign,nonatomic) BOOL monitorsLifecycleEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * apsEnabledPatterns; 
@property (nonatomic,readonly) AMSBagValue * apsSamplingPercent; 
@property (nonatomic,readonly) AMSBagValue * apsAllowedProductTypes; 
@property (nonatomic,readonly) AMSBagValue * guidRegexes; 
@property (nonatomic,readonly) AMSBagValue * guidSchemes; 
@property (nonatomic,readonly) id<AMSMescalBagContract> mescalContract; 
@property (nonatomic,readonly) AMSBagValue * storefrontSuffix; 
@property (nonatomic,readonly) AMSBagValue * TLSSamplingPercentage; 
@property (nonatomic,readonly) AMSBagValue * TLSSamplingSessionDuration; 
@property (nonatomic,readonly) AMSBagValue * TFOSamplingPercentage; 
@property (nonatomic,readonly) AMSBagValue * TFOSamplingSessionDuration; 
@property (nonatomic,readonly) AMSBagValue * trustedDomains; 
@property (nonatomic,readonly) id<AMSMetricsBagContract> metricsContract; 
@property (nonatomic,readonly) AMSBagValue * metricsURL; 
@property (nonatomic,readonly) AMSBagValue * metricsDictionary; 
@property (nonatomic,readonly) AMSBagValue * metricsUrl; 
+(id)bundleIdentifier;
-(AMSBagValue *)metricsDictionary;
-(id<AMSMescalBagContract>)mescalContract;
-(AMSBagValue *)trustedDomains;
-(NSString *)containerId;
-(void)setLastMetricsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)lastMetricsDictionary;
-(BOOL)monitorsLifecycleEvents;
-(id)initWithContainerId:(id)arg1 ;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(void)setContainerId:(NSString *)arg1 ;
-(id)initWithContainerId:(id)arg1 amsBag:(id)arg2 ;
-(id)sendMethod;
-(void)setAmsBag:(AMSBag *)arg1 ;
-(MTPromise *)metricsPromise;
-(void)setMetricsPromise:(MTPromise *)arg1 ;
-(id)prepareMetrics;
-(id)flushBackgroundMetricsIfNeeded;
-(AMSBag *)amsBag;
-(BOOL)shouldFlushBackgroundMetrics;
-(id)recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3 ;
-(id)flushUnreportedEvents;
@end

