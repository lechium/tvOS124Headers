//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEAgent, NEFilterProviderConfiguration, NSUUID;
@protocol NESMFilterPluginDelegate, OS_dispatch_queue;

@interface NESMFilterPlugin : NSObject
{
    int _extension_pid;	// 8 = 0x8
    long long _filterStatus;	// 16 = 0x10
    NEAgent *_agent;	// 24 = 0x18
    id <NESMFilterPluginDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSUUID *_configID;	// 48 = 0x30
    NEFilterProviderConfiguration *_parameters;	// 56 = 0x38
}

@property int extension_pid; // @synthesize extension_pid=_extension_pid;
@property(retain) NEFilterProviderConfiguration *parameters; // @synthesize parameters=_parameters;
@property(readonly) NSUUID *configID; // @synthesize configID=_configID;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <NESMFilterPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NEAgent *agent; // @synthesize agent=_agent;
@property(readonly) long long filterStatus; // @synthesize filterStatus=_filterStatus;
- (void).cxx_destruct;	// IMP=0x0000000100041044
@property(readonly) int pid;
- (void)wakeup;	// IMP=0x0000000100040f18
- (void)sleep;	// IMP=0x0000000100040f04
- (void)terminate;	// IMP=0x0000000100040ec4
- (void)getFilterClientConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040d18
- (void)updateConfigurationWithParameters:(id)arg1;	// IMP=0x0000000100040c3c
- (void)sendEnvironmentEvent:(long long)arg1 withData:(id)arg2;	// IMP=0x0000000100040b40
- (_Bool)startFilterWithParameters:(id)arg1;	// IMP=0x0000000100040a50
- (void)handleMessage:(id)arg1 andError:(id)arg2;	// IMP=0x000000010004055c
- (void)dispose;	// IMP=0x000000010004048c
- (_Bool)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004029c
- (id)initWithAgent:(id)arg1 configurationIdentifier:(id)arg2 delegateQueue:(id)arg3 andDelegate:(id)arg4;	// IMP=0x0000000100040054

@end

