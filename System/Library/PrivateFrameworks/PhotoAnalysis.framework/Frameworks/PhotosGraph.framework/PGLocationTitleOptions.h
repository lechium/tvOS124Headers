/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PGGraphAddressNode;

@interface PGLocationTitleOptions : NSObject {

	BOOL _useCities;
	BOOL _useTripTitleForLongDuration;
	BOOL _insertLineBreak;
	NSSet* _momentNodes;
	PGGraphAddressNode* _keyAssetAddressNode;
	NSSet* _curationAddressNodes;
	unsigned long long _aoiDisplayType;
	unsigned long long _peopleDisplayType;
	unsigned long long _filterSignificantLocationsType;

}

@property (nonatomic,retain) NSSet * momentNodes;                                            //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,retain) PGGraphAddressNode * keyAssetAddressNode;                       //@synthesize keyAssetAddressNode=_keyAssetAddressNode - In the implementation block
@property (nonatomic,retain) NSSet * curationAddressNodes;                                   //@synthesize curationAddressNodes=_curationAddressNodes - In the implementation block
@property (assign,nonatomic) unsigned long long aoiDisplayType;                              //@synthesize aoiDisplayType=_aoiDisplayType - In the implementation block
@property (assign,nonatomic) unsigned long long peopleDisplayType;                           //@synthesize peopleDisplayType=_peopleDisplayType - In the implementation block
@property (assign,nonatomic) BOOL useCities;                                                 //@synthesize useCities=_useCities - In the implementation block
@property (assign,nonatomic) BOOL useTripTitleForLongDuration;                               //@synthesize useTripTitleForLongDuration=_useTripTitleForLongDuration - In the implementation block
@property (assign,nonatomic) unsigned long long filterSignificantLocationsType;              //@synthesize filterSignificantLocationsType=_filterSignificantLocationsType - In the implementation block
@property (assign,nonatomic) BOOL insertLineBreak;                                           //@synthesize insertLineBreak=_insertLineBreak - In the implementation block
+(id)onlyPeopleLocationTitleOptions;
-(NSSet *)momentNodes;
-(void)setMomentNodes:(NSSet *)arg1 ;
-(void)setInsertLineBreak:(BOOL)arg1 ;
-(void)setFilterSignificantLocationsType:(unsigned long long)arg1 ;
-(void)setUseCities:(BOOL)arg1 ;
-(void)setAoiDisplayType:(unsigned long long)arg1 ;
-(void)setPeopleDisplayType:(unsigned long long)arg1 ;
-(void)setKeyAssetAddressNode:(PGGraphAddressNode *)arg1 ;
-(void)setCurationAddressNodes:(NSSet *)arg1 ;
-(PGGraphAddressNode *)keyAssetAddressNode;
-(NSSet *)curationAddressNodes;
-(BOOL)insertLineBreak;
-(unsigned long long)filterSignificantLocationsType;
-(BOOL)useTripTitleForLongDuration;
-(unsigned long long)peopleDisplayType;
-(unsigned long long)aoiDisplayType;
-(BOOL)useCities;
-(void)setUseTripTitleForLongDuration:(BOOL)arg1 ;
-(id)init;
@end

