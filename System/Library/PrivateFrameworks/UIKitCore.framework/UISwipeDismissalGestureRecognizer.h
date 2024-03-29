/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface UISwipeDismissalGestureRecognizer : UIGestureRecognizer {

	double _allowableMovement;
	CGPoint _originalTouchPoint;

}

@property (assign,nonatomic) CGPoint originalTouchPoint;              //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (assign,nonatomic) double allowableMovement;                //@synthesize allowableMovement=_allowableMovement - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)reset;
-(double)allowableMovement;
-(CGPoint)originalTouchPoint;
-(void)setOriginalTouchPoint:(CGPoint)arg1 ;
@end

