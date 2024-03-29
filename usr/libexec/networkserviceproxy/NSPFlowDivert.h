//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEAppProxyProviderContainer.h>

@class NEFlowDivertFileHandle, NEPolicySession, NSPConfiguration;

@interface NSPFlowDivert : NEAppProxyProviderContainer
{
    _Bool _shouldResetPolicies;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    NSPConfiguration *_configuration;	// 16 = 0x10
    NEPolicySession *_policySession;	// 24 = 0x18
    NEFlowDivertFileHandle *_flowDivertControlHandle;	// 32 = 0x20
    NEFlowDivertFileHandle *_flowDivertDataHandle;	// 40 = 0x28
}

@property(retain) NEFlowDivertFileHandle *flowDivertDataHandle; // @synthesize flowDivertDataHandle=_flowDivertDataHandle;
@property(retain) NEFlowDivertFileHandle *flowDivertControlHandle; // @synthesize flowDivertControlHandle=_flowDivertControlHandle;
@property(retain) NEPolicySession *policySession; // @synthesize policySession=_policySession;
@property _Bool started; // @synthesize started=_started;
@property(retain) NSPConfiguration *configuration; // @synthesize configuration=_configuration;
@property _Bool shouldResetPolicies; // @synthesize shouldResetPolicies=_shouldResetPolicies;
- (void).cxx_destruct;	// IMP=0x0000000100016bd4
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000100016a3c
- (void)didStartWithError:(id)arg1;	// IMP=0x000000010001687c
- (void)teardown;	// IMP=0x0000000100016834
- (_Bool)resetPolicies:(_Bool)arg1;	// IMP=0x00000001000155e4
- (void)addPoliciesForAgent:(id)arg1 conditions:(id)arg2;	// IMP=0x0000000100015440
- (void)addPoliciesForDivertDNSOnly:(id)arg1 domainConditions:(id)arg2 divertResult:(id)arg3;	// IMP=0x0000000100015158
- (id)getEffectiveAppRules:(id)arg1;	// IMP=0x0000000100015040
- (id)getExecutableConditions:(id)arg1;	// IMP=0x0000000100014f80
- (id)getAgentResults:(id)arg1;	// IMP=0x0000000100014f78
- (_Bool)shouldInstallFlowDivert:(id)arg1;	// IMP=0x0000000100014f70
- (void)addPolicy:(id)arg1;	// IMP=0x0000000100014e44
- (void)destroyPolicySession;	// IMP=0x0000000100014e34
- (id)createPolicySession;	// IMP=0x0000000100014d70
- (void)destroyFlowDivertSocketHandles;	// IMP=0x0000000100014d34
- (id)createFlowDivertSocketHandles;	// IMP=0x0000000100014bf8
- (void)stop;	// IMP=0x0000000100014ba8
- (void)startWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000148b4
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 configuration:(id)arg3;	// IMP=0x000000010001480c

@end

