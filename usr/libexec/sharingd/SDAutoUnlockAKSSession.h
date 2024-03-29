//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockAKSSession : NSObject
{
    struct __ACMHandle *_acmContext;	// 8 = 0x8
    _Bool _ltkNeedsFixing;	// 16 = 0x10
    _Bool _originator;	// 17 = 0x11
    _Bool _usingEscrow;	// 18 = 0x12
    long long _aksSessionID;	// 24 = 0x18
    NSData *_localLTK;	// 32 = 0x20
    NSData *_remoteLTK;	// 40 = 0x28
    long long _sessionType;	// 48 = 0x30
    NSData *_escrowSecret;	// 56 = 0x38
    NSString *_deviceID;	// 64 = 0x40
    NSData *_externalACMContext;	// 72 = 0x48
}

@property(copy, nonatomic) NSData *externalACMContext; // @synthesize externalACMContext=_externalACMContext;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) _Bool usingEscrow; // @synthesize usingEscrow=_usingEscrow;
@property(copy, nonatomic) NSData *escrowSecret; // @synthesize escrowSecret=_escrowSecret;
@property(nonatomic) _Bool originator; // @synthesize originator=_originator;
@property(nonatomic) long long sessionType; // @synthesize sessionType=_sessionType;
@property(copy, nonatomic) NSData *remoteLTK; // @synthesize remoteLTK=_remoteLTK;
@property(copy, nonatomic) NSData *localLTK; // @synthesize localLTK=_localLTK;
@property(nonatomic) _Bool ltkNeedsFixing; // @synthesize ltkNeedsFixing=_ltkNeedsFixing;
@property(nonatomic) long long aksSessionID; // @synthesize aksSessionID=_aksSessionID;
- (void).cxx_destruct;	// IMP=0x000000010013e224
- (id)generateACMContextData;	// IMP=0x000000010013e084
- (id)generateSessionToken;	// IMP=0x000000010013e034
- (_Bool)resetSession;	// IMP=0x000000010013dfd8
- (_Bool)confirmSession;	// IMP=0x000000010013df90
- (long long)finalizeEscrowPairing:(id)arg1;	// IMP=0x000000010013df24
- (id)generateEscrowSecret;	// IMP=0x000000010013ded4
- (_Bool)stepSessionWithData:(id)arg1 outputData:(id *)arg2;	// IMP=0x000000010013de58
- (_Bool)sessionIsValid;	// IMP=0x000000010013de34
- (void)fixRemoteLTKWithStatus:(long long)arg1 retryBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010013de30
- (void)fixRemoteLTK;	// IMP=0x000000010013dccc
- (void)setupAuthorizationSession;	// IMP=0x000000010013da98
- (void)setupSession;	// IMP=0x000000010013d398
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 escrowSecret:(id)arg6 usingEscrow:(_Bool)arg7 externalACMContext:(id)arg8;	// IMP=0x000000010013d1c0
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 escrowSecret:(id)arg6;	// IMP=0x000000010013d0fc
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 usingEscrow:(_Bool)arg6;	// IMP=0x000000010013d04c
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5 externalACMContext:(id)arg6;	// IMP=0x000000010013cf88
- (id)initWithLocalLTK:(id)arg1 remoteLTK:(id)arg2 sessionType:(long long)arg3 originator:(_Bool)arg4 deviceID:(id)arg5;	// IMP=0x000000010013cee4

@end

