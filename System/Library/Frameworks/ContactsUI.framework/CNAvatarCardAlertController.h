/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNAvatarCardController.h>
#import <libobjc.A.dylib/CNQuickActionsManagerDelegate.h>
#import <UIKit/UIAlertControllerSystemProvidedPresentationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, CNQuickActionsManager, NSArray, UIAlertController, NSString;

@interface CNAvatarCardAlertController : CNAvatarCardController <CNQuickActionsManagerDelegate, UIAlertControllerSystemProvidedPresentationDelegate, UIGestureRecognizerDelegate> {

	UIView* _sourceView;
	BOOL _expanded;
	CNQuickActionsManager* _actionsManager;
	NSArray* _actions;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) CNQuickActionsManager * actionsManager;              //@synthesize actionsManager=_actionsManager - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                   //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                       //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                 //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActionsManager:(CNQuickActionsManager *)arg1 ;
-(CNQuickActionsManager *)actionsManager;
-(void)_updateWithActions:(id)arg1 ;
-(void)_refreshAlertController;
-(void)setContact:(id)arg1 ;
-(void)_updateActions;
-(void)_performAction:(id)arg1 ;
-(id)init;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(NSArray *)actions;
-(BOOL)isVisible;
-(UIAlertController *)alertController;
-(id)_presentingViewControllerForSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(BOOL)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2 ;
-(id)sourceView;
-(void)setSourceView:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setActions:(NSArray *)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

