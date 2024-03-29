/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIAnimation : NSObject {

	id _target;
	SEL _action;
	id _delegate;
	/*^block*/id _completion;
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned useNSTimer : 1;
	}  _animationFlags;
	double _startTime;
	double _duration;
	int _state;

}
-(id)target;
-(void)setDelegate:(id)arg1 ;
-(int)state;
-(id)delegate;
-(SEL)action;
-(int)type;
-(void)setDuration:(double)arg1 ;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(float)fractionForTime:(double)arg1 ;
-(void)markStop;
-(/*^block*/id)completion;
-(void)markStart:(double)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)stopAnimation;
-(void)setUsesNSTimer:(BOOL)arg1 ;
-(BOOL)usesNSTimer;
-(void)setAnimationCurve:(int)arg1 ;
@end

