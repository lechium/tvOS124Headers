//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class MTBaseQueryObserver, MTDefaultsChangeNotifier, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MTBaseProcessor : MTSingleton
{
    MTBaseQueryObserver *_queryObserver;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MTBaseQueryObserver *queryObserver; // @synthesize queryObserver=_queryObserver;
- (void).cxx_destruct;	// IMP=0x00000001000b7b98
- (void)enqueueWorkBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b7a40
- (id)defaultPropertiesThatAffectPredicate;	// IMP=0x00000001000b7a38
- (void)results:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b79cc
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000b7970
- (id)predicate;	// IMP=0x00000001000b792c
- (id)entityName;	// IMP=0x00000001000b78e8
- (double)updatePredicateDuration;	// IMP=0x00000001000b78e0
- (void)updatePredicate;	// IMP=0x00000001000b7870
- (id)createQueryObserver;	// IMP=0x00000001000b75d8
- (_Bool)isRunning;	// IMP=0x00000001000b75c0
- (void)start;	// IMP=0x00000001000b6fb4

@end

