/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol LAUIDelegate, LAContextExternalizationProt;
@class MechanismContext, NSDictionary, NSMutableDictionary, NSError;

@interface MechanismBase : NSObject <LAUIDelegate> {

	/*^block*/id _replyToRun;
	MechanismContext* _mechanismContext;
	NSDictionary* _eventProcessing;
	NSMutableDictionary* _hints;
	BOOL _precedesUI;
	BOOL _restartable;
	BOOL _lastRestartAttempt;
	NSDictionary* _internalOptions;
	long long _policy;
	NSDictionary* _policyOptions;
	NSDictionary* _activationParams;
	id<LAUIDelegate> _eventsDelegate;
	id<LAContextExternalizationProt> _cachedExternalizationDelegate;
	long long _eventIdentifier;
	long long _remoteViewController;
	/*^block*/id _showUIBlock;
	MechanismBase* _companion;
	MechanismBase* _parent;
	NSError* _silentFailure;

}

@property (nonatomic,readonly) NSDictionary * internalOptions;                                                     //@synthesize internalOptions=_internalOptions - In the implementation block
@property (nonatomic,readonly) long long policy;                                                                   //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDictionary * policyOptions;                                                       //@synthesize policyOptions=_policyOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * activationParams;                                                      //@synthesize activationParams=_activationParams - In the implementation block
@property (assign,nonatomic,__weak) id<LAUIDelegate> eventsDelegate;                                               //@synthesize eventsDelegate=_eventsDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<LAContextExternalizationProt> cachedExternalizationDelegate;              //@synthesize cachedExternalizationDelegate=_cachedExternalizationDelegate - In the implementation block
@property (nonatomic,readonly) long long eventIdentifier;                                                          //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) long long remoteViewController;                                                     //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,readonly) BOOL precedesUI;                                                                    //@synthesize precedesUI=_precedesUI - In the implementation block
@property (nonatomic,copy) id showUIBlock;                                                                         //@synthesize showUIBlock=_showUIBlock - In the implementation block
@property (nonatomic,retain) MechanismBase * companion;                                                            //@synthesize companion=_companion - In the implementation block
@property (assign,nonatomic,__weak) MechanismBase * parent;                                                        //@synthesize parent=_parent - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isRestartable,nonatomic,readonly) BOOL restartable;                                              //@synthesize restartable=_restartable - In the implementation block
@property (getter=isLastRestartAttempt,nonatomic,readonly) BOOL lastRestartAttempt;                                //@synthesize lastRestartAttempt=_lastRestartAttempt - In the implementation block
@property (nonatomic,retain) NSError * silentFailure;                                                              //@synthesize silentFailure=_silentFailure - In the implementation block
-(long long)policy;
-(void)cancelAuthentication;
-(id)externalizedContext;
-(void)willFinish;
-(void)failAuthenticationWithError:(id)arg1 ;
-(void)noResponseEventWithParams:(id)arg1 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 skipReply:(BOOL)arg3 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(void)succeedAuthenticationWithResult:(id)arg1 ;
-(BOOL)isAvailableForPurpose:(long long)arg1 error:(id*)arg2 ;
-(BOOL)isProcessedBy:(id)arg1 ;
-(id)availabilityEventsForPurpose:(long long)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(id<LAContextExternalizationProt>)cachedExternalizationDelegate;
-(void)subMechanismCanRestart:(id)arg1 ;
-(void)fallbackToIdentifier:(long long)arg1 ;
-(id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 cachedExternalizationDelegate:(id)arg3 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)succeedAuthenticationWithDefaultResult;
-(id)bestEffortAvailableMechanismForPurpose:(long long)arg1 error:(id*)arg2 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(id)findMechanismToRetryWithEventIdentifier:(long long)arg1 ;
-(id)backgroundMechanismForEventProcessing:(id)arg1 ;
-(long long)remoteViewControllerForEventProcessing:(id)arg1 ;
-(id)adjustStringForNestedDescription:(id)arg1 ;
-(BOOL)requiresUiWithEventProcessing:(id)arg1 ;
-(void)setCredential:(id)arg1 credentialType:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(id)additionalControllerInternalInfoForPolicy:(long long)arg1 ;
-(void)restartWithEventIdentifier:(long long)arg1 lastAttempt:(BOOL)arg2 ;
-(void)companionStateChanged:(id)arg1 newState:(BOOL)arg2 ;
-(void)prepareForRestart;
-(void)setShowingCoachingHint:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(NSDictionary *)internalOptions;
-(NSDictionary *)policyOptions;
-(NSDictionary *)activationParams;
-(void)setActivationParams:(NSDictionary *)arg1 ;
-(id<LAUIDelegate>)eventsDelegate;
-(void)setEventsDelegate:(id<LAUIDelegate>)arg1 ;
-(BOOL)precedesUI;
-(id)showUIBlock;
-(void)setShowUIBlock:(id)arg1 ;
-(BOOL)isRestartable;
-(BOOL)isLastRestartAttempt;
-(NSError *)silentFailure;
-(void)setSilentFailure:(NSError *)arg1 ;
-(void)setParent:(MechanismBase *)arg1 ;
-(MechanismBase *)companion;
-(void)setCompanion:(MechanismBase *)arg1 ;
-(long long)eventIdentifier;
-(BOOL)isRunning;
-(long long)remoteViewController;
-(MechanismBase *)parent;
-(id)initWithParams:(id)arg1 ;
@end

