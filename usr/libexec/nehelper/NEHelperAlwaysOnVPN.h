//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NEHelperAlwaysOnVPN : NSObject
{
}

+ (id)getCaptivePluginList;	// IMP=0x000000010000a424
+ (void)setCaptivePluginList:(id)arg1;	// IMP=0x000000010000a33c
+ (_Bool)evaluateConfiguration:(id)arg1 policySession:(id)arg2 startOrder:(unsigned int)arg3 IMSUseIPSec:(_Bool)arg4 dropAllLevel:(id *)arg5;	// IMP=0x000000010000a0d8
+ (_Bool)addAllowedCaptiveNetworkPluginsToPolicySession:(id)arg1 order:(unsigned int *)arg2 configuration:(id)arg3;	// IMP=0x0000000100009bd4
+ (_Bool)addRegisteredCNPToPolicySession:(id)arg1 order:(unsigned int *)arg2 configuration:(id)arg3;	// IMP=0x000000010000958c
+ (_Bool)addServiceExceptionsToPolicySession:(id)arg1 order:(unsigned int *)arg2 configuration:(id)arg3 IMSUseIPSec:(_Bool)arg4 dropAllLevel:(id *)arg5;	// IMP=0x0000000100009010
+ (_Bool)addCellularServicesExceptionIMS:(id)arg1 order:(unsigned int *)arg2 action:(long long)arg3 useIPSec:(_Bool)arg4 control:(_Bool)arg5 policyIDList:(id)arg6;	// IMP=0x0000000100008b68
+ (_Bool)addCellularServicesExceptionMMS:(id)arg1 order:(unsigned int *)arg2 action:(long long)arg3;	// IMP=0x00000001000087c4
+ (_Bool)addCellularServicesExceptionData:(id)arg1 order:(unsigned int *)arg2 action:(long long)arg3 policyIDList:(id)arg4;	// IMP=0x00000001000086e8
+ (_Bool)addCellularServicesExceptionControl:(id)arg1 order:(unsigned int *)arg2 IMSUseIPSec:(_Bool)arg3 action:(long long)arg4;	// IMP=0x00000001000085b0
+ (long long)checkCellularServicesExceptionWithConfiguration:(id)arg1;	// IMP=0x00000001000084e4
+ (_Bool)addAirPrintExceptionToPolicySession:(id)arg1 order:(unsigned int *)arg2 configuration:(id)arg3;	// IMP=0x0000000100008074
+ (_Bool)addVoiceMailExceptionToPolicySession:(id)arg1 order:(unsigned int *)arg2 configuration:(id)arg3;	// IMP=0x0000000100007c84
+ (_Bool)addConfigdToPolicySession:(id)arg1 order:(unsigned int *)arg2;	// IMP=0x0000000100007878
+ (_Bool)addSessionManagerToPolicySession:(id)arg1 order:(unsigned int *)arg2;	// IMP=0x0000000100007658
+ (_Bool)addBonjourToPolicySession:(id)arg1 order:(unsigned int *)arg2;	// IMP=0x00000001000074ac
+ (_Bool)addBonjourToPolicySession:(id)arg1 order:(unsigned int *)arg2 appUUID:(id)arg3 local:(_Bool)arg4;	// IMP=0x00000001000070fc
+ (_Bool)addPolicyForProcessDelegated:(id)arg1 order:(unsigned int *)arg2 processEUUIDs:(id)arg3 processUUIDs:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 policyResult:(id)arg10;	// IMP=0x0000000100006e20
+ (_Bool)addPolicyForProcessIMSData:(id)arg1 order:(unsigned int *)arg2 processEUUIDs:(id)arg3 processUUIDs:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 policyResult:(id)arg10 policyIDList:(id)arg11;	// IMP=0x0000000100006b4c
+ (_Bool)addPolicyForProcessIMSControl:(id)arg1 order:(unsigned int *)arg2 processEUUIDs:(id)arg3 processUUIDs:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 useIPSec:(_Bool)arg10 policyResult:(id)arg11;	// IMP=0x0000000100006504
+ (_Bool)addPolicyICMPv6:(id)arg1 order:(unsigned int *)arg2 policyResult:(id)arg3;	// IMP=0x00000001000061c4
+ (_Bool)addPolicyForProcess:(id)arg1 order:(unsigned int *)arg2 processEUUIDs:(id)arg3 processUUIDs:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 skipUnscoped:(_Bool)arg10 policyResult:(id)arg11;	// IMP=0x0000000100005b2c
+ (_Bool)addOnePolicyWithAddress:(id)arg1 order:(unsigned int *)arg2 processEUUIDs:(id)arg3 processUUID:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 policyResult:(id)arg10 address:(id)arg11 port:(id)arg12 localAddress:(_Bool)arg13 policyIDList:(id)arg14;	// IMP=0x00000001000054cc
+ (_Bool)addOnePolicy:(id)arg1 order:(unsigned int *)arg2 processEUUIDs:(id)arg3 processUUID:(id)arg4 pid:(int)arg5 checkEntitlement:(_Bool)arg6 customEntitlement:(id)arg7 checkUID:(_Bool)arg8 uid:(unsigned int)arg9 dnsUUIDs:(id)arg10 policyResult:(id)arg11;	// IMP=0x0000000100004bc8

@end
