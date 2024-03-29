/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSViewServiceProtocol.h>
#import <libobjc.A.dylib/VSIdentityProviderPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderViewControllerDelegate.h>
#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSPersistentStorage, VSRestrictionsCenter, VSRemoteNotifier, VSPreferences, BKSApplicationStateMonitor, NSOperationQueue, VSOptional, UINavigationController, VSAuditToken, NSString;

@interface VSViewServiceViewController : UIViewController <VSViewServiceProtocol, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate> {

	BOOL _presentedInHost;
	BOOL _identityProviderPickerRequired;
	BOOL _didAuthenticateAccount;
	VSPersistentStorage* _storage;
	VSRestrictionsCenter* _restrictionsCenter;
	VSRemoteNotifier* _remoteNotifier;
	VSPreferences* _preferences;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSOperationQueue* _privateQueue;
	VSOptional* _currentRequest;
	VSOptional* _currentRequestID;
	UINavigationController* _navController;
	VSAuditToken* _auditToken;

}

@property (nonatomic,retain) VSPersistentStorage * storage;                                                            //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSRestrictionsCenter * restrictionsCenter;                                                //@synthesize restrictionsCenter=_restrictionsCenter - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                                                        //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                                              //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * appStateMonitor;                                             //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                                          //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) VSOptional * currentRequest;                                                                //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) VSOptional * currentRequestID;                                                            //@synthesize currentRequestID=_currentRequestID - In the implementation block
@property (assign,getter=isPresentedInHost,nonatomic) BOOL presentedInHost;                                            //@synthesize presentedInHost=_presentedInHost - In the implementation block
@property (assign,getter=isIdentityProviderPickerRequired,nonatomic) BOOL identityProviderPickerRequired;              //@synthesize identityProviderPickerRequired=_identityProviderPickerRequired - In the implementation block
@property (assign,nonatomic) BOOL didAuthenticateAccount;                                                              //@synthesize didAuthenticateAccount=_didAuthenticateAccount - In the implementation block
@property (nonatomic,retain) UINavigationController * navController;                                                   //@synthesize navController=_navController - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                                  //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(VSPersistentStorage *)storage;
-(VSOptional *)currentRequest;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)setCurrentRequest:(VSOptional *)arg1 ;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)setCurrentRequestID:(VSOptional *)arg1 ;
-(VSOptional *)currentRequestID;
-(void)_request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_performRequest:(id)arg1 withIdentifier:(id)arg2 ;
-(void)identityProviderPickerViewControllerDidCancel:(id)arg1 ;
-(void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2 ;
-(void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)arg1 ;
-(void)dismissIdentityProviderViewController:(id)arg1 ;
-(void)identityProviderViewControllerDidCancel:(id)arg1 ;
-(void)identityProviderViewControllerDidFinishLoading:(id)arg1 ;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3 ;
-(void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3 ;
-(VSRestrictionsCenter *)restrictionsCenter;
-(void)setRestrictionsCenter:(VSRestrictionsCenter *)arg1 ;
-(void)_performRequestInternal:(id)arg1 withID:(id)arg2 identityProviders:(id)arg3 accounts:(id)arg4 ;
-(void)setDidAuthenticateAccount:(BOOL)arg1 ;
-(void)setIdentityProviderPickerRequired:(BOOL)arg1 ;
-(void)_performRequestWithIdentityProvider:(id)arg1 account:(id)arg2 ;
-(void)_requestDidFailWithError:(id)arg1 ;
-(void)_didDetermineIdentityProvider:(id)arg1 withPickerViewController:(id)arg2 ;
-(void)_showIdentityProviderPickerViewControllerWithIdentityProviders:(id)arg1 ;
-(void)_completeRequestWithResponse:(id)arg1 ;
-(id)_identityProviderRequestForViewServiceRequest:(id)arg1 withAccount:(id)arg2 ;
-(BOOL)isIdentityProviderPickerRequired;
-(void)_presentInHostIfNecessary;
-(id)_viewControllerHost;
-(BOOL)isPresentedInHost;
-(void)setPresentedInHost:(BOOL)arg1 ;
-(id)_viewServiceResponseWithIdentityProviderResponse:(id)arg1 ;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(void)_presentWelcomeMessageForIdentityProvider:(id)arg1 withLogoCacheURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_dismissInHostIfNecessary;
-(void)_completeRequest:(id)arg1 withResponse:(id)arg2 ;
-(void)_didCancelRequest;
-(void)_completeRequestWithResponse:(id)arg1 fromIdentityProvider:(id)arg2 ;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(BOOL)didAuthenticateAccount;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UINavigationController *)navController;
-(void)_viewControllerWasDismissed;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSAuditToken *)auditToken;
-(void)_willAppearInRemoteViewController;
-(VSPreferences *)preferences;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
@end

