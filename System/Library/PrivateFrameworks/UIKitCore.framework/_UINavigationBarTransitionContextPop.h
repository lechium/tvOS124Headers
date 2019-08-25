/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationBarTransitionContext.h>

@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {

	CGRect _endingNewTitleViewFrame;
	CGRect _endingNewBackButtonFrame;
	CGSize _titleTransitionDistance;
	double _titleTransitionAdjustment;

}
-(void)animate;
-(void)_prepareContentView;
-(void)prepare;
-(int)transition;
-(void)complete;
-(void)cancel;
-(id)viewUsingEaseInCurve;
-(void)_prepareScaleTransition;
-(void)_prepareLargeTitleView;
-(void)_animateContentView;
-(void)_animateScaleTransition;
-(void)_animateLargeTitleView;
-(void)_finishWithFinalLayout:(id)arg1 finalLargeTitleLayout:(id)arg2 invalidLayout:(id)arg3 invalidLargeTitleLayout:(id)arg4 ;
@end

