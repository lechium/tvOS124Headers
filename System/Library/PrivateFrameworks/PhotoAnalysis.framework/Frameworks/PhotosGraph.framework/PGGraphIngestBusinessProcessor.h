/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphIngestProcessor.h>

@class NSDictionary;

@interface PGGraphIngestBusinessProcessor : PGGraphIngestProcessor {

	NSDictionary* _requiredCriteriaByPOIIdentifier;

}

@property (nonatomic,readonly) NSDictionary * requiredCriteriaByPOIIdentifier;              //@synthesize requiredCriteriaByPOIIdentifier=_requiredCriteriaByPOIIdentifier - In the implementation block
+(id)_spatialMapCategoriesByMeaningIdentifier;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_insertBusinessItemsFromMomentNodes:(id)arg1 withLocationOfInterestVisitsToResolveByMomentLocalIdentifier:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_predominantVisitForMomentNode:(id)arg1 publicEventBusinessItemMuid:(unsigned long long)arg2 ;
-(BOOL)_momentNode:(id)arg1 hasValidConstraintsForLocationOfInterestVisit:(id)arg2 ;
-(id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)arg1 ;
-(NSDictionary *)requiredCriteriaByPOIIdentifier;
@end

