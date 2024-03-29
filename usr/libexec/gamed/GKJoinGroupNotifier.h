//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKJoinGroup, NSError, NSLock, NSMutableArray;

@interface GKJoinGroupNotifier : NSObject
{
    GKJoinGroup *_group;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    NSMutableArray *_updateQueue;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain) NSLock *lock; // @synthesize lock=_lock;
- (void)setResult:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x000000010008025c
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) GKJoinGroup *group; // @synthesize group=_group;
- (oneway void)release;	// IMP=0x00000001000800d4
- (id)retain;	// IMP=0x0000000100080024
- (void)dealloc;	// IMP=0x000000010007ff8c
- (id)init;	// IMP=0x000000010007fee8

@end

