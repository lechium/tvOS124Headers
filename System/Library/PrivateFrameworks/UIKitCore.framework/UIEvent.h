/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, NSSet;

@interface UIEvent : NSObject {

	GSEventRef _gsEvent;
	IOHIDEventRef _hidEvent;
	UIScreen* _cachedScreen;
	double _timestamp;
	double __initialTouchTimestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double _initialTouchTimestamp;                     //@synthesize _initialTouchTimestamp=__initialTouchTimestamp - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) NSSet * allTouches; 
-(void)dealloc;
-(long long)type;
-(id)_screen;
-(double)timestamp;
-(unsigned long long)_focusHeading;
-(id)_triggeringPhysicalButton;
-(CGPoint)_digitizerLocation;
-(IOHIDEventRef)_hidEvent;
-(id)_init;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(void)_wasDeliveredToGestureRecognizers;
-(NSSet *)allTouches;
-(id)_windows;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(double)_initialTouchTimestamp;
-(BOOL)_isKeyDown;
-(long long)_modifierFlags;
-(id)_unmodifiedInput;
-(id)touchesForView:(id)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(long long)subtype;
-(id)_modifiedInput;
-(GSEventRef)_gsEvent;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_setGSEvent:(GSEventRef)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(long long)_moveDirection;
-(void)_setTimestamp:(double)arg1 ;
-(void)_cleanupAfterDispatch;
-(id)touchesForWindow:(id)arg1 ;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(double)_wheelVelocity;
-(int)_shakeState;
-(BOOL)isKeyDown;
@end

