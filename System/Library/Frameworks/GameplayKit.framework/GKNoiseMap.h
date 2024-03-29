/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface GKNoiseMap : NSObject {

	float* _map;
	BOOL _seamless;
	 _sampleCount;
	NSDictionary* _gradientColors;
	 _size;
	 _origin;

}

@property (nonatomic,copy) NSDictionary * gradientColors;                    //@synthesize gradientColors=_gradientColors - In the implementation block
@property (nonatomic,readonly)  size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly)  origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly)  sampleCount;                                 //@synthesize sampleCount=_sampleCount - In the implementation block
@property (getter=isSeamless,nonatomic,readonly) BOOL seamless;              //@synthesize seamless=_seamless - In the implementation block
+(id)noiseMapWithNoise:(id)arg1 ;
+(id)noiseMapWithNoise:(id)arg1 size:(BOOL)arg2 ;
-(id)initWithNoise:(id)arg1 ;
-(id)initWithNoise:(id)arg1 size:(BOOL)arg2 ;
-(int)mapIndexX:(int)arg1 y:(int)arg2 ;
-(id)__colorData;
-(float)valueAtPosition:;
-(float)interpolatedValueAtPosition:;
-(void)setValue:(float)arg1 ;
-(BOOL)isSeamless;
-()size;
-(id)init;
-(void)dealloc;
-(void)setGradientColors:(NSDictionary *)arg1 ;
-()origin;
-()sampleCount;
-(NSDictionary *)gradientColors;
@end

