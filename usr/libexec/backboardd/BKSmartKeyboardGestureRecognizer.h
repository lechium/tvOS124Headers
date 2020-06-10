//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKGestureRecognizer.h"

@class BKKeyboardInfo, BKSHIDEventDescriptor;

@interface BKSmartKeyboardGestureRecognizer : BKGestureRecognizer
{
    BKKeyboardInfo *_keyboard;
    BKSHIDEventDescriptor *_activationChangeEventDescriptor;
}

@property(retain, nonatomic) BKSHIDEventDescriptor *activationChangeEventDescriptor; // @synthesize activationChangeEventDescriptor=_activationChangeEventDescriptor;
@property(retain, nonatomic) BKKeyboardInfo *keyboard; // @synthesize keyboard=_keyboard;
- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (id)description;
- (id)initWithSmartKeyboard:(id)arg1 activationChangeEventDescriptor:(id)arg2;

@end

