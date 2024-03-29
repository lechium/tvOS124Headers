/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIViewController, UIPopoverController, NSString;

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {

	long long _type;
	UIViewController* _modalViewController;
	UIPopoverController* _popoverController;
	BOOL _isTextEffectsWindow;
	BOOL _dismissed;
	/*^block*/id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;                     //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowTextServices;
+(id)showServiceForType:(long long)arg1 withContext:(id)arg2 ;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
+(id)textServiceSessionForType:(long long)arg1 ;
+(BOOL)shouldPresentAsPopoverForServiceOfType:(long long)arg1 inView:(id)arg2 ;
-(id)init;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(BOOL)isDisplaying;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)setDismissedHandler:(id)arg1 ;
-(void)_endSession;
-(void)sessionDidDismiss;
-(id)dismissedHandler;
@end

