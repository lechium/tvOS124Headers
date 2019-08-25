/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSSummaryClustering : NSObject {

	BOOL _enableConcurrency;
	double _optimalDayDistributionThreshold;
	unsigned long long _timeSpanDensityAverageNumberOfObjects;
	BOOL _enableDensityClusteringLocationsDistance;
	unsigned long long _densityClusteringLocationsDistanceUnit;
	double _diffuseDensityClusteringMaximumDistance;
	unsigned long long _diffuseDensityClusteringMinimumNumberOfObjects;
	double _conciseDensityClusteringMaximumDistance;
	unsigned long long _conciseDensityClusteringMinimumNumberOfObjects;
	BOOL _enableMultipassDensityClustering;
	unsigned long long _adaptiveElectionMinimumNumberOfItemsByCluster;
	BOOL _enableAdaptiveElectionSmoother;
	BOOL _enableAdaptiveElectionSmootherAutomaticLimit;
	unsigned long long _adaptiveElectionSmootherMaximumLimit;
	unsigned long long _adaptiveElectionSmootherMinimumLimit;
	BOOL _enableConcurency;

}

@property (assign,nonatomic) BOOL enableConcurency;                                                          //@synthesize enableConcurency=_enableConcurency - In the implementation block
@property (assign,nonatomic) double optimalDayDistributionThreshold;                                         //@synthesize optimalDayDistributionThreshold=_optimalDayDistributionThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long timeSpanDensityAverageNumberOfObjects;                       //@synthesize timeSpanDensityAverageNumberOfObjects=_timeSpanDensityAverageNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL enableDensityClusteringLocationsDistance;                                  //@synthesize enableDensityClusteringLocationsDistance=_enableDensityClusteringLocationsDistance - In the implementation block
@property (assign,nonatomic) unsigned long long densityClusteringLocationsDistanceUnit;                      //@synthesize densityClusteringLocationsDistanceUnit=_densityClusteringLocationsDistanceUnit - In the implementation block
@property (assign,nonatomic) double diffuseDensityClusteringMaximumDistance;                                 //@synthesize diffuseDensityClusteringMaximumDistance=_diffuseDensityClusteringMaximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long diffuseDensityClusteringMinimumNumberOfObjects;              //@synthesize diffuseDensityClusteringMinimumNumberOfObjects=_diffuseDensityClusteringMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) double conciseDensityClusteringMaximumDistance;                                 //@synthesize conciseDensityClusteringMaximumDistance=_conciseDensityClusteringMaximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long conciseDensityClusteringMinimumNumberOfObjects;              //@synthesize conciseDensityClusteringMinimumNumberOfObjects=_conciseDensityClusteringMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL enableMultipassDensityClustering;                                          //@synthesize enableMultipassDensityClustering=_enableMultipassDensityClustering - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionMinimumNumberOfItemsByCluster;               //@synthesize adaptiveElectionMinimumNumberOfItemsByCluster=_adaptiveElectionMinimumNumberOfItemsByCluster - In the implementation block
@property (assign,nonatomic) BOOL enableAdaptiveElectionSmoother;                                            //@synthesize enableAdaptiveElectionSmoother=_enableAdaptiveElectionSmoother - In the implementation block
@property (assign,nonatomic) BOOL enableAdaptiveElectionSmootherAutomaticLimit;                              //@synthesize enableAdaptiveElectionSmootherAutomaticLimit=_enableAdaptiveElectionSmootherAutomaticLimit - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionSmootherMaximumLimit;                        //@synthesize adaptiveElectionSmootherMaximumLimit=_adaptiveElectionSmootherMaximumLimit - In the implementation block
@property (assign,nonatomic) unsigned long long adaptiveElectionSmootherMinimumLimit;                        //@synthesize adaptiveElectionSmootherMinimumLimit=_adaptiveElectionSmootherMinimumLimit - In the implementation block
+(id)clustering;
+(double)meanScoreForItems:(id)arg1 ;
+(double)scoreForItems:(id)arg1 ;
+(double)maximumScoreForItems:(id)arg1 ;
-(BOOL)enableDensityClusteringLocationsDistance;
-(unsigned long long)densityClusteringLocationsDistanceUnit;
-(/*^block*/id)densityClusteringDistanceBlock;
-(id)_densityClustersWithItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_adaptiveElection:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(BOOL)enableConcurency;
-(double)optimalDayDistributionThreshold;
-(unsigned long long)timeSpanDensityAverageNumberOfObjects;
-(double)diffuseDensityClusteringMaximumDistance;
-(unsigned long long)diffuseDensityClusteringMinimumNumberOfObjects;
-(double)conciseDensityClusteringMaximumDistance;
-(unsigned long long)conciseDensityClusteringMinimumNumberOfObjects;
-(BOOL)enableMultipassDensityClustering;
-(unsigned long long)adaptiveElectionMinimumNumberOfItemsByCluster;
-(BOOL)enableAdaptiveElectionSmoother;
-(BOOL)enableAdaptiveElectionSmootherAutomaticLimit;
-(unsigned long long)adaptiveElectionSmootherMaximumLimit;
-(unsigned long long)adaptiveElectionSmootherMinimumLimit;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)densityClustersWithItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setEnableConcurency:(BOOL)arg1 ;
-(void)setOptimalDayDistributionThreshold:(double)arg1 ;
-(void)setTimeSpanDensityAverageNumberOfObjects:(unsigned long long)arg1 ;
-(void)setEnableDensityClusteringLocationsDistance:(BOOL)arg1 ;
-(void)setDensityClusteringLocationsDistanceUnit:(unsigned long long)arg1 ;
-(void)setDiffuseDensityClusteringMaximumDistance:(double)arg1 ;
-(void)setDiffuseDensityClusteringMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(void)setConciseDensityClusteringMaximumDistance:(double)arg1 ;
-(void)setConciseDensityClusteringMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(void)setEnableMultipassDensityClustering:(BOOL)arg1 ;
-(void)setAdaptiveElectionMinimumNumberOfItemsByCluster:(unsigned long long)arg1 ;
-(void)setEnableAdaptiveElectionSmoother:(BOOL)arg1 ;
-(void)setEnableAdaptiveElectionSmootherAutomaticLimit:(BOOL)arg1 ;
-(void)setAdaptiveElectionSmootherMinimumLimit:(unsigned long long)arg1 ;
-(void)setAdaptiveElectionSmootherMaximumLimit:(unsigned long long)arg1 ;
-(id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)init;
@end

