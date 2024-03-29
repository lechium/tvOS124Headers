/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol UIFocusedInterfaceActionPressDelegate;
@class UIInterfaceActionGroupView, UIInterfaceAction;

@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer {

	id<UIFocusedInterfaceActionPressDelegate> _pressDelegate;
	UIInterfaceActionGroupView* _actionGroupView;
	UIInterfaceAction* _interfaceActionOnPressBegan;

}

@property (assign,nonatomic,__weak) UIInterfaceAction * interfaceActionOnPressBegan;                      //@synthesize interfaceActionOnPressBegan=_interfaceActionOnPressBegan - In the implementation block
@property (assign,nonatomic,__weak) id<UIFocusedInterfaceActionPressDelegate> pressDelegate;              //@synthesize pressDelegate=_pressDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIInterfaceActionGroupView * actionGroupView;                         //@synthesize actionGroupView=_actionGroupView - In the implementation block
-(UIInterfaceActionGroupView *)actionGroupView;
-(id)initWithFocusedInterfaceActionPressDelegate:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_gestureChanged:(id)arg1 ;
-(id<UIFocusedInterfaceActionPressDelegate>)pressDelegate;
-(void)setInterfaceActionOnPressBegan:(UIInterfaceAction *)arg1 ;
-(UIInterfaceAction *)interfaceActionOnPressBegan;
-(void)reset;
-(void)setPressDelegate:(id<UIFocusedInterfaceActionPressDelegate>)arg1 ;
-(void)setActionGroupView:(UIInterfaceActionGroupView *)arg1 ;
@end

