/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject {

	_UIKeyboardAnimatorAnimationStyle* _style;

}
-(id)init;
-(void)applyToKeyboardOperations:(/*^block*/id)arg1 ;
-(void)performAnimation:(/*^block*/id)arg1 afterStarted:(/*^block*/id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)prepareForAnimationWithState:(id)arg1 ;
-(void)runAnimationWithState:(id)arg1 ;
-(void)completeAnimationWithState:(id)arg1 ;
@end

