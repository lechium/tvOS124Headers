/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphLocationNode, NSDateInterval, NSSet, NSArray;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory {

	PGGraphLocationNode* _supersetLocationNode;
	NSDateInterval* _supersetDateInterval;
	NSSet* _interestingMomentNodes;
	NSArray* _interestingAssetsInSuperset;
	NSArray* _assetsInSuperset;
	NSSet* _supersetLocationNodes;

}

@property (readonly) PGGraphLocationNode * supersetLocationNode;              //@synthesize supersetLocationNode=_supersetLocationNode - In the implementation block
@property (readonly) NSDateInterval * supersetDateInterval;                   //@synthesize supersetDateInterval=_supersetDateInterval - In the implementation block
@property (readonly) NSSet * interestingMomentNodes;                          //@synthesize interestingMomentNodes=_interestingMomentNodes - In the implementation block
@property (retain) NSArray * interestingAssetsInSuperset;                     //@synthesize interestingAssetsInSuperset=_interestingAssetsInSuperset - In the implementation block
@property (retain) NSArray * assetsInSuperset;                                //@synthesize assetsInSuperset=_assetsInSuperset - In the implementation block
@property (retain) NSSet * supersetLocationNodes;                             //@synthesize supersetLocationNodes=_supersetLocationNodes - In the implementation block
-(id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4 ;
-(void)setSupersetLocationNodes:(NSSet *)arg1 ;
-(NSSet *)supersetLocationNodes;
-(NSSet *)interestingMomentNodes;
-(void)setInterestingAssetsInSuperset:(NSArray *)arg1 ;
-(void)setAssetsInSuperset:(NSArray *)arg1 ;
-(PGGraphLocationNode *)supersetLocationNode;
-(NSDateInterval *)supersetDateInterval;
-(NSArray *)interestingAssetsInSuperset;
-(NSArray *)assetsInSuperset;
@end

