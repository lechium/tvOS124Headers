/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol SiriTVUIClickRecognizerDelegate;
@interface SiriTVUIClickRecognizer : UITapGestureRecognizer {

	id<SiriTVUIClickRecognizerDelegate> _clickDelegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUIClickRecognizerDelegate> clickDelegate;              //@synthesize clickDelegate=_clickDelegate - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 clickDelegate:(id)arg3 ;
-(id<SiriTVUIClickRecognizerDelegate>)clickDelegate;
-(void)setClickDelegate:(id<SiriTVUIClickRecognizerDelegate>)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
@end

