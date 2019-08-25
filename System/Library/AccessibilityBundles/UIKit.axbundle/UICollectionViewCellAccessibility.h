/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(NSRange)accessibilityRowRange;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(id)_accessibilityFrameDelegate;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityChildren;
-(id)_accessibilityIndexPath;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(BOOL)accessibilityScrollToVisible;
-(id)axData;
-(void)accessibilityClearInternalData;
-(BOOL)_accessibilityIsGuideElement;
-(void)_accessibilityClearInternalCaches;
-(id)_accessibilityParentCollectionView;
-(id)_accessibilityParentScrollView;
-(void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityHeaderElements;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)prepareForReuse;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
@end

