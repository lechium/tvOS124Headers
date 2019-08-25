/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OKCouchControllerDelegate;
@class OKPresentationCouch, OKPresentationCouchStep, NSObject;

@interface OKCouchController : NSObject {

	OKPresentationCouch* _couch;
	OKPresentationCouchStep* _lastStep;
	unsigned long long _stepMode;
	double _currentStepStartTime;
	double _readinessWaitStartTime;
	double _progress;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _startValidityBarrier;
	long long _stopCounter;
	BOOL _isPlaying;
	BOOL _hasStartedToWait;
	BOOL _loops;
	id<OKCouchControllerDelegate> _delegate;
	double _defaultStepDuration;
	double _currentStepDuration;
	double _delayForReadinessWaitNotification;

}

@property (assign) id<OKCouchControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double defaultStepDuration;                            //@synthesize defaultStepDuration=_defaultStepDuration - In the implementation block
@property (nonatomic,readonly) double currentStepDuration;                          //@synthesize currentStepDuration=_currentStepDuration - In the implementation block
@property (assign,nonatomic) BOOL loops;                                            //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) double delayForReadinessWaitNotification;              //@synthesize delayForReadinessWaitNotification=_delayForReadinessWaitNotification - In the implementation block
-(void)startPlayback;
-(void)stopPlayback;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(void)overrideMode:(unsigned long long)arg1 andCurrentStepDuration:(double)arg2 ;
-(double)currentStepDuration;
-(void)allowPlayback;
-(void)preventPlayback;
-(BOOL)canStartPlayback;
-(void)startPlaybackAfterDelay:(double)arg1 ;
-(id)initWithCouch:(id)arg1 andDelegate:(id)arg2 ;
-(void)setDelayForReadinessWaitNotification:(double)arg1 ;
-(void)setDefaultStepDuration:(double)arg1 ;
-(void)_dispatchNextStep;
-(id)_nextCouchStep:(id)arg1 ;
-(void)_executeStep:(id)arg1 forTargetPageViewController:(id)arg2 ;
-(void)_timerEventHandler;
-(double)defaultStepDuration;
-(double)delayForReadinessWaitNotification;
-(void)_setupTimer;
-(void)dealloc;
-(void)setDelegate:(id<OKCouchControllerDelegate>)arg1 ;
-(id<OKCouchControllerDelegate>)delegate;
@end

