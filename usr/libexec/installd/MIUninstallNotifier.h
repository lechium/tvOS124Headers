//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIUninstallNotifier : NSObject
{
    NSArray *_removals;	// 8 = 0x8
}

@property(readonly, nonatomic) NSArray *removals; // @synthesize removals=_removals;
- (void).cxx_destruct;	// IMP=0x000000010005a63c
- (void)performRemovalWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a274
- (id)initWithContainersToRemove:(id)arg1;	// IMP=0x000000010005a1f4

@end

