/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAssetCollection, PGGraphMomentNode, NSSet, NSDate, CLLocation, NSString, NSDictionary, PGMemoryGenerator;

@interface PGPotentialMemory : NSObject {

	PHAssetCollection* _assetCollection;
	PGGraphMomentNode* _momentNode;
	NSSet* _momentNodes;
	long long _sourceType;
	unsigned long long _category;
	unsigned long long _subcategory;
	double _score;
	NSDate* _localDate;
	CLLocation* _location;
	NSSet* _peopleUUIDs;
	NSString* _eventName;
	double _contentScore;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSSet* _features;
	NSSet* _momentIDs;
	NSDictionary* _numberOfAssetsByMomentIDs;
	PGPotentialMemory* _upgradedPotentialMemory;
	PGMemoryGenerator* _upgradedMemoryGenerator;

}

@property (retain) PHAssetCollection * assetCollection;                                //@synthesize assetCollection=_assetCollection - In the implementation block
@property (retain) PGGraphMomentNode * momentNode;                                     //@synthesize momentNode=_momentNode - In the implementation block
@property (retain) NSSet * momentNodes;                                                //@synthesize momentNodes=_momentNodes - In the implementation block
@property (assign) long long sourceType;                                               //@synthesize sourceType=_sourceType - In the implementation block
@property (assign) unsigned long long category;                                        //@synthesize category=_category - In the implementation block
@property (assign) unsigned long long subcategory;                                     //@synthesize subcategory=_subcategory - In the implementation block
@property (assign) double score;                                                       //@synthesize score=_score - In the implementation block
@property (retain) NSDate * localDate;                                                 //@synthesize localDate=_localDate - In the implementation block
@property (retain) CLLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (retain) NSSet * peopleUUIDs;                                                //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
@property (retain) NSString * eventName;                                               //@synthesize eventName=_eventName - In the implementation block
@property (assign) double contentScore;                                                //@synthesize contentScore=_contentScore - In the implementation block
@property (retain) NSSet * features;                                                   //@synthesize features=_features - In the implementation block
@property (readonly) NSDate * localStartDate;                                          //@synthesize localStartDate=_localStartDate - In the implementation block
@property (readonly) NSDate * localEndDate;                                            //@synthesize localEndDate=_localEndDate - In the implementation block
@property (readonly) NSDate * universalStartDate;                                      //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (readonly) NSDate * universalEndDate;                                        //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (readonly) NSSet * momentIDs;                                                //@synthesize momentIDs=_momentIDs - In the implementation block
@property (readonly) NSDictionary * numberOfAssetsByMomentIDs;                         //@synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs - In the implementation block
@property (nonatomic,retain) PGPotentialMemory * upgradedPotentialMemory;              //@synthesize upgradedPotentialMemory=_upgradedPotentialMemory - In the implementation block
@property (nonatomic,retain) PGMemoryGenerator * upgradedMemoryGenerator;              //@synthesize upgradedMemoryGenerator=_upgradedMemoryGenerator - In the implementation block
-(double)score;
-(void)setEventName:(NSString *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setSubcategory:(unsigned long long)arg1 ;
-(PHAssetCollection *)assetCollection;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(unsigned long long)subcategory;
-(void)setContentScore:(double)arg1 ;
-(double)contentScore;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(NSSet *)momentNodes;
-(double)computeContentScoreUsingMemoryController:(id)arg1 ;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(void)_resetOverlapCheck;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 ;
-(NSDate *)localDate;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(void)setLocalDate:(NSDate *)arg1 ;
-(void)setPeopleUUIDs:(NSSet *)arg1 ;
-(NSSet *)peopleUUIDs;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNode:(id)arg3 ;
-(id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(unsigned long long)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4 ;
-(NSSet *)momentIDs;
-(PGGraphMomentNode *)momentNode;
-(void)_prepareForOverlapCheck;
-(NSDictionary *)numberOfAssetsByMomentIDs;
-(void)setUpgradedPotentialMemory:(PGPotentialMemory *)arg1 ;
-(void)setUpgradedMemoryGenerator:(PGMemoryGenerator *)arg1 ;
-(PGPotentialMemory *)upgradedPotentialMemory;
-(PGMemoryGenerator *)upgradedMemoryGenerator;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(CLLocation *)location;
-(NSString *)eventName;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)setLocation:(CLLocation *)arg1 ;
@end

