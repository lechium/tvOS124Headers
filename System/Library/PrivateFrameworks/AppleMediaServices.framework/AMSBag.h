/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSMetricsBagContract.h>
#import <libobjc.A.dylib/AMSMescalBagContract.h>
#import <libobjc.A.dylib/AMSBagProtocol.h>

@protocol AMSBagDataSourceProtocol;
@class NSString, AMSBagValue, NSDate;

@interface AMSBag : NSObject <AMSMetricsBagContract, AMSMescalBagContract, AMSBagProtocol> {

	id<AMSBagDataSourceProtocol> _dataSource;

}

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
@property (nonatomic,readonly) AMSBagValue * mescalCertificateURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSetupURL; 
@property (nonatomic,readonly) AMSBagValue * mescalPrimingURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSignedActions; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapRequests; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapResponses; 
@property (nonatomic,retain) id<AMSBagDataSourceProtocol> dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
+(id)vui_defaultBag;
+(void)vui_registerAdditionalBagKey:(id)arg1 withValueType:(unsigned long long)arg2 ;
+(id)metricsAMSBagWithProfileName:(id)arg1 profileVersion:(id)arg2 ;
+(id)defaultBag;
+(id)wlk_defaultBag;
+(void)registerAdditionalBagKey:(id)arg1 withValueType:(unsigned long long)arg2 ;
+(id)bagCache;
+(id)bagCacheAccessQueue;
+(void)_resetBagCache;
+(id)bagForProfile:(id)arg1 profileVersion:(id)arg2 ;
-(AMSBagValue *)mescalSignedActions;
-(AMSBagValue *)mescalCertificateURL;
-(AMSBagValue *)mescalSetupURL;
-(AMSBagValue *)mescalPrimingURL;
-(AMSBagValue *)metricsDictionary;
-(AMSBagValue *)trustedDomains;
-(AMSBagValue *)mescalSignSapRequests;
-(AMSBagValue *)mescalSignSapResponses;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profileVersion;
-(id)initWithDataSource:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(BOOL)isExpired;
-(id)arrayForKey:(id)arg1 ;
-(NSString *)profile;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLoaded;
-(NSString *)description;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
@end
