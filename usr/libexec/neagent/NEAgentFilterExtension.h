//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEAgentSessionDelegate-Protocol.h"
#import "NEFilterControlExtensionProviderHostDelegate-Protocol.h"
#import "NEFilterDataExtensionProviderHostDelegate-Protocol.h"

@class NEAgentSession, NEFilterControlExtensionProviderHostContext, NEFilterDataExtensionProviderHostContext, NEFilterProviderConfiguration, NSExtension, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEAgentFilterExtension : NSObject <NEFilterDataExtensionProviderHostDelegate, NEFilterControlExtensionProviderHostDelegate, NEAgentSessionDelegate>
{
    _Bool _dataExtensionInitialized;	// 8 = 0x8
    _Bool _controlExtensionInitialized;	// 9 = 0x9
    NEAgentSession *_session;	// 16 = 0x10
    NSExtension *_dataExtension;	// 24 = 0x18
    NSExtension *_controlExtension;	// 32 = 0x20
    NEFilterDataExtensionProviderHostContext *_dataSessionContext;	// 40 = 0x28
    NEFilterControlExtensionProviderHostContext *_controlSessionContext;	// 48 = 0x30
    NSUUID *_dataSessionRequestIdentifier;	// 56 = 0x38
    NSUUID *_controlSessionRequestIdentifier;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSString *_dataExtensionIdentifier;	// 80 = 0x50
    NSString *_controlExtensionIdentifier;	// 88 = 0x58
    NSObject<OS_xpc_object> *_clientListenerEndpoint;	// 96 = 0x60
    NEFilterProviderConfiguration *_configuration;	// 104 = 0x68
    struct NESocketContentFilter_s *_controlSocketHandle;	// 112 = 0x70
}

@property struct NESocketContentFilter_s *controlSocketHandle; // @synthesize controlSocketHandle=_controlSocketHandle;
@property(retain) NEFilterProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSObject<OS_xpc_object> *clientListenerEndpoint; // @synthesize clientListenerEndpoint=_clientListenerEndpoint;
@property _Bool controlExtensionInitialized; // @synthesize controlExtensionInitialized=_controlExtensionInitialized;
@property _Bool dataExtensionInitialized; // @synthesize dataExtensionInitialized=_dataExtensionInitialized;
@property(retain) NSString *controlExtensionIdentifier; // @synthesize controlExtensionIdentifier=_controlExtensionIdentifier;
@property(retain) NSString *dataExtensionIdentifier; // @synthesize dataExtensionIdentifier=_dataExtensionIdentifier;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSUUID *controlSessionRequestIdentifier; // @synthesize controlSessionRequestIdentifier=_controlSessionRequestIdentifier;
@property(retain) NSUUID *dataSessionRequestIdentifier; // @synthesize dataSessionRequestIdentifier=_dataSessionRequestIdentifier;
@property(retain) NEFilterControlExtensionProviderHostContext *controlSessionContext; // @synthesize controlSessionContext=_controlSessionContext;
@property(retain) NEFilterDataExtensionProviderHostContext *dataSessionContext; // @synthesize dataSessionContext=_dataSessionContext;
@property(retain) NSExtension *controlExtension; // @synthesize controlExtension=_controlExtension;
@property(retain) NSExtension *dataExtension; // @synthesize dataExtension=_dataExtension;
@property(readonly) __weak NEAgentSession *session; // @synthesize session=_session;
- (void).cxx_destruct;	// IMP=0x0000000100016068
- (void)extension:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100015ea8
- (void)extension:(id)arg1 didStartWithError:(id)arg2;	// IMP=0x0000000100015ea4
- (void)controlExtension:(id)arg1 didStartWithError:(id)arg2;	// IMP=0x0000000100015e28
- (void)dataExtension:(id)arg1 didStartWithError:(id)arg2;	// IMP=0x0000000100015c88
- (void)provideURLAppendStringMap:(id)arg1;	// IMP=0x0000000100015c1c
- (void)provideRemediationMap:(id)arg1;	// IMP=0x0000000100015bb0
- (void)notifyRulesChanged;	// IMP=0x0000000100015b70
- (void)controlExtension:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100015b24
- (void)dataExtension:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100015ad8
- (void)stopFilterExtensionWithReason:(int)arg1;	// IMP=0x0000000100015a18
- (void)resetFilterSettings;	// IMP=0x00000001000159c8
- (void)startFilterExtension;	// IMP=0x000000010001587c
- (void)report:(id)arg1;	// IMP=0x000000010001580c
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001575c
- (id)sanitizeFilterFlow:(id)arg1;	// IMP=0x0000000100014a0c
- (long long)sanitizeFilterAction:(long long)arg1;	// IMP=0x00000001000149fc
- (id)sanitizeReport:(id)arg1;	// IMP=0x000000010001486c
- (void)sendSocketContentFilterRequest;	// IMP=0x0000000100014604
- (void)sendBrowserContentFilterServerRequest;	// IMP=0x00000001000144ec
- (void)sendEnviromentEventComplete:(long long)arg1;	// IMP=0x00000001000143bc
- (void)sendFilterStatus:(long long)arg1 withError:(long long)arg2;	// IMP=0x0000000100014274
- (void)sendExtensionFailed;	// IMP=0x0000000100014260
- (void)handleAddClientMessage:(id)arg1;	// IMP=0x0000000100013efc
- (void)handleEnvironmentEvent:(id)arg1;	// IMP=0x0000000100013d60
- (void)savedConfigurationChangedEventWithEventData:(id)arg1;	// IMP=0x0000000100013c9c
- (void)wakeEvent;	// IMP=0x0000000100013bb4
- (void)sleepEvent;	// IMP=0x00000001000138b0
- (void)handleStop:(id)arg1;	// IMP=0x00000001000138a0
- (void)handleStart:(id)arg1;	// IMP=0x000000010001357c
- (void)handleInitMessage:(id)arg1;	// IMP=0x000000010001280c
- (void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;	// IMP=0x0000000100012718
- (void)handleCancel;	// IMP=0x0000000100012708
- (void)handleDisposeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000126b0
- (void)handleInitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100012510
- (void)handleControlExtensionInitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100011cac
- (void)handleDataExtensionInitWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000114f4
- (void)cleanupControlExtensionWithRequestIdentifier:(id)arg1;	// IMP=0x00000001000113cc
- (void)cleanupDataExtensionWithRequestIdentifier:(id)arg1;	// IMP=0x00000001000112a4
- (void)dealloc;	// IMP=0x000000010001122c
- (id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(struct __CFBundle *)arg4 applicationPath:(id)arg5;	// IMP=0x0000000100011108

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
