/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TURepeatingAction;

@interface TURepeatingActor : NSObject {

	BOOL _stopped;
	BOOL _currentlyPerformingAction;
	NSObject*<OS_dispatch_queue> _queue;
	TURepeatingAction* _currentRepeatingAction;
	TURepeatingAction* _pendingRepeatingAction;
	/*^block*/id _attemptNextIterationBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isStopped,nonatomic) BOOL stopped;                                                  //@synthesize stopped=_stopped - In the implementation block
@property (assign,getter=isCurrentlyPerformingAction,nonatomic) BOOL currentlyPerformingAction;              //@synthesize currentlyPerformingAction=_currentlyPerformingAction - In the implementation block
@property (nonatomic,retain) TURepeatingAction * currentRepeatingAction;                                     //@synthesize currentRepeatingAction=_currentRepeatingAction - In the implementation block
@property (nonatomic,retain) TURepeatingAction * pendingRepeatingAction;                                     //@synthesize pendingRepeatingAction=_pendingRepeatingAction - In the implementation block
@property (nonatomic,copy) id attemptNextIterationBlock;                                                     //@synthesize attemptNextIterationBlock=_attemptNextIterationBlock - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
-(BOOL)isStopped;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginRepeatingAction:(/*^block*/id)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_beginRepeatingAction:(id)arg1 ;
-(void)_stopWithDidFinish:(BOOL)arg1 ;
-(TURepeatingAction *)currentRepeatingAction;
-(void)setCurrentRepeatingAction:(TURepeatingAction *)arg1 ;
-(void)_attemptNextIteration;
-(void)setPendingRepeatingAction:(TURepeatingAction *)arg1 ;
-(BOOL)_hasIterationsRemaining;
-(void)setCurrentlyPerformingAction:(BOOL)arg1 ;
-(void)setAttemptNextIterationBlock:(id)arg1 ;
-(void)_completeWithDidFinish:(BOOL)arg1 ;
-(void)setStopped:(BOOL)arg1 ;
-(id)attemptNextIterationBlock;
-(BOOL)isCurrentlyPerformingAction;
-(TURepeatingAction *)pendingRepeatingAction;
-(void)beginRepeatingAction:(/*^block*/id)arg1 iterations:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)stop;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)queue;
@end

