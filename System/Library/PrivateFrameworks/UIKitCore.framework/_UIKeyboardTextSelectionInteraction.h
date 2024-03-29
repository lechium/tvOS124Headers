/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>
#import <UIKitCore/_UIPanOrFlickGestureRecognizerDelegate.h>

@class _UIKeyboardTextSelectionGestureController, NSMapTable, UITapGestureRecognizer, NSTimer, _UIPanOrFlickGestureRecognizer, NSString;

@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate> {

	_UIKeyboardTextSelectionGestureController* _owner;
	NSMapTable* _weakMap;
	id _deallocToken;
	UITapGestureRecognizer* _activeTap;
	NSTimer* _touchPadTimer;
	/*^block*/id _touchPadTimerCompletion;
	_UIPanOrFlickGestureRecognizer* _activePress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)detach;
-(id)owner;
-(void)hideRecogniser:(id)arg1 forKey:(id)arg2 ;
-(void)_clearHiding;
-(void)removeTemporaryGesture;
-(void)registerOwner:(id)arg1 ;
-(void)_configureOneFingerForcePressRecognizer:(id)arg1 ;
-(void)_configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(void)_configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(void)hideInsideRecogniser:(id)arg1 ;
-(void)_configureLongPressRecognizer:(id)arg1 ;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(void)panningGesture:(id)arg1 ;
-(void)twoFingerTap:(id)arg1 ;
-(void)panningGestureTap:(id)arg1 ;
-(id)selectionController;
-(void)_didEndIndirectSelectionGesture:(id)arg1 ;
-(void)beginTwoFingerCursorPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1 ;
-(void)endTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2 ;
-(void)cancelTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)beginIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endIndirectBlockPanWithExecutionContext:(id)arg1 ;
-(void)beginCursorManipulationFromRect:(CGRect)arg1 ;
-(CGPoint)cursorLocationForTranslation:(CGPoint)arg1 ;
-(void)beginTwoFingerLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)finishTwoFingerLongPressWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)_longForcePressDetected:(id)arg1 ;
-(void)_cancelLongForcePressTimer;
-(void)_prepareForGesture;
-(CGPoint)acceleratedTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 isActive:(BOOL)arg3 ;
-(BOOL)isPlacedCarefully;
-(CGPoint)boundedTranslation:(CGPoint)arg1 ;
-(void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 ;
-(void)_tidyUpGesture;
-(void)clearKeyboardTouchesForGesture:(id)arg1 ;
-(void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(BOOL)arg3 ;
-(void)_logTapCounts:(id)arg1 ;
-(void)_cancelTouchPadTimer;
-(void)_willBeginIndirectSelectionGesture:(id)arg1 ;
-(void)disableEnclosingScrollViewScrolling;
-(void)_configureLongPressTapRecognizer:(id)arg1 ;
-(void)_clearTouchPadCallback;
-(void)twoFingerLongPressGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 ;
-(void)indirectPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)_startTouchPadTimerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)forceTouchGestureRecognizerShouldBegin:(id)arg1 ;
-(void)_beginLongForcePressTimerForGesture:(id)arg1 ;
-(void)gestureRecognizerShouldBeginResponse:(id)arg1 ;
-(double)additionalPressDurationForTypingCadence:(id)arg1 ;
-(id)gestures;
-(id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3 ;
@end

