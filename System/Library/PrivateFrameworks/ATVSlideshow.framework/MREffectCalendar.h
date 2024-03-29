/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRTextRenderer, MRImage;

@interface MREffectCalendar : MREffect {

	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	CGSize mStride;
	CGSize mImageSize;
	CGSize mTextSize;
	CGPoint mBaseImagePosition;
	CGPoint mBaseTextPosition;
	unsigned char mFirstDayWeekday;
	unsigned char mNumberOfDays;
	BOOL mTextWasUpdatedSinceLastRendering;

}
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)init;
-(void)setAttributes:(id)arg1 ;
@end

