//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSURLStorageTask.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSURLStorageTaskDeleteHostNames : NSURLStorageTask
{
    NSString *_partition;	// 48 = 0x30
    NSArray *_hostNames;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000c30c
- (void)run;	// IMP=0x000000010000bf94
- (id)initWithHostNames:(id)arg1 optionalPartition:(id)arg2 andTaskManager:(id)arg3;	// IMP=0x000000010000be78

@end
