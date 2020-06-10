//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MSDWorkQueueSet : NSObject
{
    NSObject<OS_dispatch_queue> *_demoUpdateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_messageQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pollingQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_browseQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_blockingUiQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000010000bf2c
@property(retain) NSObject<OS_dispatch_queue> *blockingUiQueue; // @synthesize blockingUiQueue=_blockingUiQueue;
@property(retain) NSObject<OS_dispatch_queue> *browseQueue; // @synthesize browseQueue=_browseQueue;
@property(retain) NSObject<OS_dispatch_queue> *pollingQueue; // @synthesize pollingQueue=_pollingQueue;
@property(retain) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSObject<OS_dispatch_queue> *demoUpdateQueue; // @synthesize demoUpdateQueue=_demoUpdateQueue;
- (void).cxx_destruct;	// IMP=0x000000010000c130

@end
