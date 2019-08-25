//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer, TVSStateMachine;

@interface PBAXFeatureManager : NSObject
{
    NSArray *_pendingUpdates;	// 8 = 0x8
    CDUnknownBlockType _updateCompletion;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
    TVSStateMachine *_stateMachine;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000bc0e0
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(copy, nonatomic) CDUnknownBlockType updateCompletion; // @synthesize updateCompletion=_updateCompletion;
@property(copy, nonatomic) NSArray *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
- (void).cxx_destruct;	// IMP=0x00000001000bf5d8
- (void)_cancelPendingUpdates;	// IMP=0x00000001000bf490
- (void)_servicePendingUpdates;	// IMP=0x00000001000bf160
- (void)_applyUpdatesWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bf088
- (id)_updatesForConfigurationOptions:(id)arg1;	// IMP=0x00000001000be164
- (id)_currentConfigOptions;	// IMP=0x00000001000bdb4c
- (id)_handleSetDefaultConfiguration:(id)arg1;	// IMP=0x00000001000bd878
- (id)_handleSetSingleAppConfiguration:(id)arg1;	// IMP=0x00000001000bd564
- (void)_initialzeStateMachine;	// IMP=0x00000001000bcfc0
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x00000001000bcec8
- (_Bool)handleAXShortcutEvent;	// IMP=0x00000001000bc1ec
- (id)init;	// IMP=0x00000001000bc194

@end

