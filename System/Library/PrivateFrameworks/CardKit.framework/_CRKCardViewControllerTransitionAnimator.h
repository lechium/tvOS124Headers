/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CRKCardViewControllerTransitionAnimatorDelegate;
@interface _CRKCardViewControllerTransitionAnimator : NSObject {

	id<_CRKCardViewControllerTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKCardViewControllerTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sectionShuffleTransitionAnimator;
-(void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<_CRKCardViewControllerTransitionAnimatorDelegate>)arg1 ;
-(id<_CRKCardViewControllerTransitionAnimatorDelegate>)delegate;
@end

