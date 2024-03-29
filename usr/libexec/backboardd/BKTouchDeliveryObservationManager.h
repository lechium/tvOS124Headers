//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKEventFocusManagerServer, BKTouchDeliveryGenericGestureFocusObserver, BKTouchDeliveryStatisticsLoggingObserver, NSMapTable;
@protocol OS_dispatch_queue;

@interface BKTouchDeliveryObservationManager : NSObject
{
    BKEventFocusManagerServer *_focusServer;	// 8 = 0x8
    NSMapTable *_touchIdentifiersToContextIDs;	// 16 = 0x10
    NSMapTable *_touchIdentifiersToPids;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_touchMapQueue;	// 32 = 0x20
    BKTouchDeliveryStatisticsLoggingObserver *_loggingObserver;	// 40 = 0x28
    BKTouchDeliveryGenericGestureFocusObserver *_focusFollowsTouchObserver;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010001995c
- (void).cxx_destruct;	// IMP=0x0000000100019f64
- (void)noteTouchUpOccured:(unsigned int)arg1 detached:(_Bool)arg2 tapToWake:(_Bool)arg3 transducerType:(unsigned int)arg4 context:(unsigned int)arg5 clientPort:(unsigned int)arg6 observers:(id)arg7;	// IMP=0x0000000100019dd8
- (void)noteTouchDetached:(unsigned int)arg1 context:(unsigned int)arg2 clientPort:(unsigned int)arg3 observers:(id)arg4;	// IMP=0x0000000100019c74
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x0000000100019bc8
- (id)init;	// IMP=0x00000001000199dc

@end

