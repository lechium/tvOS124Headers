/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>
@optional
-(id)_transitionCoordinator;
-(BOOL)isNavigationBarHidden;
-(void)_updatePaletteConstraints;
-(void)_updatePalettesWithBlock:(/*^block*/id)arg1;
-(void)_navigationBarDidChangeStyle:(id)arg1;
-(void)navigationBarDidChangeOpacity:(id)arg1;
-(void)_navigationBarDidEndAnimation:(id)arg1;
-(NSDirectionalEdgeInsets*)_layoutMarginsforNavigationBar:(id)arg1;
-(BOOL)enableBackButtonDuringTransition;
-(void)navigationBarDidResizeForPrompt:(id)arg1;
-(void)_navigationBarChangedSize:(id)arg1;
-(void)_navigationBarWillBeginCoordinatedTransitionAnimations:(id)arg1;
-(CGRect*)_incomingNavigationBarFrame;
-(BOOL)_hasInterruptibleNavigationTransition;
-(BOOL)_willPerformCustomNavigationTransitionForPush;
-(BOOL)_shouldCrossFadeNavigationBar;
-(double)_customNavigationTransitionDuration;
-(BOOL)_willPerformCustomNavigationTransitionForPop;
-(BOOL)_isInteractiveCustomNavigationTransition;
-(BOOL)_navigationBarShouldUpdateProgress;
-(void)_navigationItemDidUpdateSearchController:(id)arg1 oldSearchController:(id)arg2;

@end

