//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWNetworkAgentRegistration.h>

@class NEPolicySession, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AgentController : NWNetworkAgentRegistration
{
    NSObject<OS_dispatch_queue> *_controllerQueue;	// 8 = 0x8
    NSMutableDictionary *_floatingProxyAgentList;	// 16 = 0x10
    NSMutableDictionary *_floatingDNSAgentList;	// 24 = 0x18
    NSMutableDictionary *_policyDB;	// 32 = 0x20
    NEPolicySession *_policySession;	// 40 = 0x28
    NEPolicySession *_controlPolicySession;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x00000001000380f4
@property(retain, nonatomic) NEPolicySession *controlPolicySession; // @synthesize controlPolicySession=_controlPolicySession;
@property(retain, nonatomic) NEPolicySession *policySession; // @synthesize policySession=_policySession;
@property(retain, nonatomic) NSMutableDictionary *policyDB; // @synthesize policyDB=_policyDB;
@property(retain, nonatomic) NSMutableDictionary *floatingDNSAgentList; // @synthesize floatingDNSAgentList=_floatingDNSAgentList;
@property(retain, nonatomic) NSMutableDictionary *floatingProxyAgentList; // @synthesize floatingProxyAgentList=_floatingProxyAgentList;
@property(retain) NSObject<OS_dispatch_queue> *controllerQueue; // @synthesize controllerQueue=_controllerQueue;
- (void).cxx_destruct;	// IMP=0x0000000100040490
- (_Bool)unregisterAgent:(id)arg1;	// IMP=0x000000010003ff78
- (_Bool)registerAgent:(id)arg1;	// IMP=0x000000010003fe34
- (_Bool)destroyFloatingAgent:(id)arg1;	// IMP=0x000000010003f608
- (_Bool)publishToAgent:(id)arg1;	// IMP=0x000000010003f2a0
- (_Bool)spawnMappedFloatingAgent:(id)arg1 entity:(id)arg2 agentSubType:(unsigned long long)arg3 addPolicyOfType:(long long)arg4 updateData:(id)arg5;	// IMP=0x000000010003ef70
- (_Bool)spawnFloatingAgent:(Class)arg1 entity:(id)arg2 agentSubType:(unsigned long long)arg3 addPolicyOfType:(long long)arg4 publishData:(id)arg5;	// IMP=0x000000010003ec84
- (_Bool)addPolicyToFloatingAgent:(id)arg1 domain:(id)arg2 agentUUIDToUse:(id)arg3 policyType:(long long)arg4 useControlPolicySession:(_Bool)arg5;	// IMP=0x000000010003e204
- (id)getAgentWithSameDataAndSubType:(id)arg1 data:(id)arg2 subType:(unsigned long long)arg3;	// IMP=0x000000010003dffc
- (void)deleteAgentList:(id)arg1 list:(id)arg2;	// IMP=0x000000010003de94
- (id)getAgentList:(id)arg1 agentType:(unsigned long long)arg2 agentSubType:(unsigned long long)arg3;	// IMP=0x000000010003dcb0
- (void)cleanConflictingAgentsFromList:(id)arg1 new_list:(id)arg2 agentDictionary:(id)arg3;	// IMP=0x000000010003d86c
- (int)entityInstanceNumber:(id)arg1;	// IMP=0x000000010003d7a0
- (id)sanitizeInterfaceName:(id)arg1;	// IMP=0x000000010003d6f0
- (id)sanitizeEntity:(id)arg1;	// IMP=0x000000010003d640
- (id)dataLengthSanityCheck:(id)arg1;	// IMP=0x000000010003d4b4
- (const void *)copyDNSAgentData:(unsigned char [16])arg1 length:(unsigned long long *)arg2;	// IMP=0x000000010003d410
- (const void *)copyProxyAgentData:(unsigned char [16])arg1 length:(unsigned long long *)arg2;	// IMP=0x000000010003d36c
- (const void *)copyConfigAgentData:(id)arg1 uuid:(unsigned char [16])arg2 length:(unsigned long long *)arg3;	// IMP=0x000000010003d064
- (void)processDNSChanges;	// IMP=0x000000010003cdf0
- (void)processOnionResolver:(CDStruct_55c307a6 *)arg1;	// IMP=0x000000010003ca50
- (_Bool)isResolverOnion:(CDStruct_1307075d *)arg1;	// IMP=0x000000010003c9e8
- (void)processServiceSpecificDNSResolvers:(CDStruct_55c307a6 *)arg1;	// IMP=0x000000010003c6e8
- (void)processScopedDNSResolvers:(CDStruct_55c307a6 *)arg1;	// IMP=0x000000010003c3a8
- (void)processDNSResolvers:(CDStruct_55c307a6 *)arg1;	// IMP=0x000000010003bd54
- (void)processSupplementalDNSResolvers:(CDStruct_55c307a6 *)arg1;	// IMP=0x000000010003b15c
- (_Bool)isResolverPrivate:(CDStruct_1307075d *)arg1;	// IMP=0x000000010003b0fc
- (_Bool)isResolverMulticast:(CDStruct_1307075d *)arg1;	// IMP=0x000000010003b09c
- (id)getDNSDataFromCurrentConfig:(CDStruct_55c307a6 *)arg1 domain:(id)arg2;	// IMP=0x000000010003aedc
- (id)dataForResolver:(CDStruct_1307075d *)arg1;	// IMP=0x000000010003ac44
- (struct resolverList *)copyResolverList:(CDStruct_55c307a6 *)arg1;	// IMP=0x000000010003a954
- (void)freeResolverList:(struct resolverList *)arg1;	// IMP=0x000000010003a8b0
- (void)processProxyChanges;	// IMP=0x000000010003a62c
- (void)processDefaultProxyChanges:(struct __CFDictionary *)arg1;	// IMP=0x000000010003a2e0
- (_Bool)isGlobalProxy:(struct __CFDictionary *)arg1;	// IMP=0x000000010003a280
- (void)processServiceSpecificProxyChanges:(struct __CFDictionary *)arg1;	// IMP=0x0000000100039e68
- (void)processScopedProxyChanges:(struct __CFDictionary *)arg1;	// IMP=0x0000000100039a7c
- (void)processSupplementalProxyChanges:(struct __CFDictionary *)arg1;	// IMP=0x0000000100038e14
- (int)countProxyEntriesEnabled:(struct __CFDictionary *)arg1;	// IMP=0x0000000100038b7c
- (_Bool)getIntValue:(void *)arg1 valuePtr:(int *)arg2;	// IMP=0x0000000100038acc
- (id)getProxyDataFromCurrentConfig:(struct __CFDictionary *)arg1 domain:(id)arg2;	// IMP=0x000000010003894c
- (id)dataForProxyDictionary:(struct __CFDictionary *)arg1;	// IMP=0x0000000100038864
- (id)dataForProxyArray:(struct __CFArray *)arg1;	// IMP=0x0000000100038804
- (_Bool)isControllerReady;	// IMP=0x00000001000386c0
- (id)createPolicySession;	// IMP=0x000000010003865c
- (_Bool)initializeController;	// IMP=0x00000001000382e4
- (id)init;	// IMP=0x0000000100038260

@end
