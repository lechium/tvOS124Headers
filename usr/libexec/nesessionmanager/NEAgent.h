//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface NEAgent : NSObject
{
    NSString *_description;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    int _state;	// 20 = 0x14
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    CDUnknownBlockType _messageHandler;	// 32 = 0x20
    long long _pluginVersion;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSObject<OS_xpc_object> *_connection;	// 56 = 0x38
    CDUnknownBlockType _startCompletionHandler;	// 64 = 0x40
    CDUnknownBlockType _disposeCompletionHandler;	// 72 = 0x48
    NSNumber *_uid;	// 80 = 0x50
    NSDictionary *_pluginInfo;	// 88 = 0x58
    NSString *_driverClassName;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_agentPIDSource;	// 104 = 0x68
}

@property(retain) NSObject<OS_dispatch_source> *agentPIDSource; // @synthesize agentPIDSource=_agentPIDSource;
@property(readonly) NSString *driverClassName; // @synthesize driverClassName=_driverClassName;
@property(readonly) NSDictionary *pluginInfo; // @synthesize pluginInfo=_pluginInfo;
@property(readonly) NSNumber *uid; // @synthesize uid=_uid;
@property(copy) CDUnknownBlockType disposeCompletionHandler; // @synthesize disposeCompletionHandler=_disposeCompletionHandler;
@property(copy) CDUnknownBlockType startCompletionHandler; // @synthesize startCompletionHandler=_startCompletionHandler;
@property int state; // @synthesize state=_state;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) long long pluginVersion; // @synthesize pluginVersion=_pluginVersion;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;	// IMP=0x000000010003ff60
- (_Bool)supportsMultipleInstancesOfExtension;	// IMP=0x000000010003fd6c
- (id)pluginType;	// IMP=0x000000010003fd10
- (void)terminate;	// IMP=0x000000010003fafc
- (void)sendMessage:(id)arg1 queue:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003f790
- (void)sendMessage:(id)arg1;	// IMP=0x000000010003f564
- (void)disposeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003eed8
- (_Bool)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e694
- (void)setupExitWatcher;	// IMP=0x000000010003e4f0
- (void)handleExit;	// IMP=0x000000010003e0e4
- (void)sendInitCommand;	// IMP=0x000000010003d124
- (void)handleConnectionEvent:(id)arg1;	// IMP=0x000000010003ce48
- (id)description;	// IMP=0x000000010003ce38
- (id)initWithPluginInfo:(id)arg1 userID:(id)arg2;	// IMP=0x000000010003cc38

@end

