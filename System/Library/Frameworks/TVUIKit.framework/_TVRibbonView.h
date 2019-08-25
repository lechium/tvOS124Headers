/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/_TVCarouselView.h>

@interface _TVRibbonView : _TVCarouselView {

	BOOL _parallaxEnabled;
	BOOL _ribbonContainsFocus;
	double _focusedEdgeExpansion;
	double _revealDistance;
	double _shearAngle;
	double _focusedNarrowEdgeExpansion;
	double _unfocusedNarrowEdgeExpansion;
	CGSize _baseCellSize;

}

@property (assign,nonatomic) double focusedNarrowEdgeExpansion;                //@synthesize focusedNarrowEdgeExpansion=_focusedNarrowEdgeExpansion - In the implementation block
@property (assign,nonatomic) double unfocusedNarrowEdgeExpansion;              //@synthesize unfocusedNarrowEdgeExpansion=_unfocusedNarrowEdgeExpansion - In the implementation block
@property (assign,nonatomic) CGSize baseCellSize;                              //@synthesize baseCellSize=_baseCellSize - In the implementation block
@property (assign,nonatomic) BOOL ribbonContainsFocus;                         //@synthesize ribbonContainsFocus=_ribbonContainsFocus - In the implementation block
@property (assign,nonatomic) double focusedEdgeExpansion;                      //@synthesize focusedEdgeExpansion=_focusedEdgeExpansion - In the implementation block
@property (assign,nonatomic) double revealDistance;                            //@synthesize revealDistance=_revealDistance - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                             //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) double shearAngle;                                //@synthesize shearAngle=_shearAngle - In the implementation block
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(BOOL)parallaxEnabled;
-(double)focusedEdgeExpansion;
-(void)setFocusedEdgeExpansion:(double)arg1 ;
-(double)revealDistance;
-(void)setRevealDistance:(double)arg1 ;
-(double)shearAngle;
-(void)setShearAngle:(double)arg1 ;
-(void)_recalculateCellSizeMetricsForCellSize:(CGSize)arg1 ;
-(void)setFocusedNarrowEdgeExpansion:(double)arg1 ;
-(void)setUnfocusedNarrowEdgeExpansion:(double)arg1 ;
-(void)setBaseCellSize:(CGSize)arg1 ;
-(void)_updateMaskingModeForCell:(id)arg1 atIndexPath:(id)arg2 centerIndex:(long long)arg3 ;
-(BOOL)ribbonContainsFocus;
-(void)_updateContentForNewCenterIndex:(long long)arg1 ;
-(void)_updateVisibleCellMasksForCenterIndex:(long long)arg1 ;
-(void)setRibbonContainsFocus:(BOOL)arg1 ;
-(CGSize)baseCellSize;
-(double)_centeringAnimationDuration;
-(double)focusedNarrowEdgeExpansion;
-(double)unfocusedNarrowEdgeExpansion;
-(void)_recalculateCellSizeMetrics;
-(void)_updateMaskingModeForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)_collectionViewLayoutItemSize;
-(void)_animatePagedCenteringAnimated:(BOOL)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)setItemSize:(CGSize)arg1 ;
@end

