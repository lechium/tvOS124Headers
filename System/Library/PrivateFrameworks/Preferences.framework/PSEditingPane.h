/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>

@class PSSpecifier, UIViewController;

@interface PSEditingPane : UIView {

	PSSpecifier* _specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(float)preferredHeight;
+(id)defaultBackgroundColor;
-(id)childViewControllerForHostingViewController;
-(BOOL)shouldInsetContent;
-(void)insetContent;
-(BOOL)requiresKeyboard;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 ;
-(void)viewDidBecomeVisible;
-(id)preferenceSpecifier;
-(id)preferenceValue;
-(BOOL)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)specifierLabel;
-(BOOL)wantsNewButton;
-(void)addNewValue;
-(void)doneEditing;
-(void)editMode;
-(BOOL)changed;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(CGRect)contentRect;
@end

