/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/_TVMLBrowserViewController.h>

@interface VUIProductBrowserViewController : _TVMLBrowserViewController {

	BOOL _transitionAnimationEnabled;

}

@property (assign,getter=isTransitionAnimationEnabled,nonatomic) BOOL transitionAnimationEnabled;              //@synthesize transitionAnimationEnabled=_transitionAnimationEnabled - In the implementation block
+(Class)browserCellClass;
-(id)init;
-(void)setTransitionAnimationEnabled:(BOOL)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2 ;
-(BOOL)isTransitionAnimationEnabled;
-(id)mediaInfoForElement:(id)arg1 ;
-(id)documentControllerForElement:(id)arg1 ;
@end
