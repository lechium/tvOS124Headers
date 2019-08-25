//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcessAssertion, NSObject<OS_dispatch_queue>;

@interface MZProcessAssertion : NSObject
{
    unsigned long long _identifier;	// 8 = 0x8
    BKSProcessAssertion *_bkProcessAssertion;	// 16 = 0x10
    id _expirationObserver;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _expirationBlock;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType expirationBlock; // @synthesize expirationBlock=_expirationBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id expirationObserver; // @synthesize expirationObserver=_expirationObserver;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;	// IMP=0x0000000100088fcc
- (void)invalidate;	// IMP=0x0000000100088ec8
- (void)_expireBackgroundTask;	// IMP=0x0000000100088cd0
@property(retain, nonatomic) BKSProcessAssertion *bkProcessAssertion; // @synthesize bkProcessAssertion=_bkProcessAssertion;
- (id)_onQueueGetBkProcessAssertion;	// IMP=0x0000000100088b64
- (void)_onQueueSetBkProcessAssertion:(id)arg1;	// IMP=0x00000001000888b4
- (void)dealloc;	// IMP=0x0000000100088814
- (id)description;	// IMP=0x0000000100088778
- (id)initWithExpirationBlock:(CDUnknownBlockType)arg1 debugDescription:(id)arg2;	// IMP=0x0000000100088350

@end

