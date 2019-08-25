/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

	BOOL _connected;
	BOOL _shouldAnimateConnection;

}
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(double)alphaForConnected:(BOOL)arg1 ;
-(void)_blinkAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)performPendedActions;
@end

