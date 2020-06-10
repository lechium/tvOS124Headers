//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "OTATaskingAgent-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface OTATaskingAgent : NSObject <NSXPCListenerDelegate, OTATaskingAgent>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

+ (id)sharedListenerDelegate;	// IMP=0x00000001000016e0
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;	// IMP=0x0000000100002834
- (id)randomHashWithKey:(id)arg1;	// IMP=0x0000000100002618
- (id)hexStringForSHA1Digest:(const char *)arg1;	// IMP=0x000000010000255c
- (id)legacyCrashreporterKey;	// IMP=0x000000010000239c
- (id)checkForExistenceAndCreateKey:(id)arg1;	// IMP=0x0000000100002110
- (void)awdKeyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002088
- (void)crashreporterKeyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002000
- (void)deletePreferenceForDomain:(id)arg1 preference:(id)arg2 UID:(unsigned int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100001d30
- (void)setPreferenceForDomain:(id)arg1 preference:(id)arg2 value:(id)arg3 UID:(unsigned int)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100001934
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100001840
- (id)init;	// IMP=0x0000000100001760

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
