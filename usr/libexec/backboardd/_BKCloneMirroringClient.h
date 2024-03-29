//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSPortDeathSentinel;
@protocol OS_dispatch_source, _BKCloneMirroringClientDelegate;

@interface _BKCloneMirroringClient : NSObject
{
    BSPortDeathSentinel *_mirroringModePortSentinel;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_mirroringModePortWatcher;	// 16 = 0x10
    id <_BKCloneMirroringClientDelegate> _delegate;	// 24 = 0x18
    int _pid;	// 32 = 0x20
    unsigned long long _mode;	// 40 = 0x28
}

+ (id)defaultClient;	// IMP=0x000000010004fe24
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <_BKCloneMirroringClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000500c4
- (id)initWithMode:(unsigned long long)arg1 port:(id)arg2 auditToken:(id)arg3;	// IMP=0x000000010004feb0

@end

