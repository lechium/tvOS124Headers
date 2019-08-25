/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIButton, NSTimer, NSMutableDictionary, UIColor;

@interface UIStepper : UIControl {

	BOOL _isRtoL;
	UIImageView* _middleView;
	UIButton* _plusButton;
	UIButton* _minusButton;
	NSTimer* _repeatTimer;
	long long _repeatCount;
	NSMutableDictionary* _dividerImages;
	BOOL _continuous;
	BOOL _autorepeat;
	BOOL _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;

}

@property (assign,getter=isContinuous,nonatomic) BOOL continuous;              //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) BOOL autorepeat;                                  //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                       //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
-(void)setFrame:(CGRect)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)_emitValueChanged;
-(double)minimumValue;
-(double)maximumValue;
-(void)_commonStepperInit;
-(void)_updateButtonEnabled;
-(void)_updateImages;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_updateDividerImageForButtonState;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)_startTimer;
-(void)_updateHighlightingAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateCount:(id)arg1 ;
-(void)_stopTimer;
-(void)_setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setStepValue:(double)arg1 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(double)stepValue;
-(BOOL)autorepeat;
-(void)setAutorepeat:(BOOL)arg1 ;
@end

