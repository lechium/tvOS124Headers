/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/FBExclusiveTouchGestureRecognizerDelegate.h>

@class FBSDisplayIdentity, NSMutableSet, UIGestureRecognizer, BKSTouchStream, NSSet, NSString;

@interface _FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBExclusiveTouchGestureRecognizerDelegate> {

	FBSDisplayIdentity* _rootDisplayIdentity;
	NSMutableSet* _recognizingGestures;
	NSMutableSet* _externalEdgeSwipeGestures;
	NSMutableSet* _internalGestures;
	NSMutableSet* _externalGestures;
	BOOL _achievedMaximumMovement;
	BOOL _didSeeExclusiveTouchBegan;
	BOOL _didProcessPendingSwipeBegan;
	UIGestureRecognizer* _exclusiveTouchGesture;
	UIGestureRecognizer* _pendingSwipeGesture;
	UIGestureRecognizer* _catchEdgeSwipeFailureGesture;
	BKSTouchStream* _touchStream;

}

@property (nonatomic,retain) UIGestureRecognizer * exclusiveTouchGesture;                     //@synthesize exclusiveTouchGesture=_exclusiveTouchGesture - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * pendingSwipeGesture;                       //@synthesize pendingSwipeGesture=_pendingSwipeGesture - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * catchEdgeSwipeFailureGesture;              //@synthesize catchEdgeSwipeFailureGesture=_catchEdgeSwipeFailureGesture - In the implementation block
@property (assign,nonatomic) BOOL achievedMaximumMovement;                                    //@synthesize achievedMaximumMovement=_achievedMaximumMovement - In the implementation block
@property (assign,nonatomic) BOOL didSeeExclusiveTouchBegan;                                  //@synthesize didSeeExclusiveTouchBegan=_didSeeExclusiveTouchBegan - In the implementation block
@property (assign,nonatomic) BOOL didProcessPendingSwipeBegan;                                //@synthesize didProcessPendingSwipeBegan=_didProcessPendingSwipeBegan - In the implementation block
@property (nonatomic,retain) BKSTouchStream * touchStream;                                    //@synthesize touchStream=_touchStream - In the implementation block
@property (nonatomic,copy,readonly) NSSet * gestureRecognizers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_exclusiveTouchGestureChanged:(id)arg1 ;
-(void)setExclusiveTouchGesture:(UIGestureRecognizer *)arg1 ;
-(void)_pendingSwipeGestureChanged:(id)arg1 ;
-(void)setPendingSwipeGesture:(UIGestureRecognizer *)arg1 ;
-(void)_catchSwipeFailureGestureChanged:(id)arg1 ;
-(void)setCatchEdgeSwipeFailureGesture:(UIGestureRecognizer *)arg1 ;
-(void)_removeInternalGestures;
-(void)setTouchStream:(BKSTouchStream *)arg1 ;
-(void)_addInternalGesturesToView:(id)arg1 ;
-(void)_externalGestureRecognizerChanged:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 ;
-(UIGestureRecognizer *)exclusiveTouchGesture;
-(void)setAchievedMaximumMovement:(BOOL)arg1 ;
-(void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1 ;
-(unsigned char)_dispatchModeForExternalGestureCompletion;
-(void)_exclusiveTouchGestureDidTerminate:(id)arg1 ;
-(void)_pendingSwipeGestureDidBegin:(id)arg1 ;
-(void)_pendingSwipeGestureDidTerminate:(id)arg1 ;
-(void)_failedPendingSwipe;
-(void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(BOOL)arg2 timestamp:(double)arg3 ;
-(id)initWithRootDisplayIdentity:(id)arg1 ;
-(id)windowForSystemGestures;
-(UIGestureRecognizer *)pendingSwipeGesture;
-(UIGestureRecognizer *)catchEdgeSwipeFailureGesture;
-(BOOL)achievedMaximumMovement;
-(BOOL)didSeeExclusiveTouchBegan;
-(void)setDidSeeExclusiveTouchBegan:(BOOL)arg1 ;
-(BOOL)didProcessPendingSwipeBegan;
-(void)setDidProcessPendingSwipeBegan:(BOOL)arg1 ;
-(BKSTouchStream *)touchStream;
-(void)dealloc;
-(NSString *)description;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(NSSet *)gestureRecognizers;
@end

