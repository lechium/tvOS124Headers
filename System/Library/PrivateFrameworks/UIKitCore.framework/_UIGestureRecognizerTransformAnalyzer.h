/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIGestureRecognizerTransformAnalyzer : NSObject {

	double _lowPassTranslationMagnitudeDelta;
	double _lowPassScaleDelta;
	double _lowPassRotationDelta;
	double _translationWeight;
	double _pinchingWeight;
	double _rotationWeight;
	long long _dominantComponent;

}

@property (nonatomic,readonly) long long dominantComponent;              //@synthesize dominantComponent=_dominantComponent - In the implementation block
@property (assign,nonatomic) double translationWeight;                   //@synthesize translationWeight=_translationWeight - In the implementation block
@property (assign,nonatomic) double pinchingWeight;                      //@synthesize pinchingWeight=_pinchingWeight - In the implementation block
@property (assign,nonatomic) double rotationWeight;                      //@synthesize rotationWeight=_rotationWeight - In the implementation block
-(id)init;
-(void)reset;
-(void)analyzeTouches:(id)arg1 ;
-(long long)dominantComponent;
-(void)setPinchingWeight:(double)arg1 ;
-(void)setRotationWeight:(double)arg1 ;
-(void)setTranslationWeight:(double)arg1 ;
-(double)translationWeight;
-(double)pinchingWeight;
-(double)rotationWeight;
@end

