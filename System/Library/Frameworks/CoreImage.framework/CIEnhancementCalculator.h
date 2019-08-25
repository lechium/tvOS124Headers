/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIEnhancementCalculation.h>

@interface CIEnhancementCalculator : CIEnhancementCalculation {

	BOOL faceBalanceEnabled;
	BOOL vibranceEnabled;
	BOOL curvesEnabled;
	BOOL shadowsEnabled;

}

@property (assign) BOOL faceBalanceEnabled; 
@property (assign) BOOL vibranceEnabled; 
@property (assign) BOOL curvesEnabled; 
@property (assign) BOOL shadowsEnabled; 
-(void)setFaceBalanceEnabled:(BOOL)arg1 ;
-(void)setVibranceEnabled:(BOOL)arg1 ;
-(void)setCurvesEnabled:(BOOL)arg1 ;
-(void)setShadowsEnabled:(BOOL)arg1 ;
-(BOOL)faceBalanceEnabled;
-(void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3 ;
-(void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(BOOL)vibranceEnabled;
-(BOOL)curvesEnabled;
-(BOOL)shadowsEnabled;
-(void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3 ;
-(id)histogramFromRows:(id)arg1 componentOffset:(unsigned)arg2 ;
-(id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

