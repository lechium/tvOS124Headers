/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIFocusItem;
@class NSArray, _UIFocusRegion, UIView, UIScreen;

@interface _UIFocusItemInfo : NSObject <NSCopying> {

	struct {
		unsigned hasResolvedFocusSound : 1;
		unsigned hasResolvedFocusSoundPan : 1;
		unsigned hasResolvedFocusTouchSensitivityStyle : 1;
		unsigned hasResolvedFocusMovementFlippedHorizontally : 1;
		unsigned hasResolvedFocusedRegion : 1;
	}  _flags;
	BOOL _focusMovementFlippedHorizontally;
	NSArray* _ancestorScrollableContainers;
	long long _inheritedFocusMovementStyle;
	long long _focusSound;
	double _focusSoundPan;
	long long _focusTouchSensitivityStyle;
	_UIFocusRegion* _focusedRegion;
	id<UIFocusItem> _item;
	UIView* _containingView;

}

@property (nonatomic,__weak,readonly) id<UIFocusItem> item;                                                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) BOOL itemIsKindOfView; 
@property (nonatomic,__weak,readonly) UIView * containingView;                                                               //@synthesize containingView=_containingView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ancestorScrollableContainers;                                                  //@synthesize ancestorScrollableContainers=_ancestorScrollableContainers - In the implementation block
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,readonly) long long inheritedFocusMovementStyle;                                                        //@synthesize inheritedFocusMovementStyle=_inheritedFocusMovementStyle - In the implementation block
@property (nonatomic,readonly) long long focusSound;                                                                         //@synthesize focusSound=_focusSound - In the implementation block
@property (nonatomic,readonly) double focusSoundPan;                                                                         //@synthesize focusSoundPan=_focusSoundPan - In the implementation block
@property (nonatomic,readonly) long long focusTouchSensitivityStyle;                                                         //@synthesize focusTouchSensitivityStyle=_focusTouchSensitivityStyle - In the implementation block
@property (getter=isFocusMovementFlippedHorizontally,nonatomic,readonly) BOOL focusMovementFlippedHorizontally;              //@synthesize focusMovementFlippedHorizontally=_focusMovementFlippedHorizontally - In the implementation block
@property (nonatomic,readonly) _UIFocusRegion * focusedRegion;                                                               //@synthesize focusedRegion=_focusedRegion - In the implementation block
+(id)infoWithItem:(id)arg1 ;
+(id)infoWithView:(id)arg1 ;
-(id)init;
-(UIScreen *)screen;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIFocusItem>)item;
-(UIView *)containingView;
-(BOOL)itemIsKindOfView;
-(id)_initWithItem:(id)arg1 containingView:(id)arg2 ;
-(_UIFocusRegion *)focusedRegion;
-(id)_focusedRegionInCoordinateSpace:(id)arg1 ;
-(NSArray *)ancestorScrollableContainers;
-(long long)inheritedFocusMovementStyle;
-(long long)focusSound;
-(double)focusSoundPan;
-(long long)focusTouchSensitivityStyle;
-(BOOL)isFocusMovementFlippedHorizontally;
-(CGRect)focusedRectInCoordinateSpace:(id)arg1 ;
-(void)invalidateFocusedRegion;
@end

