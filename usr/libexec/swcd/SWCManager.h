//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SWCXPCServer-Protocol.h"

@class NSMutableArray, NSString, NSURLSession, NSXPCListener;

@interface SWCManager : NSObject <NSURLSessionDelegate, NSXPCListenerDelegate, SWCXPCServer>
{
    NSMutableArray *_database;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSURLSession *_urlSession;	// 24 = 0x18
    NSMutableArray *_netRequests;	// 32 = 0x20
    NSMutableArray *_deferredRequests;	// 40 = 0x28
    NSMutableArray *_xpcRequests;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    _Bool _addedAllApps;	// 57 = 0x39
    double _recheckForceTime;	// 64 = 0x40
    _Bool _rebuildDatabase;	// 72 = 0x48
    unsigned long long _saveDatabaseNeededTicks;	// 80 = 0x50
    _Bool _allowUnsigned;	// 88 = 0x58
    unsigned int _maxNetRequests;	// 92 = 0x5c
    _Bool _obfuscateLogs;	// 96 = 0x60
    long long _recheckFailureMaxCount;	// 104 = 0x68
    long long _recheckFailureSecs;	// 112 = 0x70
    long long _recheckSuccessSecs;	// 120 = 0x78
    _Bool _recheckVersionChange;	// 128 = 0x80
    _Bool _redirects;	// 129 = 0x81
    _Bool _verifyEV;	// 130 = 0x82
    _Bool _wellKnown;	// 131 = 0x83
    _Bool _wildcardDomains;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x000000010000f920
- (int)_verifyTrust:(struct __SecTrust *)arg1 isFile:(_Bool)arg2;	// IMP=0x000000010000f734
- (void)_parseServiceDomainString:(id)arg1 legacy:(_Bool)arg2 service:(id *)arg3 domain:(id *)arg4;	// IMP=0x000000010000f628
- (id)_obfuscatedDomain:(id)arg1;	// IMP=0x000000010000f3ec
- (_Bool)_equivalentDomain:(id)arg1 toDomain:(id)arg2 wildcards:(_Bool)arg3;	// IMP=0x000000010000f268
- (id)_installedAppByID:(id)arg1;	// IMP=0x000000010000f02c
- (id)_appEntitlementsByID:(id)arg1;	// IMP=0x000000010000eea8
- (void)show:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e194
- (void)logControl:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000dee4
- (void)addAllAppsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dcac
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned int)arg4 flags:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000d624
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000d018
- (void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ca70
- (int)_addService:(id)arg1 app:(id)arg2 domain:(id)arg3;	// IMP=0x000000010000c2f0
- (void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c058
- (void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b878
- (void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b314
- (void)_connectionInvalidated:(id)arg1;	// IMP=0x000000010000b280
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000b104
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100009d98
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100009b00
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009828
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000954c
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000926c
- (id)_findAppRequestForTask:(id)arg1;	// IMP=0x00000001000090e8
- (void)_completeAppsRequestForTask:(id)arg1 status:(int)arg2 services:(id)arg3;	// IMP=0x00000001000083c8
- (int)_startAppsRequestForDomain:(id)arg1 wellKnown:(_Bool)arg2 immediate:(_Bool)arg3;	// IMP=0x00000001000078cc
- (int)_startAppsRequestForDomain:(id)arg1;	// IMP=0x00000001000078b0
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;	// IMP=0x0000000100007354
- (void)_recheckStartTimer:(double)arg1;	// IMP=0x00000001000071a0
- (void)_recheckSchedule;	// IMP=0x0000000100006c00
- (void)_recheckPerform;	// IMP=0x0000000100006658
- (void)_processDeferredNetRequests;	// IMP=0x0000000100006334
- (void)_sanitizeDatabase;	// IMP=0x0000000100005d58
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3 wildcards:(_Bool)arg4;	// IMP=0x00000001000058e4
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3;	// IMP=0x00000001000056a0
- (void)removeBundleID:(id)arg1;	// IMP=0x0000000100005300
- (void)addBundleID:(id)arg1 preApproved:(_Bool)arg2;	// IMP=0x000000010000487c
- (void)addBundleID:(id)arg1;	// IMP=0x00000001000047c8
- (void)addAllApps;	// IMP=0x000000010000473c
- (void)addAllAppleApps;	// IMP=0x00000001000046b0
- (int)_saveDatabase;	// IMP=0x00000001000043f0
- (void)_saveDatabaseNeeded;	// IMP=0x00000001000042c8
- (int)_ensureDatabaseLoaded;	// IMP=0x0000000100003d50
- (void)stop;	// IMP=0x00000001000039ec
- (void)start;	// IMP=0x000000010000339c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

