//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class NSString;

@interface PBRetailDemoModeObserver : NSObject <MCProfileConnectionObserver>
{
    NSString *_lastTriggerValue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000e1cc4
@property(copy, nonatomic) NSString *lastTriggerValue; // @synthesize lastTriggerValue=_lastTriggerValue;
- (void).cxx_destruct;	// IMP=0x00000001000e248c
- (void)profileConnectionDidReceiveDefaultsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001000e23ac
- (void)_configureForDemoMode:(unsigned long long)arg1;	// IMP=0x00000001000e21d8
- (void)_demoModeTriggerDidChange;	// IMP=0x00000001000e1ff0
- (id)_currentTriggerValue;	// IMP=0x00000001000e1f74
- (void)stopObserving;	// IMP=0x00000001000e1ed8
- (void)startObserving;	// IMP=0x00000001000e1e3c
- (void)dealloc;	// IMP=0x00000001000e1df0
- (id)init;	// IMP=0x00000001000e1d78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

