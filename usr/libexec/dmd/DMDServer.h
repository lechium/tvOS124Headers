//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CATTaskServer, DMDPolicyServerListenerDelegate, DMDTaskServerDelegate, DMDTaskServerListenerDelegate, NSXPCListener;

@interface DMDServer : NSObject
{
    DMDTaskServerDelegate *_taskServerDelegate;	// 8 = 0x8
    NSXPCListener *_taskOperationServiceListener;	// 16 = 0x10
    DMDTaskServerListenerDelegate *_taskServerListenerDelegate;	// 24 = 0x18
    CATTaskServer *_taskServer;	// 32 = 0x20
    DMDPolicyServerListenerDelegate *_policyServerListenerDelegate;	// 40 = 0x28
    NSXPCListener *_policyServerListener;	// 48 = 0x30
}

+ (id)sharedServer;	// IMP=0x0000000100065568
@property(readonly, nonatomic) NSXPCListener *policyServerListener; // @synthesize policyServerListener=_policyServerListener;
@property(readonly, nonatomic) DMDPolicyServerListenerDelegate *policyServerListenerDelegate; // @synthesize policyServerListenerDelegate=_policyServerListenerDelegate;
@property(readonly, nonatomic) CATTaskServer *taskServer; // @synthesize taskServer=_taskServer;
@property(readonly, nonatomic) DMDTaskServerListenerDelegate *taskServerListenerDelegate; // @synthesize taskServerListenerDelegate=_taskServerListenerDelegate;
@property(readonly, nonatomic) NSXPCListener *taskOperationServiceListener; // @synthesize taskOperationServiceListener=_taskOperationServiceListener;
@property(readonly, nonatomic) DMDTaskServerDelegate *taskServerDelegate; // @synthesize taskServerDelegate=_taskServerDelegate;
- (void).cxx_destruct;	// IMP=0x00000001000658c0
- (void)invalidate;	// IMP=0x00000001000657b8
- (void)run;	// IMP=0x0000000100065670
- (id)description;	// IMP=0x00000001000655dc
- (id)init;	// IMP=0x0000000100065314

@end

