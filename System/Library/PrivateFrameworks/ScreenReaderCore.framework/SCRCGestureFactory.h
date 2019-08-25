/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCRCGestureFactoryCallback;
#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject {

	double _stallDistance;
	double _maxDimension;
	double _thumbRegion;
	int _orientation;
	int _directions[7];
	CGPoint _axisFlipper;
	double _scaledTrackingDistance;
	BOOL _setTrackingTimer;
	double _flickVelocityThreshold;
	double _tapVelocityThreshold;
	double _echoWaitTime;
	CGRect _tapSpeedRegion;
	double _tapVelocityThresholdForRegion;
	long long _tapSpeedFingerCount;
	BOOL _inTapSpeedRegionForDownEvent;
	CGRect _mainFrame;
	CGRect _gutterFrame;
	double _lastTime;
	double _lastDownTime;
	double _lastGutterDownTime;
	double _lastDegrees;
	double _startDegrees;
	double _startDistance;
	double _potentialTrackingStartTimestamp;
	BOOL _requireUp;
	BOOL _thumbRejectionEnabled;
	int _state;
	int _direction;
	double _directionalSlope;
	SCRCFingerState _finger[2];
	unsigned long long _absoluteFingerCount;
	unsigned short _fingerCount;
	unsigned short _lastFingerCount;
	double _distance;
	unsigned long long _tapCount;
	CGRect _tapFrame;
	CGRect _tapMultiFrame;
	id<SCRCGestureFactoryCallback> _trackDelegate;
	id<SCRCGestureFactoryCallback> _tapDelegate;
	id<SCRCGestureFactoryCallback> _gutterUpDelegate;
	id<SCRCGestureFactoryCallback> _splitTapDelegate;
	id<SCRCGestureFactoryCallback> _canSplitTapDelegate;
	SCRCTargetSelectorTimer* _trackingTimer;
	SCD_Struct_SC6 _tap;
	SCRCTargetSelectorTimer* _tapTimer;
	SCRCTargetSelectorTimer* _gutterUpTimer;
	SCRCGestureFactory* _splitFactory;
	SCD_Struct_SC7 _split;

}

@property (assign,nonatomic) BOOL thumbRejectionEnabled;              //@synthesize thumbRejectionEnabled=_thumbRejectionEnabled - In the implementation block
-(double)distance;
-(CGPoint)rawLocation;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3 ;
-(void)_enterTrackingMode:(id)arg1 ;
-(void)_handleTap;
-(CGRect)_currentTapRect;
-(void)_updateMultiTapFrame;
-(void)_processUpAndPost:(BOOL)arg1 ;
-(void)_up;
-(void)_updateTapState;
-(int)gestureState;
-(BOOL)_handleSplitTap;
-(SCD_Struct_SC8)handleGestureEvent:(id)arg1 ;
-(SCD_Struct_SC8)captureCurrentState;
-(BOOL)_handleSplitEvent:(id)arg1 ;
-(void)_drag:(id)arg1 ;
-(void)_down:(id)arg1 ;
-(void)_updateStartWithPoint:(CGPoint)arg1 time:(double)arg2 ;
-(CGRect)tapFrame;
-(id)initWithSize:(CGSize)arg1 delegate:(id)arg2 ;
-(void)setFlickSpeed:(double)arg1 ;
-(double)flickSpeed;
-(void)setTapSpeed:(double)arg1 ;
-(void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(CGRect)arg2 fingerCount:(long long)arg3 ;
-(double)tapSpeed;
-(void)_handleGutterUp;
-(double)directionalSlope;
-(unsigned long long)absoluteFingerCount;
-(BOOL)tapIsDown;
-(double)firstFingerPressure;
-(double)firstFingerAltitude;
-(double)firstFingerAzimuth;
-(CGPoint)rawAverageLocation;
-(CGRect)multiTapFrame;
-(CGPoint)tapPoint;
-(CGPoint)tapPointWeightedToSides;
-(double)tapInterval;
-(id)gestureStateString;
-(BOOL)thumbRejectionEnabled;
-(void)setThumbRejectionEnabled:(BOOL)arg1 ;
-(unsigned long long)fingerCount;
-(double)vector;
-(void)dealloc;
-(void)reset;
-(double)velocity;
-(int)direction;
-(int)orientation;
-(unsigned long long)tapCount;
-(CGPoint)startLocation;
-(CGPoint)endLocation;
-(CGRect)mainFrame;
-(void)setOrientation:(int)arg1 ;
@end
