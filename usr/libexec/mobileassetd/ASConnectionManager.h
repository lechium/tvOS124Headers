//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASConnectionManager : NSObject
{
    struct __CFArray *_downloadObserverConnections;	// 8 = 0x8
    struct __CFArray *_cancelClientConnections;	// 16 = 0x10
    struct __CFArray *_pauseClientConnections;	// 24 = 0x18
    struct __CFArray *_resumeClientConnections;	// 32 = 0x20
}

+ (id)connectionManagerWithAsset:(struct __MobileAsset *)arg1 replyingToMessage:(id)arg2 onConnection:(id)arg3 messageKind:(int)arg4;	// IMP=0x000000010002c848
+ (id)managersDict;	// IMP=0x000000010002c7d0
+ (id)managersDictQueue;	// IMP=0x000000010002c768
- (void)tearDown;	// IMP=0x000000010002cf04
- (void)sendConnectionTerminationToClients:(int)arg1;	// IMP=0x000000010002ce4c
- (void)sendProgressMessageWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3 toClients:(int)arg4;	// IMP=0x000000010002cd94
- (void)sendErrorMessageWithError:(id)arg1 toClients:(int)arg2;	// IMP=0x000000010002ccf4
- (void)sendStatus:(int)arg1 toClients:(int)arg2;	// IMP=0x000000010002cc3c
- (void)sendStatus:(int)arg1 toClientConnections:(struct __CFArray *)arg2;	// IMP=0x000000010002cbd4
- (void)addClientOfMessageKind:(int)arg1 replyingToMessage:(id)arg2 onConnection:(id)arg3;	// IMP=0x000000010002ca90
- (void)dealloc;	// IMP=0x000000010002c61c
- (id)init;	// IMP=0x000000010002c558

@end
