/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UIWindow, TVLNavigationController, _TVLPlayerWindowRootViewController, TVLPlaybackViewController;

@interface TVLPlayerWindow : UIWindow {

	unsigned long long _state;
	/*^block*/id _dismissBlock;
	UIWindow* _previousKeyWindow;
	TVLNavigationController* _navigationController;
	_TVLPlayerWindowRootViewController* _blankViewController;

}

@property (nonatomic,retain) UIWindow * previousKeyWindow;                                          //@synthesize previousKeyWindow=_previousKeyWindow - In the implementation block
@property (assign,nonatomic,__weak) TVLNavigationController * navigationController;                 //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) _TVLPlayerWindowRootViewController * blankViewController;              //@synthesize blankViewController=_blankViewController - In the implementation block
@property (nonatomic,readonly) TVLPlaybackViewController * playbackViewController; 
@property (nonatomic,readonly) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
+(id)defaultWindow;
-(TVLPlaybackViewController *)playbackViewController;
-(void)didLoadViewController:(id)arg1 ;
-(_TVLPlayerWindowRootViewController *)blankViewController;
-(void)showWithPlaybackViewController:(id)arg1 ;
-(void)setBlankViewController:(_TVLPlayerWindowRootViewController *)arg1 ;
-(UIWindow *)previousKeyWindow;
-(void)setPreviousKeyWindow:(UIWindow *)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)state;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dismiss;
-(TVLNavigationController *)navigationController;
-(void)setNavigationController:(TVLNavigationController *)arg1 ;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
@end

