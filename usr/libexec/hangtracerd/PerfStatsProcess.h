//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PerfStatsProcess : NSObject
{
    int _pid;	// 8 = 0x8
    unsigned long long _uniqueIdentifier;	// 16 = 0x10
    NSString *_processName;	// 24 = 0x18
}

+ (id)processWithPID:(int)arg1 name:(const char *)arg2;	// IMP=0x0000000100013f3c
+ (unsigned long long)generateUniqueIDForPID:(int)arg1 processName:(id)arg2;	// IMP=0x0000000100013f08
@property(readonly, copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) unsigned long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;	// IMP=0x00000001000140c4
- (id)initWithPID:(int)arg1 name:(id)arg2;	// IMP=0x0000000100013fcc

@end

