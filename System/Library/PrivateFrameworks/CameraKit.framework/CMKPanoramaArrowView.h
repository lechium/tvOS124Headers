/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, CAShapeLayer;

@interface CMKPanoramaArrowView : UIView {

	UIImageView* _arrowHead;
	UIView* _arrowTail;
	CAShapeLayer* _arrowTailPiecesLayer;
	CGPathRef _currentTailPiecesPath;
	CGRect _arrowTailRect;
	double _currentNormalizedSpeed;
	double _tailBiggestDelta;
	double _tailBigDelta;
	double _tailMediumDelta;
	double _tailSmallDelta;

}
-(CGPathRef)_newTailPiecesPathOfWidth:(double*)arg1 ;
-(void)_updateTailWithAnimationDuration:(double)arg1 ;
-(void)resetArrow;
-(void)animateArrowSpeedWithNormalizedSpeed:(double)arg1 duration:(double)arg2 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
@end

