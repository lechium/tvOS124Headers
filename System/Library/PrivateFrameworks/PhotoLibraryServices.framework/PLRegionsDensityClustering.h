/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLRegionsClustering.h>

@interface PLRegionsDensityClustering : PLRegionsClustering {

	BOOL _includeDefiniteClusters;
	BOOL _removeDefiniteClustersObjectsFromDataset;
	BOOL _includeExtensiveClusters;
	BOOL _removeExtensiveClustersObjectsFromDataset;
	BOOL _removeExtensiveClustersContainingDefiniteClusters;
	BOOL _clusterAllRemainingObjects;
	unsigned long long _algorithm;
	double _definiteClusterTimeIntervalDistance;
	double _definiteClusterMaximumDistanceUnit;
	double _definiteClusterMinimumNumberOfObjectsPercent;
	unsigned long long _definiteClusterMinimumNumberOfObjects;
	double _extensiveClusterTimeIntervalDistance;
	double _extensiveClusterMaximumDistanceUnit;
	double _extensiveClusterMinimumNumberOfObjectsPercent;
	unsigned long long _extensiveClusterMinimumNumberOfObjects;

}

@property (assign,nonatomic) unsigned long long algorithm;                                           //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) BOOL includeDefiniteClusters;                                           //@synthesize includeDefiniteClusters=_includeDefiniteClusters - In the implementation block
@property (assign,nonatomic) double definiteClusterTimeIntervalDistance;                             //@synthesize definiteClusterTimeIntervalDistance=_definiteClusterTimeIntervalDistance - In the implementation block
@property (assign,nonatomic) double definiteClusterMaximumDistanceUnit;                              //@synthesize definiteClusterMaximumDistanceUnit=_definiteClusterMaximumDistanceUnit - In the implementation block
@property (assign,nonatomic) double definiteClusterMinimumNumberOfObjectsPercent;                    //@synthesize definiteClusterMinimumNumberOfObjectsPercent=_definiteClusterMinimumNumberOfObjectsPercent - In the implementation block
@property (assign,nonatomic) unsigned long long definiteClusterMinimumNumberOfObjects;               //@synthesize definiteClusterMinimumNumberOfObjects=_definiteClusterMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL removeDefiniteClustersObjectsFromDataset;                          //@synthesize removeDefiniteClustersObjectsFromDataset=_removeDefiniteClustersObjectsFromDataset - In the implementation block
@property (assign,nonatomic) BOOL includeExtensiveClusters;                                          //@synthesize includeExtensiveClusters=_includeExtensiveClusters - In the implementation block
@property (assign,nonatomic) double extensiveClusterTimeIntervalDistance;                            //@synthesize extensiveClusterTimeIntervalDistance=_extensiveClusterTimeIntervalDistance - In the implementation block
@property (assign,nonatomic) double extensiveClusterMaximumDistanceUnit;                             //@synthesize extensiveClusterMaximumDistanceUnit=_extensiveClusterMaximumDistanceUnit - In the implementation block
@property (assign,nonatomic) double extensiveClusterMinimumNumberOfObjectsPercent;                   //@synthesize extensiveClusterMinimumNumberOfObjectsPercent=_extensiveClusterMinimumNumberOfObjectsPercent - In the implementation block
@property (assign,nonatomic) unsigned long long extensiveClusterMinimumNumberOfObjects;              //@synthesize extensiveClusterMinimumNumberOfObjects=_extensiveClusterMinimumNumberOfObjects - In the implementation block
@property (assign,nonatomic) BOOL removeExtensiveClustersObjectsFromDataset;                         //@synthesize removeExtensiveClustersObjectsFromDataset=_removeExtensiveClustersObjectsFromDataset - In the implementation block
@property (assign,nonatomic) BOOL removeExtensiveClustersContainingDefiniteClusters;                 //@synthesize removeExtensiveClustersContainingDefiniteClusters=_removeExtensiveClustersContainingDefiniteClusters - In the implementation block
@property (assign,nonatomic) BOOL clusterAllRemainingObjects;                                        //@synthesize clusterAllRemainingObjects=_clusterAllRemainingObjects - In the implementation block
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(void)setRemoveExtensiveClustersContainingDefiniteClusters:(BOOL)arg1 ;
-(void)setClusterAllRemainingObjects:(BOOL)arg1 ;
-(/*^block*/id)_locationBasedClusteringBlock;
-(/*^block*/id)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(double)arg1 ;
-(unsigned long long)algorithm;
-(BOOL)includeDefiniteClusters;
-(void)setIncludeDefiniteClusters:(BOOL)arg1 ;
-(double)definiteClusterTimeIntervalDistance;
-(void)setDefiniteClusterTimeIntervalDistance:(double)arg1 ;
-(double)definiteClusterMaximumDistanceUnit;
-(void)setDefiniteClusterMaximumDistanceUnit:(double)arg1 ;
-(double)definiteClusterMinimumNumberOfObjectsPercent;
-(void)setDefiniteClusterMinimumNumberOfObjectsPercent:(double)arg1 ;
-(unsigned long long)definiteClusterMinimumNumberOfObjects;
-(void)setDefiniteClusterMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(BOOL)removeDefiniteClustersObjectsFromDataset;
-(void)setRemoveDefiniteClustersObjectsFromDataset:(BOOL)arg1 ;
-(BOOL)includeExtensiveClusters;
-(void)setIncludeExtensiveClusters:(BOOL)arg1 ;
-(double)extensiveClusterTimeIntervalDistance;
-(void)setExtensiveClusterTimeIntervalDistance:(double)arg1 ;
-(double)extensiveClusterMaximumDistanceUnit;
-(void)setExtensiveClusterMaximumDistanceUnit:(double)arg1 ;
-(double)extensiveClusterMinimumNumberOfObjectsPercent;
-(void)setExtensiveClusterMinimumNumberOfObjectsPercent:(double)arg1 ;
-(unsigned long long)extensiveClusterMinimumNumberOfObjects;
-(void)setExtensiveClusterMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(BOOL)removeExtensiveClustersObjectsFromDataset;
-(void)setRemoveExtensiveClustersObjectsFromDataset:(BOOL)arg1 ;
-(BOOL)removeExtensiveClustersContainingDefiniteClusters;
-(BOOL)clusterAllRemainingObjects;
-(id)init;
@end

