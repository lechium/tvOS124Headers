/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBWorkspaceScene.h>

@class NSMutableSet, NSMutableArray, BKSProcessAssertion;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {

	NSMutableSet* _allWatchdogs;
	NSMutableArray* _watchdogStack;
	BKSProcessAssertion* _resumeProcessAssertion;
	BKSProcessAssertion* _suspendingProcessAssertion;
	BKSProcessAssertion* _seoProcessAssertion;
	BKSProcessAssertion* _deliverMessageProcessAssertion;
	unsigned long long _deliverMessageProcessAssertionCount;
	BOOL _createResponseReceived;

}
-(id)initWithParentWorkspace:(id)arg1 identifier:(id)arg2 ;
-(void)_workspaceQueue_invalidate;
-(id)parentWorkspace;
-(id)_workspaceQueue_process;
-(void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_workspaceQueue_cancelAllWatchdogTimers;
-(void)_workspaceQueue_dropAllProcessAssertions;
-(void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1 ;
-(void)_workspaceQueue_dropSuspendingProcessAssertion;
-(void)_workspaceQueue_takeSuspendingProcessAssertion;
-(void)_workspaceQueue_dropSEOProcessAssertion;
-(void)_workspaceQueue_dropResumeProcessAssertion;
-(void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1 ;
-(void)_workspaceQueue_dropDeliverMessageProcessAssertion;
-(unsigned long long)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)_workspaceQueue_createWatchdogForSceneAction:(unsigned long long)arg1 transitionContext:(id)arg2 ;
-(void)_workspaceQueue_cancelWatchdogTimer:(id)arg1 ;
-(void)_workspaceQueue_activateResponseReceived:(id)arg1 ;
-(void)_workspaceQueue_activateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_deactivateResponseReceived:(id)arg1 ;
-(void)_workspaceQueue_deactivateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(/*^block*/id)arg4 ;
-(void)_workspaceQueue_performGracefulExitWithDeliveryConfirmation:(/*^block*/id)arg1 ;
-(void)_dispatchBlockAfterProcessLaunch:(/*^block*/id)arg1 ;
-(void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1 ;
-(long long)_workspaceQueue_lifecycleStateForSettings:(id)arg1 ;
-(void)_workspaceQueue_takeAssertionsForDeactivation:(BOOL)arg1 transitionContext:(id)arg2 ;
-(int)_workspaceQueue_pid;
-(id)_workspaceQueue_newProcessAssertionForReason:(unsigned)arg1 withName:(id)arg2 transitionContext:(id)arg3 acquireSynchronously:(BOOL)arg4 ;
-(void)_workspaceQueue_dropDeliverMessageProcessAssertion:(BOOL)arg1 ;
-(void)dealloc;
@end

