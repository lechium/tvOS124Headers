/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBackdropView.h>

@interface BSUIBackdropView : _UIBackdropView {

	double _transitionProgress;
	double _initialScale;
	double _finalScale;
	double _scaleForNoBlur;
	double _rasterizationScale;

}

@property (assign,nonatomic) double scaleForNoBlur;                  //@synthesize scaleForNoBlur=_scaleForNoBlur - In the implementation block
@property (assign,nonatomic) double rasterizationScale;              //@synthesize rasterizationScale=_rasterizationScale - In the implementation block
-(double)scaleForNoBlur;
-(void)setScaleForNoBlur:(double)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)transitionComplete;
-(double)rasterizationScale;
@end

