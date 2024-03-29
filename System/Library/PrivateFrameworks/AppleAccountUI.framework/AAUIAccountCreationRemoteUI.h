/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol AAUIAccountCreationDelegate;
@class RUILoader, NSMutableArray, UINavigationController, UIAlertView, AASetupAssistantService, AAAutoAccountVerifier, NSString;

@interface AAUIAccountCreationRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {

	BOOL _isModal;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	UINavigationController* _parentNavController;
	UINavigationController* _createAccountNavController;
	UIAlertView* _tcConfirmationAlert;
	UIAlertView* _failedToCreateAccountAlert;
	BOOL _over13;
	AASetupAssistantService* _aaService;
	AAAutoAccountVerifier* _verifier;
	id<AAUIAccountCreationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupLoader;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)loadURLRequest:(id)arg1 addHeaders:(BOOL)arg2 ;
-(void)_createAppleIDWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_createAppleAccount;
-(void)_cleanupCreateAppleID:(id)arg1 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)_userAgreedToTCs:(BOOL)arg1 ;
-(id)initWithNavController:(id)arg1 isModal:(BOOL)arg2 ;
-(void)loadURLRequest:(id)arg1 ;
-(void)objectModelDidChange:(id)arg1 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<AAUIAccountCreationDelegate>)arg1 ;
-(id<AAUIAccountCreationDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

