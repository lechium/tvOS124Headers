/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIViewControllerPreviewingDelegate_Private <NSObject>
@optional
-(void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2;
-(void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2;
-(id)committedViewControllerForPreviewViewController:(id)arg1;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
-(void)performCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1;

@end

