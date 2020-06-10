//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NDCallbackQueueDelegate;

__attribute__((visibility("hidden")))
@interface NDCallbackQueue : NSObject
{
    NSMutableArray *_callbacks;	// 8 = 0x8
    id <NDCallbackQueueDelegate> _delegate;	// 16 = 0x10
}

@property __weak id <NDCallbackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100050630
- (unsigned long long)count;	// IMP=0x00000001000505e4
- (void)drainCallbacksForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x000000010005036c
- (void)performAllCallbacks;	// IMP=0x0000000100050220
- (void)addPendingCallback:(id)arg1 forceWakeup:(_Bool)arg2;	// IMP=0x0000000100050114
- (void)addPendingCallbackToFront:(id)arg1;	// IMP=0x00000001000500e8
- (void)drainCallback:(id)arg1;	// IMP=0x000000010004fcb0
- (void)performCallback:(id)arg1;	// IMP=0x000000010004d104
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010004d028

@end
