/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationKeyframe.h>

@class NSString, NSDictionary;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe {

	double _duration;
	NSString* _function;
	NSDictionary* _functionParameters;
	double _functionTimeOffset;
	double _functionTimeFactor;
	double _innerEaseInControl;
	double _innerEaseOutControl;

}

@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * function;                            //@synthesize function=_function - In the implementation block
@property (nonatomic,copy) NSDictionary * functionParameters;              //@synthesize functionParameters=_functionParameters - In the implementation block
@property (assign,nonatomic) double functionTimeOffset;                    //@synthesize functionTimeOffset=_functionTimeOffset - In the implementation block
@property (assign,nonatomic) double functionTimeFactor;                    //@synthesize functionTimeFactor=_functionTimeFactor - In the implementation block
@property (assign,nonatomic) double innerEaseInControl;                    //@synthesize innerEaseInControl=_innerEaseInControl - In the implementation block
@property (assign,nonatomic) double innerEaseOutControl;                   //@synthesize innerEaseOutControl=_innerEaseOutControl - In the implementation block
+(id)keyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 withDuration:(double)arg3 ;
+(id)keyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 withDuration:(double)arg4 ;
-(void)setFunction:(NSString *)arg1 ;
-(NSString *)function;
-(void)setFunctionTimeOffset:(double)arg1 ;
-(void)setFunctionTimeFactor:(double)arg1 ;
-(void)setInnerEaseInControl:(double)arg1 ;
-(void)setInnerEaseOutControl:(double)arg1 ;
-(id)initKeyframeFunctionWithFunction:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 withDuration:(double)arg4 ;
-(void)setFunctionParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)functionParameters;
-(double)functionTimeOffset;
-(double)functionTimeFactor;
-(double)innerEaseInControl;
-(double)innerEaseOutControl;
-(id)keyframe;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
@end

