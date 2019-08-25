/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCMicroGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>
#import <libobjc.A.dylib/DigitizerValueChangedDelegate.h>

@class GCControllerDirectionPad, _GCACHomeButton, GCMotion, NSDate, NSString;

@interface _GCAppleTVRemoteControllerProfile : _GCMicroGamepad <_GCACHomeButtonDelegate, DigitizerValueChangedDelegate> {

	_GCACHomeButton* _acHome;
	GCMotion* _motion;
	double _windowX;
	double _windowY;
	double _windowSize;
	double _deadzoneSize;
	double _windowBufferSize[4];
	unsigned _digitizerTouchState;
	unsigned _sampleCount;
	unsigned _accumInputSampleCount;
	double _prevLogTime;
	int _orientation;
	int _candidateOrientation;
	NSDate* _candidateOrientationTimestamp;
	unsigned long long _owner;

}

@property (assign,nonatomic) unsigned long long owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) GCControllerDirectionPad * dpad; 
+(int)updateDevice:(IOHIDDeviceRef)arg1 withButtonDebounceTime:(unsigned char)arg2 withDelay:(BOOL)arg3 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)motion;
-(id)initWithController:(id)arg1 ;
-(void)appWillResignActive;
-(BOOL)ownershipClaimingElementsZero;
-(void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5 ;
-(void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(BOOL)arg3 ;
-(id)menuButton;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 ;
-(void)set_motion:(id)arg1 ;
-(void)toggleSuspendResume;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5 ;
-(void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double*)arg3 outYInWindow:(double*)arg4 ;
-(void)initCommon:(id)arg1 ;
-(void)processOrientationData:(id)arg1 ;
-(void)handleReport:(unsigned)arg1 data:(id)arg2 ;
-(id)name;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(unsigned long long)owner;
-(void)setOwner:(unsigned long long)arg1 ;
-(unsigned)sampleRate;
-(void)appDidBecomeActive;
@end

