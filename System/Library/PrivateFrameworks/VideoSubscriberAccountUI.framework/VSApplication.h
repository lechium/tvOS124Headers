/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppContextDelegate.h>
#import <libobjc.A.dylib/VSStateMachineDelegate.h>
#import <libobjc.A.dylib/IKApplication.h>

@protocol VSApplicationDelegate;
@class NSURL, IKAppContext, VSAuditToken, VSStateMachine, VSAppDeviceConfig, NSHTTPCookieStorage, NSError, NSString;

@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication> {

	BOOL _shouldAllowRemoteInspection;
	NSURL* _bootURL;
	IKAppContext* _appContext;
	id<VSApplicationDelegate> _delegate;
	VSAuditToken* _auditToken;
	VSStateMachine* _stateMachine;
	VSAppDeviceConfig* _appDeviceConfig;
	NSHTTPCookieStorage* _cookieStorage;
	NSError* _failureToStart;

}

@property (nonatomic,retain) VSStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) VSAppDeviceConfig * appDeviceConfig;                    //@synthesize appDeviceConfig=_appDeviceConfig - In the implementation block
@property (nonatomic,retain) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSHTTPCookieStorage * cookieStorage;                    //@synthesize cookieStorage=_cookieStorage - In the implementation block
@property (nonatomic,retain) NSError * failureToStart;                               //@synthesize failureToStart=_failureToStart - In the implementation block
@property (nonatomic,copy,readonly) NSURL * bootURL;                                 //@synthesize bootURL=_bootURL - In the implementation block
@property (assign,nonatomic,__weak) id<VSApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowRemoteInspection;                       //@synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(id)appIdentifier;
-(id)initWithBootURL:(id)arg1 ;
-(void)setShouldAllowRemoteInspection:(BOOL)arg1 ;
-(void)sendErrorWithMessage:(id)arg1 ;
-(void)appDocumentForDocument:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transitionToReadyState;
-(void)transitionToInvalidState;
-(NSError *)failureToStart;
-(void)setFailureToStart:(NSError *)arg1 ;
-(NSHTTPCookieStorage *)cookieStorage;
-(VSAppDeviceConfig *)appDeviceConfig;
-(void)transitionToStartingState;
-(void)transitionToNotifyingOfFailureToStartState;
-(void)transitionToStoppingState;
-(void)setAppDeviceConfig:(VSAppDeviceConfig *)arg1 ;
-(void)setCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(BOOL)shouldIgnoreJSValidation;
-(id)appJSURL;
-(id)vendorIdentifier;
-(id)localStorage;
-(id)vendorStorage;
-(id)userDefaultsStorage;
-(BOOL)shouldAllowRemoteInspection;
-(BOOL)appIsTrusted;
-(id)appLaunchParams;
-(id)viewElementRegistry;
-(NSURL *)bootURL;
-(void)evaluate:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(void)setDelegate:(id<VSApplicationDelegate>)arg1 ;
-(id<VSApplicationDelegate>)delegate;
-(void)stop;
-(void)start;
-(VSAuditToken *)auditToken;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(VSStateMachine *)stateMachine;
-(void)setStateMachine:(VSStateMachine *)arg1 ;
-(id)activeDocument;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)objectForPlayer:(id)arg1 ;
-(id)objectForPlaylist:(id)arg1 ;
-(id)objectForMediaItem:(id)arg1 ;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(id)xhrSessionConfigurationForContext:(id)arg1 ;
-(id)sourceApplicationBundleIdentifierForContext:(id)arg1 ;
-(id)sourceApplicationAuditTokenDataForContext:(id)arg1 ;
@end

