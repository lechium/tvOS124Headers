/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIDelayedAction, UIResponder;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

	UIDelayedAction* _secondDelayTimer;
	BOOL _secondDelayElapsed;
	UIResponder*<UITextInput> _textInput;
	double _secondDelay;
	id _userData;

}

@property (assign,nonatomic,__weak) UIResponder*<UITextInput> textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic) double secondDelay;                                      //@synthesize secondDelay=_secondDelay - In the implementation block
@property (nonatomic,readonly) BOOL secondDelayElapsed;                               //@synthesize secondDelayElapsed=_secondDelayElapsed - In the implementation block
@property (assign,nonatomic,__weak) id userData;                                      //@synthesize userData=_userData - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)startTimer;
-(void)secondDelayElapsed:(id)arg1 ;
-(double)secondDelay;
-(UIResponder*<UITextInput>)textInput;
-(void)setTextInput:(UIResponder*<UITextInput>)arg1 ;
-(void)setSecondDelay:(double)arg1 ;
-(BOOL)secondDelayElapsed;
-(id)userData;
-(void)setUserData:(id)arg1 ;
@end

