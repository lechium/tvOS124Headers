/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TVLPlayerWindow;

@interface _TVLPlayerWindowRootViewController : UIViewController {

	BOOL appearedOnce;
	TVLPlayerWindow* _playerWindow;

}

@property (assign,nonatomic,__weak) TVLPlayerWindow * playerWindow;              //@synthesize playerWindow=_playerWindow - In the implementation block
-(void)setPlayerWindow:(TVLPlayerWindow *)arg1 ;
-(TVLPlayerWindow *)playerWindow;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

