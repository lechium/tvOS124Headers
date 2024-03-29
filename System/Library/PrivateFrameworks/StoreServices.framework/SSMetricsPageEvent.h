/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * pageHistoryDescription; 
@property (assign,getter=isCachedResponse,nonatomic) BOOL cachedResponse; 
@property (nonatomic,retain) NSString * clientCorrelationKey; 
@property (assign,nonatomic) double connectionEndTime; 
@property (assign,nonatomic) BOOL connectionReused; 
@property (assign,nonatomic) double connectionStartTime; 
@property (assign,nonatomic) unsigned long long connectionStartNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStartNStatTXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatTXBytes; 
@property (assign,nonatomic) double domainLookupEndTime; 
@property (assign,nonatomic) double domainLookupStartTime; 
@property (assign,nonatomic) double fetchStartTime; 
@property (nonatomic,retain) NSString * navigationType; 
@property (assign,nonatomic) double pageRenderTime; 
@property (assign,nonatomic) unsigned long long redirectCount; 
@property (assign,nonatomic) double redirectEndTime; 
@property (assign,nonatomic) double redirectStartTime; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
@property (assign,nonatomic) double requestEndTime; 
@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * searchTerm; 
@property (assign,nonatomic) double secureConnectionStartTime; 
@property (nonatomic,retain) NSString * serverApplicationInstance; 
@property (nonatomic,retain) NSString * serverTiming; 
@property (assign,getter=isUbered,nonatomic) BOOL ubered; 
@property (assign,setter=setXPSessionDuration:,nonatomic) double xpSessionDuration; 
@property (assign,setter=setXPSamplingForced:,nonatomic) BOOL xpSamplingForced; 
@property (assign,setter=setXPSamplingPercentageUsers:,nonatomic) double xpSamplingPercentageUsers; 
@property (assign,setter=setXPSamplingPercentageCachedResponses:,nonatomic) double xpSamplingPercentageCachedResponses; 
-(void)setConnectionReused:(BOOL)arg1 ;
-(BOOL)connectionReused;
-(unsigned long long)redirectCount;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
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
-(void)setXPSamplingForced:(BOOL)arg1 ;
-(double)xpSessionDuration;
-(void)setXPSessionDuration:(double)arg1 ;
-(double)xpSamplingPercentageUsers;
-(void)setXPSamplingPercentageUsers:(double)arg1 ;
-(double)xpSamplingPercentageCachedResponses;
-(void)setXPSamplingPercentageCachedResponses:(double)arg1 ;
-(void)setServerApplicationInstance:(NSString *)arg1 ;
-(void)setServerTiming:(NSString *)arg1 ;
-(BOOL)isCachedResponse;
-(void)setPageHistoryDescription:(NSString *)arg1 ;
-(NSString *)serverApplicationInstance;
-(BOOL)isUbered;
-(NSString *)pageHistoryDescription;
-(double)pageRenderTime;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(double)requestEndTime;
-(NSString *)serverTiming;
-(void)setNavigationType:(NSString *)arg1 ;
-(void)setPageHistoryDescriptionWithIdentifiers:(id)arg1 ;
-(void)setPageRenderTime:(double)arg1 ;
-(void)setRequestEndTime:(double)arg1 ;
-(void)setUbered:(BOOL)arg1 ;
-(NSString *)navigationType;
-(id)init;
-(id)description;
@end

