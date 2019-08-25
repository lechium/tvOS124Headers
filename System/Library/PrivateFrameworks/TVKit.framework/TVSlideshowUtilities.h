/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVSlideshowUtilities : NSObject {

	long long _mode;

}

@property (assign,nonatomic) long long mode;              //@synthesize mode=_mode - In the implementation block
-(double)timePerSlide;
-(id)alertControllerDisplayingTimePerSlideOptionsForCell:(id)arg1 ;
-(id)initWithMarimbaMode:(long long)arg1 ;
-(id)_getRandomizedMarimbaTheme;
-(BOOL)themeHasAdditionalOptions:(id)arg1 ;
-(void)updateMarimbaView:(id)arg1 transitionTiming:(double)arg2 ;
-(void)_setTransitionTiming:(double)arg1 marimbaView:(id)arg2 ;
-(id)updateMarimbaDocument:(id)arg1 photoAssets:(id)arg2 ;
-(void)updateMarimbaView:(id)arg1 currentTheme:(id)arg2 currentTransition:(id)arg3 ;
-(void)updateTransitionTimingForMarimbaView:(id)arg1 ;
-(void)cleanUpMarimbaResources:(id)arg1 ;
-(id)init;
-(long long)mode;
-(void)setMode:(long long)arg1 ;
@end

