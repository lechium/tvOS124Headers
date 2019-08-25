/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIScrollToTopView.h>
#import <UIKitCore/_UIRemoteViewFocusProxy.h>
#import <UIKitCore/_UIViewBoundingPathChangeObserver.h>

@class _UIRemoteViewController, NSString;

@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy, _UIViewBoundingPathChangeObserver> {

	_UIRemoteViewController* _remoteViewController;
	id _viewControllerOperatorProxy;
	id _textEffectsOperatorProxy;
	BOOL _hasIntrinsicContentSize;
	CGSize _intrinsicContentSize;
	CGRect _formerTextEffectsContentFrame;
	BOOL _observingBoundingPathChanges;
	BOOL _needsRemoteViewServiceBoundingPathUpdate;
	BOOL _remoteViewServiceBoundingPathUpdateScheduled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * remoteViewController; 
+(id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3 ;
-(void)dealloc;
-(BOOL)canBecomeFocused;
-(BOOL)isScrollEnabled;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(_UIRemoteViewController *)remoteViewController;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(BOOL)arg2 ;
-(void)_updateTextEffectsGeometries:(CGRect)arg1 ;
-(BOOL)_needsTextEffectsUpdateToFrame:(CGRect)arg1 ;
-(id)_boundingPathForRemoteViewService;
-(void)_clearNeedsRemoteViewServiceBoundingPathUpdate;
-(long long)_interfaceOrientationForScene:(id)arg1 ;
-(void)_updateSceneGeometries:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)_canSendViewServiceActualBoundingPath;
-(void)_setNeedsRemoteViewServiceBoundingPathUpdate;
-(void)updateIntrinsicContentSize:(CGSize)arg1 ;
-(void)_updateTextEffectsGeometriesImmediately;
-(BOOL)_fencingEffectsAreVisible;
@end

