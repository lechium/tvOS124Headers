/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>
#import <libobjc.A.dylib/PGGraphEvent.h>
#import <libobjc.A.dylib/PGEventEnrichment.h>

@class NSDate, NSString, PGGraph;

@interface PGGraphCollectionNode : PGGraphNode <PGGraphEvent, PGEventEnrichment>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL happensPartiallyAtMyHome; 
@property (readonly) BOOL happensPartiallyAtMyWork; 
@property (readonly) NSDate * localStartDate; 
@property (readonly) NSDate * localEndDate; 
@property (readonly) NSDate * universalStartDate; 
@property (readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) PGGraph * graph; 
-(id)assetCollection;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(id)momentNodes;
-(id)addressNodes;
-(id)meaningLabels;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(id)personNodes;
-(void)enumerateMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMeaningNodesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)endsBeforeLocalDate:(id)arg1 ;
-(id)associatedNodesForRemoval;
-(id)seasonNodes;
-(BOOL)startsAfterLocalDate:(id)arg1 ;
-(BOOL)matchesMomentNodes:(id)arg1 ;
-(id)dateNodes;
-(id)sceneNodes;
-(id)roiNodes;
-(id)poiNodes;
-(id)meaningNodes;
-(id)businessNodes;
-(id)holidayNodes;
-(id)publicEventNodes;
-(id)naturalLanguageFeatures;
-(id)sortedMomentNodes;
-(id)birthdayPersonNode;
-(id)anniversaryPersonNode;
-(id)socialGroupNodes;
-(BOOL)happensPartiallyAtMyHome;
-(BOOL)happensPartiallyAtMyWork;
-(void)enumerateBusinessesUsingBlock:(/*^block*/id)arg1 ;
-(id)collectionUpgradingMeaningLabelForWeekend;
-(unsigned long long)collectionNumberOfAssets;
-(void)collectionEnumerateChildCollectionNodesUsingBlock:(/*^block*/id)arg1 ;
-(id)highConfidenceSceneNodes;
-(id)searchConfidenceSceneNodes;
-(NSString *)uuid;
@end

