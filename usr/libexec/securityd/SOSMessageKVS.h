//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSMessage.h"

__attribute__((visibility("hidden")))
@interface SOSMessageKVS : SOSMessage
{
    struct __CFDictionary *pending_changes;	// 32 = 0x20
}

@property struct __CFDictionary *pending_changes; // @synthesize pending_changes;
- (_Bool)SOSTransportMessageSendMessages:(id)arg1 pm:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000a9c18
- (_Bool)SOSTransportMessageSyncWithPeers:(id)arg1 p:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000a9b28
- (struct __CFDictionary *)SOSTransportMessageHandlePeerMessageReturnsHandledCopy:(id)arg1 peerMessages:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000a99cc
- (_Bool)SOSTransportMessageCleanupAfterPeerMessages:(id)arg1 peers:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000a98e8
- (long long)SOSTransportMessageGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001000a98e0
- (_Bool)SOSTransportMessageKVSAppendKeyInterest:(id)arg1 ak:(struct __CFArray *)arg2 firstUnlock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x00000001000a96ec
- (id)SOSTransportMessageGetAccount;	// IMP=0x00000001000a96dc
- (void *)SOSTransportMessageGetEngine;	// IMP=0x00000001000a96cc
- (struct __CFString *)SOSTransportMessageGetCircleName;	// IMP=0x00000001000a96bc
- (long long)SOSTransportMessageGetTransportType;	// IMP=0x00000001000a96b4
- (void)dealloc;	// IMP=0x00000001000a9658
- (id)initWithAccount:(id)arg1 andName:(id)arg2;	// IMP=0x00000001000a94e8

@end
