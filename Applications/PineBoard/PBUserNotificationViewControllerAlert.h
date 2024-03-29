//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSUITextAlertController.h"

#import "PBUserNotificationViewController.h"

@class NSString, PBCFUserNotification;

@interface PBUserNotificationViewControllerAlert : TVSUITextAlertController <PBUserNotificationViewController>
{
    PBCFUserNotification *_notification;	// 8 = 0x8
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;	// IMP=0x00000001000f08c0
- (void)_didSelectButtonAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000f0810
- (void)updateWithNotification:(id)arg1;	// IMP=0x00000001000effe8
- (void)_handleHomeButton;	// IMP=0x00000001000efd08
- (void)_handleMenuButton;	// IMP=0x00000001000efc24
- (void)viewDidLoad;	// IMP=0x00000001000ef9dc
- (id)init;	// IMP=0x00000001000ef980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

