//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSilo, NSMutableArray, NSString;

@interface CLMescalSigner : NSObject
{
    CLSilo *_silo;	// 8 = 0x8
    NSMutableArray *_worklist;	// 16 = 0x10
    _Bool _keyExchangeStarted;	// 24 = 0x18
    _Bool _keyExchangeComplete;	// 25 = 0x19
    struct FairPlayHWInfo_ _hardwareInfo;	// 28 = 0x1c
    struct FPSAPContextOpaque_ *_session;	// 56 = 0x38
    NSString *_mescalVersion;	// 64 = 0x40
    NSString *_mescalCertURL;	// 72 = 0x48
    NSString *_mescalExchangeURL;	// 80 = 0x50
    double _replaceAfter;	// 88 = 0x58
}

@property(readonly, nonatomic) double replaceAfter; // @synthesize replaceAfter=_replaceAfter;
- (void)_churnMescalExchangeData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a16ec
- (void)_initializeMescalWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a0bb0
- (void)_doSigningWhenReady;	// IMP=0x00000001001a0740
- (void)signData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a00f0
- (void)dealloc;	// IMP=0x000000010019fe74
- (id)initInSilo:(id)arg1;	// IMP=0x000000010019fcf4

@end

