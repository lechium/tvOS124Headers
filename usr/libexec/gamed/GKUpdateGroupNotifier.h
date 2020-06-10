//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKUpdateGroup, NSError, NSLock, NSMutableArray;

@interface GKUpdateGroupNotifier : NSObject
{
    GKUpdateGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)addUpdatesFromGroup:(id)arg1;	// IMP=0x000000010010a924
- (void)addUpdate:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x000000010010a778
- (void)updateError:(id)arg1;	// IMP=0x000000010010a6f0
- (void)setGroup:(id)arg1;	// IMP=0x000000010010a6dc
- (id)group;	// IMP=0x000000010010a6cc
- (oneway void)release;	// IMP=0x000000010010a600
- (id)retain;	// IMP=0x000000010010a550
- (void)dealloc;	// IMP=0x000000010010a4b8
- (id)init;	// IMP=0x000000010010a414

@end

