//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTRadioGroupDescription : NSObject
{
    struct __CFArray *_radioSettings;	// 8 = 0x8
    CDUnknownBlockType _changeHandler;	// 16 = 0x10
    unsigned long long _value;	// 24 = 0x18
}

+ (id)radioGroupWithInitialValue:(unsigned long long)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100118b40
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
@property(retain, nonatomic) struct __CFArray *radioSettings; // @synthesize radioSettings=_radioSettings;
- (void).cxx_destruct;	// IMP=0x0000000100118cec
- (id)settings;	// IMP=0x0000000100118bdc
- (void)addRadioSetting:(id)arg1;	// IMP=0x0000000100118bc8
- (id)init;	// IMP=0x0000000100118adc

@end

