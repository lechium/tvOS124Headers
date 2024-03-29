/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {

	SCD_Struct_BW110 _currentFrame;
	int _mostRecentEffectStatus;
	BWRamp* _simulatedApertureRamp;
	float _defaultSimulatedAperture;

}

@property (getter=isDepthAvailable,nonatomic,readonly) BOOL depthAvailable; 
+(void)initialize;
-(BOOL)isDepthAvailable;
-(id)initWithEffectStatus:(int)arg1 ;
-(void)_resetSimulatedApertureRampWithEffectStatus:(int)arg1 ;
-(SCD_Struct_BW110*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 ;
-(id)init;
-(void)dealloc;
@end

