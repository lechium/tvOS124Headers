/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MZEffectTiming.h>

@class NSString, NSArray;

@interface MREffectOrigamiTiming : NSObject <MZEffectTiming> {

	NSString* _effectID;
	NSArray* _description;
	NSArray* _animationTimeBounds;
	double _durationStretchFactor;
	double _slideTimings[8][2];
	double _phaseInDuration;
	double _mainDuration;
	double _phaseOutDuration;
	double _defaultPhaseInDuration;
	double _defaultMainDuration;
	double _defaultPhaseOutDuration;

}

@property (nonatomic,readonly) double phaseInDuration;               //@synthesize phaseInDuration=_phaseInDuration - In the implementation block
@property (nonatomic,readonly) double mainDuration;                  //@synthesize mainDuration=_mainDuration - In the implementation block
@property (nonatomic,readonly) double phaseOutDuration;              //@synthesize phaseOutDuration=_phaseOutDuration - In the implementation block
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 mainDuration:(double)arg2 phaseOutDuration:(double)arg3 ;
-(double)lowestDisplayTime;
-(double)showTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)showDurationForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForSlideAtIndex:(unsigned long long)arg1 ;
-(double)displayTimeForTextAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

