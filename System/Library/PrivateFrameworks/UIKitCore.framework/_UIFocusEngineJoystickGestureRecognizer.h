/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer {

	CGPoint _stickPosition;
	CGPoint _previousStickPosition;

}

@property (nonatomic,readonly) CGPoint stickPosition;                      //@synthesize stickPosition=_stickPosition - In the implementation block
@property (nonatomic,readonly) CGPoint previousStickPosition;              //@synthesize previousStickPosition=_previousStickPosition - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(CGPoint)stickPosition;
-(CGPoint)previousStickPosition;
@end

