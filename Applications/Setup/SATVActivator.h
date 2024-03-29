//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "RemoteUIControllerDelegate.h"

@class NSMutableArray, NSString, NSTimer, RUIPage, RemoteUIController, SATVActivationEngine, TVSStateMachine, UINavigationController;

@interface SATVActivator : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, RemoteUIControllerDelegate>
{
    SATVActivationEngine *_engine;	// 8 = 0x8
    RemoteUIController *_remoteUIController;	// 16 = 0x10
    NSMutableArray *_objectModels;	// 24 = 0x18
    RUIPage *_loadingPage;	// 32 = 0x20
    NSTimer *_ticketAcceptedTimer;	// 40 = 0x28
    id <SATVActivatorDelegate> _delegate;	// 48 = 0x30
    UINavigationController *_navigationController;	// 56 = 0x38
    TVSStateMachine *_stateMachine;	// 64 = 0x40
}

+ (_Bool)_hasDeKOTAFlagInActivationRecord;	// IMP=0x000000010004a3c8
+ (unsigned long long)_successTypeForActivationState:(id)arg1;	// IMP=0x00000001000455a8
+ (_Bool)isBricked;	// IMP=0x0000000100045564
+ (_Bool)isDeviceFactoryActivated;	// IMP=0x0000000100045508
+ (_Bool)isDeviceActivated;	// IMP=0x00000001000454ac
+ (id)_activationState;	// IMP=0x00000001000453d4
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SATVActivatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010004a6b8
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;	// IMP=0x000000010004a1a4
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;	// IMP=0x000000010004a040
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(_Bool)arg3;	// IMP=0x0000000100049f10
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;	// IMP=0x0000000100049c00
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x0000000100049824
- (void)_dismissRemoteUI;	// IMP=0x00000001000496dc
- (void)_loadCloudConfig;	// IMP=0x00000001000494b4
- (void)_checkActivationFailIfBricked:(_Bool)arg1;	// IMP=0x00000001000492c8
- (void)_activationStateChanged;	// IMP=0x0000000100049178
- (void)_ticketAcceptedDidTimeout;	// IMP=0x0000000100049058
- (void)_clearTicketAcceptedTimer;	// IMP=0x0000000100048f84
- (void)_activationDidFailWithReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000100048d34
- (void)_activationSucceeded;	// IMP=0x0000000100048a30
- (void)_cleanup;	// IMP=0x0000000100048968
- (void)_handleActivationFailureWithError:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000100048644
- (void)_handleActivationResponse:(id)arg1;	// IMP=0x00000001000481c0
- (void)_activateDeviceWithResponse:(id)arg1;	// IMP=0x0000000100047cb0
- (void)_startRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004783c
- (void)_tryActivateWithOptions:(id)arg1 requestMutator:(CDUnknownBlockType)arg2;	// IMP=0x0000000100047310
- (void)_startActivation;	// IMP=0x0000000100046f14
- (void)_setTimeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100046b24
- (void)_configureStateMachine;	// IMP=0x00000001000458f4
- (void)start;	// IMP=0x0000000100045824
- (void)dealloc;	// IMP=0x00000001000457ac
- (id)init;	// IMP=0x0000000100045648

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

