/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, NSDictionary;

@interface PGPublicEventCriteriaFactory : NSObject {

	PGGraph* _graph;
	NSDictionary* _disambiguationCriteriaByEventCategory;
	NSDictionary* _highConfidenceCriteriaByEventCategory;
	NSDictionary* _prohibitedCriteriaByEventCategory;

}

@property (nonatomic,retain) PGGraph * graph;                                                     //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) NSDictionary * disambiguationCriteriaByEventCategory;              //@synthesize disambiguationCriteriaByEventCategory=_disambiguationCriteriaByEventCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * highConfidenceCriteriaByEventCategory;              //@synthesize highConfidenceCriteriaByEventCategory=_highConfidenceCriteriaByEventCategory - In the implementation block
@property (nonatomic,readonly) NSDictionary * prohibitedCriteriaByEventCategory;                  //@synthesize prohibitedCriteriaByEventCategory=_prohibitedCriteriaByEventCategory - In the implementation block
+(id)publicEventCriteriaByCategoryForGraph:(id)arg1 ;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(id)_publicEventCriteriaByCategory;
-(id)_sportsCriteriaArray;
-(id)_musicConcertsCriteriaArray;
-(id)_nightLifeCriteriaArray;
-(id)_festivalsAndFairsCriteriaArray;
-(id)_theaterCriteriaArray;
-(id)_danceCriteriaArray;
-(id)_artsAndMuseumsCriteriaArray;
-(id)_meaningCriteriaByEventCategoryForMeaningIdentifierByEventCategories:(id)arg1 inferenceType:(unsigned long long)arg2 ;
-(NSDictionary *)disambiguationCriteriaByEventCategory;
-(NSDictionary *)highConfidenceCriteriaByEventCategory;
-(NSDictionary *)prohibitedCriteriaByEventCategory;
@end

