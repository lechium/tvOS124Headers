/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraph, PGSearchComputationCache;

@interface PGSearchKeywordComputer : NSObject {

	PGGraph* _graph;
	PGSearchComputationCache* _searchComputationCache;

}

@property (nonatomic,readonly) PGSearchComputationCache * searchComputationCache;              //@synthesize searchComputationCache=_searchComputationCache - In the implementation block
-(id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2 ;
-(id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)searchInformationByTripUUIDWithTripUUIDs:(id)arg1 ;
-(PGSearchComputationCache *)searchComputationCache;
-(id)eventNodeForUUID:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)_enumerateBusinessAndPublicEventKeywordsForEventNode:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)curationInfoForTripNode:(id)arg1 ;
@end

