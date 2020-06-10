//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLActivityLoggerProtocol-Protocol.h"

@class NSString;

@interface CLActivityLoggerAdapter : CLIntersiloService <CLActivityLoggerProtocol>
{
    struct CLActivityLogger *_logger;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x000000010015b4c0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010015b49c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010015b418
@property(nonatomic) struct CLActivityLogger *logger; // @synthesize logger=_logger;
- (void)logData:(id)arg1;	// IMP=0x000000010015b668
- (void)endService;	// IMP=0x000000010015b630
- (void)beginService;	// IMP=0x000000010015b584
- (id)init;	// IMP=0x000000010015b540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
