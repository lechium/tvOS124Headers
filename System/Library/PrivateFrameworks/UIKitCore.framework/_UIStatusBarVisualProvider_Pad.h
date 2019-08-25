/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS {

	NSDictionary* _orderedDisplayItemPlacements;
	NSLayoutConstraint* _trailingRegionLeadingAnchorConstraint;
	NSLayoutConstraint* _leadingRegionTrailingAnchorConstraint;
	_UIStatusBarDisplayItemPlacement* _datePlacement;
	_UIStatusBarDisplayItemPlacement* _timePlacement;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;                             //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingRegionLeadingAnchorConstraint;              //@synthesize trailingRegionLeadingAnchorConstraint=_trailingRegionLeadingAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingRegionTrailingAnchorConstraint;              //@synthesize leadingRegionTrailingAnchorConstraint=_leadingRegionTrailingAnchorConstraint - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * datePlacement;                        //@synthesize datePlacement=_datePlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * timePlacement;                        //@synthesize timePlacement=_timePlacement - In the implementation block
+(NSDirectionalEdgeInsets)edgeInsets;
+(double)height;
+(double)baselineOffset;
+(Class)visualProviderSubclassForScreen:(id)arg1 ;
+(NSDirectionalEdgeInsets)expandedEdgeInsets;
+(double)regionSpacing;
+(id)normalFont;
+(id)expandedFont;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)styleAttributes;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(void)avoidanceFrameUpdatedFromFrame:(CGRect)arg1 ;
-(void)sizeUpdatedFromSize:(CGSize)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(BOOL)_updateDateAndTimePlacements;
-(void)_updateConstraintsForAvoidanceFrame:(CGRect)arg1 ;
-(void)_dateTimePreferencesUpdated;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(NSLayoutConstraint *)trailingRegionLeadingAnchorConstraint;
-(void)setTrailingRegionLeadingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingRegionTrailingAnchorConstraint;
-(void)setLeadingRegionTrailingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)datePlacement;
-(void)setDatePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)timePlacement;
-(void)setTimePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
@end

