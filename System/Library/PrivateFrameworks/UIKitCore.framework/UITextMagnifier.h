/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol UITextInput;
@class UIView, UIResponder, UITextMagnifierTimeWeightedPoint;

@interface UITextMagnifier : UIView {

	UIView* _target;
	CGPoint _magnificationPoint;
	CGPoint _animationPoint;
	CGPoint _terminalPoint;
	BOOL _terminalPointPlacedCarefully;
	UIResponder*<UITextInput> _text;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;

}

@property (nonatomic,retain) UIView * target;                                    //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;                         //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                             //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint;                            //@synthesize terminalPoint=_terminalPoint - In the implementation block
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully;                //@synthesize terminalPointPlacedCarefully=_terminalPointPlacedCarefully - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
@property (nonatomic,readonly) double offsetFromMagnificationPoint; 
+(id)getLoupeBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTarget:(UIView *)arg1 ;
-(UIView *)target;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(UIResponder*<UITextInput>)arg1 ;
-(UIResponder*<UITextInput>)text;
-(void)setNeedsDisplay;
-(void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(CGPoint)arg3 offset:(CGPoint)arg4 animated:(BOOL)arg5 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(CGPoint)terminalPoint;
-(BOOL)isHorizontal;
-(void)autoscrollWillNotStart;
-(void)setToMagnifierRenderer;
-(void)animateToMagnifierRenderer;
-(void)detectLostTouches:(id)arg1 ;
-(void)zoomDownAnimation;
-(void)remove;
-(CGPoint)magnificationPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)animateToAutoscrollRenderer;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)zoomUpAnimation;
-(void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)windowWillRotate:(id)arg1 ;
-(double)offsetFromMagnificationPoint;
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
@end

