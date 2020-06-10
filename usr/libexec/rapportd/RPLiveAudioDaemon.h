//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPLiveAudioDaemon : NSObject
{
    AVAudioSession *_audioSession;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    struct NSMutableDictionary *_sessionMap;	// 24 = 0x18
    id <RPMessageable> _messenger;	// 32 = 0x20
}

@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void).cxx_destruct;	// IMP=0x000000010003bc44
- (void)_handleDataEvent:(id)arg1 options:(id)arg2;	// IMP=0x000000010003ba98
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003b798
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003b298
- (void)peerDisconnected:(id)arg1;	// IMP=0x000000010003b1ac
- (void)invalidate;	// IMP=0x000000010003aff8
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x000000010003abd0
- (id)init;	// IMP=0x000000010003ab60

@end
