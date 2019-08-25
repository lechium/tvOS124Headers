/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow;

@interface TVStorePlaybackLaunchShroud : NSObject {

	BOOL _hidden;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                        //@synthesize window=_window - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
+(id)sharedShroud;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_hideWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_showWithFadeAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(UIWindow *)window;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)fadeOut;
@end
