/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUICAutoDismissalStrategyDelegate;
@class NSNumber;

@interface SUICAutoDismissalStrategy : NSObject {

	NSNumber* _lastShouldDismissValue;
	BOOL _userInteractedWithTouchScreen;
	BOOL _userInteractedWithTouchIDSensor;
	BOOL _videoPlaying;
	BOOL _viewRequiringExtendedTimeoutVisible;
	BOOL _shouldDismiss;
	BOOL _deviceSupportsFaceDetection;
	BOOL _deviceSupportsRaiseGestureDetection;
	id<SUICAutoDismissalStrategyDelegate> _delegate;
	long long _latestFaceAwarenessEvent;
	long long _latestDeviceMotionEvent;
	double _idleTimeInterval;
	long long _autoDismissalReason;
	double _idleTimeout;
	double _extendedIdleTimeout;
	double _viewRequiringExtendedTimeoutStartTime;

}

@property (assign,nonatomic) long long autoDismissalReason;                                                                      //@synthesize autoDismissalReason=_autoDismissalReason - In the implementation block
@property (nonatomic,readonly) double idleTimeout;                                                                               //@synthesize idleTimeout=_idleTimeout - In the implementation block
@property (nonatomic,readonly) double extendedIdleTimeout;                                                                       //@synthesize extendedIdleTimeout=_extendedIdleTimeout - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsFaceDetection;                                                                 //@synthesize deviceSupportsFaceDetection=_deviceSupportsFaceDetection - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsRaiseGestureDetection;                                                         //@synthesize deviceSupportsRaiseGestureDetection=_deviceSupportsRaiseGestureDetection - In the implementation block
@property (nonatomic,readonly) double viewRequiringExtendedTimeoutStartTime;                                                     //@synthesize viewRequiringExtendedTimeoutStartTime=_viewRequiringExtendedTimeoutStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<SUICAutoDismissalStrategyDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL userInteractedWithTouchScreen;                                                                 //@synthesize userInteractedWithTouchScreen=_userInteractedWithTouchScreen - In the implementation block
@property (assign,nonatomic) BOOL userInteractedWithTouchIDSensor;                                                               //@synthesize userInteractedWithTouchIDSensor=_userInteractedWithTouchIDSensor - In the implementation block
@property (assign,nonatomic) long long latestFaceAwarenessEvent;                                                                 //@synthesize latestFaceAwarenessEvent=_latestFaceAwarenessEvent - In the implementation block
@property (assign,nonatomic) long long latestDeviceMotionEvent;                                                                  //@synthesize latestDeviceMotionEvent=_latestDeviceMotionEvent - In the implementation block
@property (assign,getter=isVideoPlaying,nonatomic) BOOL videoPlaying;                                                            //@synthesize videoPlaying=_videoPlaying - In the implementation block
@property (assign,getter=isViewRequiringExtendedTimeoutVisible,nonatomic) BOOL viewRequiringExtendedTimeoutVisible;              //@synthesize viewRequiringExtendedTimeoutVisible=_viewRequiringExtendedTimeoutVisible - In the implementation block
@property (nonatomic,readonly) double idleTimeInterval;                                                                          //@synthesize idleTimeInterval=_idleTimeInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismiss;                                                                               //@synthesize shouldDismiss=_shouldDismiss - In the implementation block
-(void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeededPermanent:(BOOL)arg1 ;
-(void)_notifyDelegateOfAutoDismissalDecisionChangeIfNeeded;
-(long long)autoDismissalReason;
-(id)initWithIdleTimeout:(double)arg1 extendedIdleTimeout:(double)arg2 deviceSupportsFaceDetection:(BOOL)arg3 deviceSupportsRaiseGestureDetection:(BOOL)arg4 ;
-(void)setUserInteractedWithTouchScreen:(BOOL)arg1 ;
-(void)setUserInteractedWithTouchIDSensor:(BOOL)arg1 ;
-(void)setLatestFaceAwarenessEvent:(long long)arg1 ;
-(void)setLatestDeviceMotionEvent:(long long)arg1 ;
-(void)setVideoPlaying:(BOOL)arg1 ;
-(void)setViewRequiringExtendedTimeoutVisible:(BOOL)arg1 ;
-(void)setViewRequiringExtendedTimeoutStartTime:(double)arg1 ;
-(BOOL)userInteractedWithTouchScreen;
-(BOOL)userInteractedWithTouchIDSensor;
-(long long)latestFaceAwarenessEvent;
-(long long)latestDeviceMotionEvent;
-(BOOL)isViewRequiringExtendedTimeoutVisible;
-(double)idleTimeInterval;
-(void)setAutoDismissalReason:(long long)arg1 ;
-(double)idleTimeout;
-(double)extendedIdleTimeout;
-(BOOL)deviceSupportsFaceDetection;
-(BOOL)deviceSupportsRaiseGestureDetection;
-(double)viewRequiringExtendedTimeoutStartTime;
-(BOOL)isVideoPlaying;
-(void)setDelegate:(id<SUICAutoDismissalStrategyDelegate>)arg1 ;
-(id<SUICAutoDismissalStrategyDelegate>)delegate;
-(BOOL)shouldDismiss;
@end

