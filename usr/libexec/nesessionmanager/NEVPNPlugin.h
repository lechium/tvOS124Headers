//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEAgent, NSString;
@protocol NEVPNPluginDelegate, OS_dispatch_queue;

@interface NEVPNPlugin : NSObject
{
    NSString *_description;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    int _extension_pid;	// 20 = 0x14
    NEAgent *_agent;	// 24 = 0x18
    id <NEVPNPluginDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
}

@property int extension_pid; // @synthesize extension_pid=_extension_pid;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <NEVPNPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NEAgent *agent; // @synthesize agent=_agent;
@property(readonly) _Bool started; // @synthesize started=_started;
- (void).cxx_destruct;	// IMP=0x000000010000f7a4
- (id)pluginType;	// IMP=0x000000010000f6dc
- (long long)pluginVersion;	// IMP=0x000000010000f690
@property(readonly) int pid;
- (void)terminate;	// IMP=0x000000010000f5d4
- (_Bool)handleMessage:(id)arg1 andError:(id)arg2;	// IMP=0x000000010000f2c0
- (void)dispose;	// IMP=0x000000010000f00c
- (_Bool)startWithConfiguration:(id)arg1;	// IMP=0x000000010000ec10
- (id)description;	// IMP=0x000000010000ec00
- (id)initWithAgent:(id)arg1 delegateQueue:(id)arg2 andDelegate:(id)arg3;	// IMP=0x000000010000e974

@end
