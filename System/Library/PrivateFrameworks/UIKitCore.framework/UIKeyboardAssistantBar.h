/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIGroupedBar.h>

@class UIKeyboardBIUImageGenerator, UIBarButtonItemGroup, UIBarButtonItem, NSLayoutConstraint, UITextInputAssistantItem, UIKeyboardCandidatePocketShadow;

@interface UIKeyboardAssistantBar : _UIGroupedBar {

	UIKeyboardBIUImageGenerator* m_BIUImageGenerator;
	UIBarButtonItemGroup* m_dismissGroup;
	UIBarButtonItem* m_dismissButton;
	UIBarButtonItem* m_writeboardButton;
	UIBarButtonItemGroup* m_predictionGroup;
	NSLayoutConstraint* m_predictionWidthConstraint;
	UITextInputAssistantItem* m_defaultAssistantItem;
	UITextInputAssistantItem* m_currentAssistantItem;
	UIKeyboardCandidatePocketShadow* m_rightBorder;
	int m_validateGuard;
	BOOL m_useLargeButton;
	BOOL m_isLandscape;
	BOOL m_lightKeyboard;
	BOOL m_needsDismissButton;
	BOOL m_needsUpdateBarOnMoveToWindow;
	BOOL m_show;
	CGRect m_splitGap;
	BOOL m_suppressAXSHairlineThickening;
	BOOL m_setShowsCandidateInline;
	BOOL _hideAssistantBar;
	BOOL _shouldShow;

}

@property (assign,nonatomic) BOOL hideAssistantBar;              //@synthesize hideAssistantBar=_hideAssistantBar - In the implementation block
@property (assign,nonatomic) BOOL show; 
@property (assign,nonatomic) BOOL shouldShow;                    //@synthesize shouldShow=_shouldShow - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
+(double)assistantBarHeight;
+(double)sideBarWidthForOrientation:(long long)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)show;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)enabled;
-(BOOL)statisticForCalloutBarButtonSelection:(id)arg1 ;
-(double)assistantBarHeightForOrientation:(long long)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(BOOL)shouldShow;
-(void)updateBar;
-(double)assistantBarHeight;
-(void)setInputAssistantButtonItems;
-(BOOL)hasItems;
-(void)setShow:(BOOL)arg1 ;
-(id)barButtonItem:(unsigned long long)arg1 ;
-(void)assistantCut;
-(void)assistantCopy;
-(void)assistantUndo;
-(void)assistantRedo;
-(void)assistantPaste;
-(void)assistantBold;
-(void)assistantItalic;
-(void)assistantUnderline;
-(id)BIUGenerator;
-(void)assistantDismiss;
-(void)assistantWriteboard;
-(id)newAssistantItemWithDefaultItems;
-(void)updateButtons;
-(BOOL)hasCustomButtons;
-(BOOL)disabledByPrediction;
-(BOOL)showSwitch;
-(double)deleteKeyWidth;
-(SEL)action:(int)arg1 ;
-(void)setHideAssistantBar:(BOOL)arg1 ;
-(BOOL)canPerformAction:(int)arg1 ;
-(void)executeAction:(int)arg1 ;
-(double)sideBarWidthForOrientation:(long long)arg1 ;
-(void)setShouldShow:(BOOL)arg1 ;
-(double)assistantBarWidth;
-(BOOL)enableInputClicksWhenVisible;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(void)updateBar:(BOOL)arg1 ;
-(CGRect)handwritingCandidateSelectionFrame;
-(id)deleteButtonItem;
-(void)showKeyboard:(id)arg1 ;
-(BOOL)hideAssistantBar;
-(id)defaultAssistantItem;
-(id)currentAssistantItem;
-(void)updatePredictionViewForCustomButtons;
-(void)statisticForShortcutBarHideWithSwitcher;
@end

