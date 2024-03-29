/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UITouch, UIDelayedAction;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {

	CGPoint _startPoint;
	double _allowableMovement;
	int _numberOfFullTaps;
	double _minimumFinalPressDuration;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTaps;
	UITouch* _touch;
	UIDelayedAction* _tapTimer;

}

@property (nonatomic,retain) UITouch * touch;                               //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) int numberOfFullTaps;                          //@synthesize numberOfFullTaps=_numberOfFullTaps - In the implementation block
@property (assign,nonatomic) double allowableMovement;                      //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) double minimumFinalPressDuration;              //@synthesize minimumFinalPressDuration=_minimumFinalPressDuration - In the implementation block
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)_resetGestureRecognizer;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(double)allowableMovement;
-(void)clearTapTimer;
-(void)tooSlow:(id)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(int)numberOfFullTaps;
-(void)recognized:(id)arg1 ;
-(double)minimumFinalPressDuration;
-(void)startRecognitionTimer:(double)arg1 ;
-(void)_verifyMovementInAllowableRange;
-(void)setNumberOfFullTaps:(int)arg1 ;
-(void)setMinimumFinalPressDuration:(double)arg1 ;
@end

