/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
@optional
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(BOOL)_shouldUpdateFocusInContext:(id)arg1;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(id)_focusMapContainer;
-(id)_overridingPreferredFocusEnvironment;

@end
