//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface PKDaemonClient : NSObject
{
    NSObject<OS_xpc_object> *_pkd;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    long long _protocolVersion;	// 24 = 0x18
}

+ (id)convertToXPC:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x0000000100016aec
@property long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) NSObject<OS_xpc_object> *pkd; // @synthesize pkd=_pkd;
- (void).cxx_destruct;	// IMP=0x0000000100016bcc
- (id)convertFromXPC:(id)arg1;	// IMP=0x0000000100016b14
- (void)set:(id)arg1 uuids:(id)arg2;	// IMP=0x0000000100016964
- (void)set:(id)arg1 plugins:(id)arg2;	// IMP=0x0000000100016784
- (void)sendSynchronously:(_Bool)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016500
- (void)send:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000164ac
- (id)request:(const char *)arg1 paths:(id)arg2;	// IMP=0x0000000100016414
- (id)request:(const char *)arg1;	// IMP=0x00000001000163a0
- (void)copyReceipt:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016324
- (void)releaseHold:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016204
- (void)holdPlugins:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001614c
- (void)bulkSetPluginAnnotations:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016084
- (void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015f90
- (void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015eac
- (void)findPlugInByPathURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015d3c
- (void)findPlugInByUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015bf4
- (void)accessPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015b24
- (void)readyPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 environment:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100015a08
- (void)bulkPlugins:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015978
- (void)removePlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000158e0
- (void)addPlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015848
- (id)errorInReply:(id)arg1;	// IMP=0x00000001000156dc
- (id)initWithServiceName:(const char *)arg1;	// IMP=0x0000000100015524

@end
