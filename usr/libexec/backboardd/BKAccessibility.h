//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKAccessibility : NSObject
{
}

+ (void)_setCapsLockLightOn:(_Bool)arg1;
+ (id)_eventRoutingClientConnectionManager;
+ (_Bool)_isDisplayBacklightOff;
+ (_Bool)_objectWithinProximity;
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1 withDisplayIntegerId:(unsigned int)arg2;
+ (struct CGPoint)_displayConvertToCAScreen:(struct CGPoint)arg1;
+ (struct CGPoint)_displayConvertFromCAScreen:(struct CGPoint)arg1;
+ (CDUnknownFunctionPointerType)_accessibilityHIDEventTapCallback;
+ (void)_accessibilitySetHIDEventTapCallback:(CDUnknownFunctionPointerType)arg1;
+ (CDUnknownFunctionPointerType)_accessibilityEventTapCallback;
+ (void)_accessibilitySetEventTapCallback:(CDUnknownFunctionPointerType)arg1;
+ (void)_accessibilityProcessExternHIDEvent:(struct __IOHIDEvent *)arg1;

@end
