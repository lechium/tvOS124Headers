/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class _SUICRingLayer, _SUICProgressRingLayer, _SUICCheckGlyphLayer, UIImageView;

@interface SUICProgressIndicatorView : UIView {

	_SUICRingLayer* _shadowRingLayer;
	_SUICProgressRingLayer* _progressRingLayer;
	_SUICCheckGlyphLayer* _checkGlyphLayer;
	UIImageView* _actionArrowImageView;

}

@property (assign,getter=isArrowVisible,nonatomic) BOOL arrowVisible; 
@property (assign,nonatomic) double progressValue; 
@property (assign,getter=isSpinning,nonatomic) BOOL spinning; 
@property (assign,getter=isCheckmarkVisible,nonatomic) BOOL checkmarkVisible; 
@property (assign,getter=isDarkened,nonatomic) BOOL darkened; 
-(double)progressValue;
-(void)setProgressValue:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setArrowVisible:(BOOL)arg1 delay:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDarkened:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCheckmarkVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProgressValue:(double)arg1 ;
-(void)setCheckmarkVisible:(BOOL)arg1 ;
-(void)setDarkened:(BOOL)arg1 ;
-(BOOL)isCheckmarkVisible;
-(BOOL)isDarkened;
-(BOOL)isSpinning;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setSpinning:(BOOL)arg1 ;
-(BOOL)isArrowVisible;
-(void)setArrowVisible:(BOOL)arg1 ;
@end

