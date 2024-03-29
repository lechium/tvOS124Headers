//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface MSDPricingUpdateController : NSObject
{
    _Bool _switchModeAfterCompletion;	// 8 = 0x8
    _Bool _needUpdate;	// 9 = 0x9
    _Bool _canceled;	// 10 = 0xa
    int _state;	// 12 = 0xc
    NSTimer *_heartBeatMonitor;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100015ac0
@property _Bool canceled; // @synthesize canceled=_canceled;
@property int state; // @synthesize state=_state;
@property(retain, nonatomic) NSTimer *heartBeatMonitor; // @synthesize heartBeatMonitor=_heartBeatMonitor;
@property _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property _Bool switchModeAfterCompletion; // @synthesize switchModeAfterCompletion=_switchModeAfterCompletion;
- (void).cxx_destruct;	// IMP=0x000000010001668c
- (void)pricingUpdateTimeOut:(id)arg1;	// IMP=0x00000001000163f8
- (void)restartMonitor;	// IMP=0x000000010001624c
- (void)stopMonitor;	// IMP=0x000000010001616c
@property(readonly) _Bool completed;
- (void)operationCanceled;	// IMP=0x0000000100016054
- (void)receivedOtherMessages:(id)arg1;	// IMP=0x0000000100015ff0
- (void)receivedCompletionNotice:(id)arg1;	// IMP=0x0000000100015ea0
- (void)receivedHeartBeat:(id)arg1;	// IMP=0x0000000100015d44
- (void)receivedUpdateRequest:(id)arg1;	// IMP=0x0000000100015b40

@end

