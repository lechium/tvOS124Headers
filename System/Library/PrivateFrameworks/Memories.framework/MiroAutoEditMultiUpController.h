/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Project, MiroMemory, NSArray, NSMutableArray, MiroAutoEditKenBurnsController, MiroAutoEditProjectPolish;

@interface MiroAutoEditMultiUpController : NSObject {

	Project* _project;
	MiroMemory* _activeMemory;
	NSArray* _chronologicallyOrderedAssets;
	NSArray* _projectLayoutClips;
	NSMutableArray* _selectedPeers;
	MiroAutoEditKenBurnsController* _kbController;
	MiroAutoEditProjectPolish* _polishController;
	unsigned long long _altStyle;

}

@property (nonatomic,retain) Project * project;                                          //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroMemory * activeMemory;                                  //@synthesize activeMemory=_activeMemory - In the implementation block
@property (nonatomic,retain) NSArray * chronologicallyOrderedAssets;                     //@synthesize chronologicallyOrderedAssets=_chronologicallyOrderedAssets - In the implementation block
@property (assign,nonatomic) NSArray * projectLayoutClips;                               //@synthesize projectLayoutClips=_projectLayoutClips - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedPeers;                             //@synthesize selectedPeers=_selectedPeers - In the implementation block
@property (nonatomic,retain) MiroAutoEditKenBurnsController * kbController;              //@synthesize kbController=_kbController - In the implementation block
@property (nonatomic,retain) MiroAutoEditProjectPolish * polishController;               //@synthesize polishController=_polishController - In the implementation block
@property (assign,nonatomic) unsigned long long altStyle;                                //@synthesize altStyle=_altStyle - In the implementation block
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
-(MiroMemory *)activeMemory;
-(MiroAutoEditKenBurnsController *)kbController;
-(void)setKbController:(MiroAutoEditKenBurnsController *)arg1 ;
-(BOOL)findMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2 ;
-(BOOL)findInEditMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2 ;
-(NSMutableArray *)selectedPeers;
-(void)setSelectedPeers:(NSMutableArray *)arg1 ;
-(id)bestPeersBetweenClip:(id)arg1 and:(id)arg2 withCurrent:(id)arg3 ;
-(BOOL)clipIsMultiCandidate:(id)arg1 ;
-(BOOL)peer:(id)arg1 couldSupportAsset:(id)arg2 ;
-(id)appropriateDistancePeersFrom:(id)arg1 comparingTo:(id)arg2 ;
-(unsigned long long)altStyle;
-(void)setAltStyle:(unsigned long long)arg1 ;
-(void)prepareAltClip:(id)arg1 andClip:(id)arg2 fromSelectedPeer:(id)arg3 ;
-(int)multiUpTypeForLayoutClip:(id)arg1 andPeer:(id)arg2 ;
-(void)adjustKBRectanglesForClip:(id)arg1 animationStyle:(unsigned long long)arg2 aspect:(double)arg3 ;
-(NSArray *)chronologicallyOrderedAssets;
-(void)setChronologicallyOrderedAssets:(NSArray *)arg1 ;
-(BOOL)selectedPeersContains:(id)arg1 ;
-(id)allowedAssetsChronologically;
-(id)bestPeersBetweenCurrent:(id)arg1 and:(id)arg2 ;
-(id)pickBetweenClipA:(id)arg1 andClipB:(id)arg2 forLayoutClip:(id)arg3 ;
-(void)ensureMultiUpMovieClipIsFirstClip:(id)arg1 ;
-(id)bestPeersBeforeLayoutClip:(id)arg1 ;
-(id)bestPeersAfterLayoutClip:(id)arg1 ;
-(BOOL)layoutClip:(id)arg1 supportsMultiUpType:(int)arg2 ;
-(double)startZoomForLayoutClip:(id)arg1 ;
-(NSArray *)projectLayoutClips;
-(void)setProjectLayoutClips:(NSArray *)arg1 ;
-(MiroAutoEditProjectPolish *)polishController;
-(void)setPolishController:(MiroAutoEditProjectPolish *)arg1 ;
-(void)evaluatePossilbeInEditMultiUpPeers:(id)arg1 forLayoutClip:(id)arg2 ;
-(id)selectLayoutPeerFrom:(id)arg1 ;
-(void)createAndReplaceMultiUpForLayoutClip:(id)arg1 ;
@end

