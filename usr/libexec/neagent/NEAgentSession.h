//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NEAgentSessionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface NEAgentSession : NSObject
{
    id <NEAgentSessionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
    long long _pluginVersion;	// 32 = 0x20
}

+ (id)copyDeviceIdentifier;	// IMP=0x0000000100011008
@property long long pluginVersion; // @synthesize pluginVersion=_pluginVersion;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) id <NEAgentSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000110b4
- (void)sendFlowDivertControlSocketRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010ecc
- (void)sendVirtualInterfaceRequestWithType:(long long)arg1 maxPendingPackets:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010c74
- (void)sendMessageWithType:(long long)arg1 archiveKey:(id)arg2 objectToArchive:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000108d4
- (void)handleDisposeCommand:(id)arg1;	// IMP=0x0000000100010644
- (void)handleInitCommand:(id)arg1;	// IMP=0x000000010000f62c
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000f558
- (void)sendMessage:(id)arg1;	// IMP=0x000000010000f4d4
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010000f064

@end

