//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLNotifierServiceClientProtocol-Protocol.h"

@class NSString;

@interface CLDaemonClientAdapter : NSObject <CLNotifierServiceClientProtocol>
{
    _Bool _valid;	// 8 = 0x8
    struct CLDaemonClient *_client;	// 16 = 0x10
}

+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00000001006c8ca0
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001006c8c1c
@property(nonatomic) struct CLDaemonClient *client; // @synthesize client=_client;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x00000001006c8d14
- (id)initWithDaemonClient:(struct CLDaemonClient *)arg1;	// IMP=0x00000001006c8cc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
