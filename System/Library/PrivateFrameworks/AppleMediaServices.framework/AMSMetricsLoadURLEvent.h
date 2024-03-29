/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSString, NSArray;

@interface AMSMetricsLoadURLEvent : AMSMetricsEvent

@property (nonatomic,retain) NSString * appleTimingApp; 
@property (assign,nonatomic) BOOL apsRelayAttempted; 
@property (assign,nonatomic) BOOL apsRelayDidFallback; 
@property (assign,nonatomic) BOOL apsRelaySucceeded; 
@property (nonatomic,retain) NSString * clientCorrelationKey; 
@property (nonatomic,retain) NSString * clientError; 
@property (assign,nonatomic) double connectionEndTime; 
@property (nonatomic,retain) NSString * connectionInterface; 
@property (assign,nonatomic) BOOL connectionReused; 
@property (assign,nonatomic) unsigned long long connectionStartNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStartNStatTXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatTXBytes; 
@property (assign,nonatomic) double connectionStartTime; 
@property (nonatomic,retain) NSString * connectionType; 
@property (assign,nonatomic) double domainLookupEndTime; 
@property (assign,nonatomic) double domainLookupStartTime; 
@property (nonatomic,retain) NSString * DNSServers; 
@property (nonatomic,retain) NSString * edgeNodeCacheStatus; 
@property (nonatomic,retain) NSString * environmentDataCenter; 
@property (assign,nonatomic) double fetchStartTime; 
@property (assign,nonatomic) BOOL cachedResponse; 
@property (nonatomic,retain) NSArray * networkQualityReports; 
@property (nonatomic,retain) NSString * originalApp; 
@property (nonatomic,retain) NSString * radioType; 
@property (nonatomic,retain) NSString * radioTechnology; 
@property (assign,nonatomic) unsigned long long redirectCount; 
@property (assign,nonatomic) double redirectEndTime; 
@property (assign,nonatomic) double redirectStartTime; 
@property (assign,nonatomic) unsigned long long requestMessageSize; 
@property (assign,nonatomic) double requestStartTime; 
@property (nonatomic,retain) NSString * requestURL; 
@property (nonatomic,retain) NSString * resolvedIPAddress; 
@property (nonatomic,retain) NSString * responseDate; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) unsigned long long responseMessageSize; 
@property (assign,nonatomic) double responseStartTime; 
@property (assign,nonatomic) double secureConnectionStartTime; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,retain) NSString * TIDState; 
@property (assign,nonatomic) BOOL TFOEnabled; 
@property (assign,nonatomic) BOOL TLSSessionTickets; 
@property (nonatomic,retain) NSString * wt; 
@property (assign,nonatomic) double xpSessionDuration; 
@property (assign,nonatomic) BOOL xpSamplingForced; 
@property (assign,nonatomic) double xpSamplingPercentageUsers; 
@property (assign,nonatomic) double xpSamplingPercentageCachedResponses; 
@property (nonatomic,retain) NSString * xxdc; 
+(double)_randomDouble;
+(id)_DNSServerIPAddresses;
+(id)_fetchNetworkQualityReports;
+(id)_resolvedIPAddressFromTask:(id)arg1 ;
+(double)_timingDataMetricToServerTimeInterval:(id)arg1 ;
+(BOOL)shouldCollectMetricsForContext:(id)arg1 ;
+(id)_metricsDictionaryFromConfig:(id)arg1 ;
-(void)setConnectionReused:(BOOL)arg1 ;
-(BOOL)connectionReused;
-(unsigned long long)redirectCount;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(NSString *)connectionType;
-(void)setConnectionType:(NSString *)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(void)setRadioType:(NSString *)arg1 ;
-(NSString *)radioType;
-(void)setResponseEndTime:(double)arg1 ;
-(BOOL)cachedResponse;
-(void)setCachedResponse:(BOOL)arg1 ;
-(NSString *)clientCorrelationKey;
-(void)setClientCorrelationKey:(NSString *)arg1 ;
-(double)connectionEndTime;
-(void)setConnectionEndTime:(double)arg1 ;
-(double)connectionStartTime;
-(void)setConnectionStartTime:(double)arg1 ;
-(unsigned long long)connectionStartNStatRXBytes;
-(void)setConnectionStartNStatRXBytes:(unsigned long long)arg1 ;
-(unsigned long long)connectionStartNStatTXBytes;
-(void)setConnectionStartNStatTXBytes:(unsigned long long)arg1 ;
-(unsigned long long)connectionStopNStatRXBytes;
-(void)setConnectionStopNStatRXBytes:(unsigned long long)arg1 ;
-(unsigned long long)connectionStopNStatTXBytes;
-(void)setConnectionStopNStatTXBytes:(unsigned long long)arg1 ;
-(double)domainLookupEndTime;
-(void)setDomainLookupEndTime:(double)arg1 ;
-(double)domainLookupStartTime;
-(void)setDomainLookupStartTime:(double)arg1 ;
-(double)fetchStartTime;
-(void)setFetchStartTime:(double)arg1 ;
-(double)redirectEndTime;
-(void)setRedirectEndTime:(double)arg1 ;
-(double)redirectStartTime;
-(void)setRedirectStartTime:(double)arg1 ;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(double)responseEndTime;
-(double)responseStartTime;
-(void)setResponseStartTime:(double)arg1 ;
-(double)secureConnectionStartTime;
-(void)setSecureConnectionStartTime:(double)arg1 ;
-(BOOL)xpSamplingForced;
-(double)xpSessionDuration;
-(double)xpSamplingPercentageUsers;
-(double)xpSamplingPercentageCachedResponses;
-(void)setXpSessionDuration:(double)arg1 ;
-(void)setXpSamplingPercentageCachedResponses:(double)arg1 ;
-(void)setXpSamplingPercentageUsers:(double)arg1 ;
-(void)setXpSamplingForced:(BOOL)arg1 ;
-(NSString *)appleTimingApp;
-(BOOL)apsRelayAttempted;
-(BOOL)apsRelayDidFallback;
-(BOOL)apsRelaySucceeded;
-(NSString *)DNSServers;
-(NSString *)resolvedIPAddress;
-(NSString *)TIDState;
-(NSString *)responseDate;
-(unsigned long long)requestMessageSize;
-(unsigned long long)responseMessageSize;
-(NSString *)connectionInterface;
-(NSString *)edgeNodeCacheStatus;
-(NSArray *)networkQualityReports;
-(NSString *)originalApp;
-(BOOL)TLSSessionTickets;
-(void)setAppleTimingApp:(NSString *)arg1 ;
-(void)setApsRelayAttempted:(BOOL)arg1 ;
-(void)setApsRelayDidFallback:(BOOL)arg1 ;
-(void)setApsRelaySucceeded:(BOOL)arg1 ;
-(void)setConnectionInterface:(NSString *)arg1 ;
-(void)setDNSServers:(NSString *)arg1 ;
-(void)setEdgeNodeCacheStatus:(NSString *)arg1 ;
-(void)setNetworkQualityReports:(NSArray *)arg1 ;
-(void)setOriginalApp:(NSString *)arg1 ;
-(void)setRequestMessageSize:(unsigned long long)arg1 ;
-(void)setResolvedIPAddress:(NSString *)arg1 ;
-(void)setResponseDate:(NSString *)arg1 ;
-(void)setResponseMessageSize:(unsigned long long)arg1 ;
-(void)setTIDState:(NSString *)arg1 ;
-(void)setTLSSessionTickets:(BOOL)arg1 ;
-(NSString *)clientError;
-(void)setClientError:(NSString *)arg1 ;
-(NSString *)requestURL;
-(void)setRequestURL:(NSString *)arg1 ;
-(NSString *)radioTechnology;
-(void)setRadioTechnology:(NSString *)arg1 ;
-(void)_prepareEventWithContext:(id)arg1 ;
-(void)setEnvironmentDataCenter:(NSString *)arg1 ;
-(void)setTFOEnabled:(BOOL)arg1 ;
-(void)setWt:(NSString *)arg1 ;
-(void)setXxdc:(NSString *)arg1 ;
-(NSString *)environmentDataCenter;
-(BOOL)TFOEnabled;
-(NSString *)wt;
-(NSString *)xxdc;
-(id)initWithContext:(id)arg1 ;
-(long long)statusCode;
@end

