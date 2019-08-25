/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRAction, NSDictionary;

@interface MRAnimationTrigger : NSObject {

	MRAction* _action;
	float _startValue;
	float _lastValue;
	NSDictionary* _animationAttributes;

}

@property (nonatomic,retain) MRAction * action;                       //@synthesize action=_action - In the implementation block
@property (assign) float startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign) float lastValue;                                   //@synthesize lastValue=_lastValue - In the implementation block
@property (readonly) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
@property (readonly) BOOL isArmed; 
-(void)disarm;
-(NSDictionary *)animationAttributes;
-(float)rearmIfNeededWithDefaultValue:(float)arg1 ;
-(void)setLastValue:(float)arg1 ;
-(BOOL)isArmed;
-(float)startValue;
-(float)lastValue;
-(void)dealloc;
-(MRAction *)action;
-(id)initWithAction:(id)arg1 ;
-(void)setAction:(MRAction *)arg1 ;
-(void)setStartValue:(float)arg1 ;
@end

