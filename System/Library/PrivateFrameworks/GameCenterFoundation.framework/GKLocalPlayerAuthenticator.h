/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class NSString, GKLocalPlayer, NSDate, UIViewController, RemoteUIController, UINavigationController, NSMutableArray, GKDispatchGroup;

@interface GKLocalPlayerAuthenticator : NSObject <RemoteUIControllerDelegate> {

	NSString* _username;
	NSString* _password;
	GKLocalPlayer* _resultantLocalPlayer;
	GKLocalPlayer* _inputLocalPlayer;
	BOOL _authenticated;
	BOOL _authenticating;
	BOOL _forceAuthentication;
	NSDate* _lastAuthDate;
	NSString* _lastAuthPlayerID;
	NSString* _alertTitle;
	NSString* _alertMessage;
	BOOL _userShouldSkipCreateAppleID;
	UIViewController* _presentingViewController;
	RemoteUIController* _remoteU13Controller;
	UINavigationController* _u13NavigationController;
	NSMutableArray* _u13ObjectModels;
	GKDispatchGroup* _u13Group;

}

@property (nonatomic,retain) RemoteUIController * remoteU13Controller;                      //@synthesize remoteU13Controller=_remoteU13Controller - In the implementation block
@property (nonatomic,retain) UINavigationController * u13NavigationController;              //@synthesize u13NavigationController=_u13NavigationController - In the implementation block
@property (nonatomic,retain) NSMutableArray * u13ObjectModels;                              //@synthesize u13ObjectModels=_u13ObjectModels - In the implementation block
@property (nonatomic,retain) GKDispatchGroup * u13Group;                                    //@synthesize u13Group=_u13Group - In the implementation block
@property (assign,nonatomic) BOOL userShouldSkipCreateAppleID;                              //@synthesize userShouldSkipCreateAppleID=_userShouldSkipCreateAppleID - In the implementation block
@property (assign) BOOL forceAuthentication;                                                //@synthesize forceAuthentication=_forceAuthentication - In the implementation block
@property (retain) GKLocalPlayer * resultantLocalPlayer;                                    //@synthesize resultantLocalPlayer=_resultantLocalPlayer - In the implementation block
@property (retain) GKLocalPlayer * inputLocalPlayer;                                        //@synthesize inputLocalPlayer=_inputLocalPlayer - In the implementation block
@property (retain) NSString * alertTitle;                                                   //@synthesize alertTitle=_alertTitle - In the implementation block
@property (retain) NSString * alertMessage;                                                 //@synthesize alertMessage=_alertMessage - In the implementation block
@property (getter=isAuthenticated) BOOL authenticated;                                      //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isAuthenticating) BOOL authenticating;                                    //@synthesize authenticating=_authenticating - In the implementation block
@property (retain) NSDate * lastAuthDate;                                                   //@synthesize lastAuthDate=_lastAuthDate - In the implementation block
@property (retain) NSString * lastAuthPlayerID;                                             //@synthesize lastAuthPlayerID=_lastAuthPlayerID - In the implementation block
@property (copy) NSString * username;                                                       //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                                                       //@synthesize password=_password - In the implementation block
@property (assign) UIViewController * presentingViewController;                             //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authenticatorForExistingPlayer:(id)arg1 ;
+(id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 ;
+(id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2 ;
+(void)postURL:(id)arg1 postBody:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3 ;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setInputLocalPlayer:(GKLocalPlayer *)arg1 ;
-(void)_authenticateUsingAuthUI:(BOOL)arg1 authenticationResults:(id)arg2 usernameEditable:(BOOL)arg3 authUIDismissHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)forceAuthentication;
-(void)setAuthenticating:(BOOL)arg1 ;
-(GKLocalPlayer *)resultantLocalPlayer;
-(BOOL)isAuthenticating;
-(void)cancelAuthDueToAuthKitErrorWithHandler:(/*^block*/id)arg1 ;
-(GKLocalPlayer *)inputLocalPlayer;
-(void)setLastAuthDate:(NSDate *)arg1 ;
-(void)setResultantLocalPlayer:(GKLocalPlayer *)arg1 ;
-(void)authenticateUsingAuthUIWithAuthUIDismissHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateUsingAuthUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldAuthenticateForGameCenter;
-(void)authenticateWithAuthKitResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateExistingUserAuthUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticationDidComplete;
-(NSDate *)lastAuthDate;
-(NSString *)lastAuthPlayerID;
-(void)setLastAuthPlayerID:(NSString *)arg1 ;
-(NSString *)alertMessage;
-(RemoteUIController *)remoteU13Controller;
-(void)setRemoteU13Controller:(RemoteUIController *)arg1 ;
-(UINavigationController *)u13NavigationController;
-(void)setU13NavigationController:(UINavigationController *)arg1 ;
-(NSMutableArray *)u13ObjectModels;
-(void)setU13ObjectModels:(NSMutableArray *)arg1 ;
-(GKDispatchGroup *)u13Group;
-(void)setU13Group:(GKDispatchGroup *)arg1 ;
-(BOOL)userShouldSkipCreateAppleID;
-(void)setUserShouldSkipCreateAppleID:(BOOL)arg1 ;
-(void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg1 usernameEditable:(BOOL)arg2 dismissHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isAuthenticated;
-(void)setPassword:(NSString *)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setForceAuthentication:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(UIViewController *)presentingViewController;
-(void)reset;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(NSString *)username;
-(NSString *)password;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)alertTitle;
@end
