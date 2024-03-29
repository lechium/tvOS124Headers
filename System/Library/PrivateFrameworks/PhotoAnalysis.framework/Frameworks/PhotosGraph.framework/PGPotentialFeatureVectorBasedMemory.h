/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSDictionary, NSSet, NSIndexSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory {

	BOOL _isBirthday;
	NSDictionary* _matchingKeywords;
	NSDictionary* _referenceKeywords;
	NSDictionary* _momentKeywords;
	NSSet* _peopleNodes;
	NSIndexSet* _sortedCriteria;
	double _matchingScore;
	double _contentScore;
	double _neighborScore;

}

@property (retain) NSDictionary * matchingKeywords;               //@synthesize matchingKeywords=_matchingKeywords - In the implementation block
@property (retain) NSDictionary * referenceKeywords;              //@synthesize referenceKeywords=_referenceKeywords - In the implementation block
@property (retain) NSDictionary * momentKeywords;                 //@synthesize momentKeywords=_momentKeywords - In the implementation block
@property (retain) NSSet * peopleNodes;                           //@synthesize peopleNodes=_peopleNodes - In the implementation block
@property (assign) BOOL isBirthday;                               //@synthesize isBirthday=_isBirthday - In the implementation block
@property (retain) NSIndexSet * sortedCriteria;                   //@synthesize sortedCriteria=_sortedCriteria - In the implementation block
@property (assign) double matchingScore;                          //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign) double contentScore;                           //@synthesize contentScore=_contentScore - In the implementation block
@property (assign) double neighborScore;                          //@synthesize neighborScore=_neighborScore - In the implementation block
-(void)setContentScore:(double)arg1 ;
-(double)contentScore;
-(double)neighborScore;
-(double)matchingScore;
-(void)setMatchingScore:(double)arg1 ;
-(void)setPeopleNodes:(NSSet *)arg1 ;
-(void)setIsBirthday:(BOOL)arg1 ;
-(void)setNeighborScore:(double)arg1 ;
-(NSIndexSet *)sortedCriteria;
-(void)setMatchingKeywords:(NSDictionary *)arg1 ;
-(void)setReferenceKeywords:(NSDictionary *)arg1 ;
-(void)setMomentKeywords:(NSDictionary *)arg1 ;
-(void)setSortedCriteria:(NSIndexSet *)arg1 ;
-(NSDictionary *)matchingKeywords;
-(NSDictionary *)referenceKeywords;
-(NSDictionary *)momentKeywords;
-(NSSet *)peopleNodes;
-(BOOL)isBirthday;
@end

