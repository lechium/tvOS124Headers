/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput {

	float _value;
	/*^block*/id _valueChangedHandler;
	GCControllerButtonInput* _positive;
	GCControllerButtonInput* _negative;
	BOOL _flipped;
	BOOL _digital;
	GCControllerElement* _collection;

}
-(BOOL)isFlipped;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)negative;
-(id)collection;
-(/*^block*/id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(BOOL)isDigital;
-(id)positive;
-(id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 digital:(BOOL)arg3 ;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
@end

