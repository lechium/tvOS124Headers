//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSString;

@interface CLPushServiceState : NSObject <APSConnectionDelegate>
{
    APSConnection *apsConnection;	// 8 = 0x8
    CDUnknownBlockType connectionStatusBlock;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType connectionStatusBlock; // @synthesize connectionStatusBlock;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x00000001007432c4
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000001007432c0
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000001007432bc
- (_Bool)isConnected;	// IMP=0x00000001007431b8
- (void)dealloc;	// IMP=0x0000000100743138
- (id)initWithStatusBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100742ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

