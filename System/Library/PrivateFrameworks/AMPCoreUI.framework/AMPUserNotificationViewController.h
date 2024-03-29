/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AMPCoreUI/AMPCoreUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <AMPCoreUI/AMPUserNotificationContentDelegate.h>

@protocol AMSURLBagContract;
@class AMPUserNotificationContentViewController, NSString;

@interface AMPUserNotificationViewController : UIViewController <AMPUserNotificationContentDelegate> {

	id<AMSURLBagContract> _bagContract;
	AMPUserNotificationContentViewController* _contentViewController;

}

@property (nonatomic,retain) AMPUserNotificationContentViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) id<AMSURLBagContract> bagContract;                                             //@synthesize bagContract=_bagContract - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userNotificationFromNotification:(id)arg1 ;
-(void)viewController:(id)arg1 didUpdatePreferredContentSize:(CGSize)arg2 ;
-(void)openNotification;
-(id<AMSURLBagContract>)bagContract;
-(void)setBagContract:(id<AMSURLBagContract>)arg1 ;
-(void)setContentViewController:(AMPUserNotificationContentViewController *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(AMPUserNotificationContentViewController *)contentViewController;
@end

