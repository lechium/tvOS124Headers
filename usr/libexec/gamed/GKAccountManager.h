//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface GKAccountManager : NSObject
{
    ACAccountStore *_internalStore;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0000000100103eec
@property(readonly, retain, nonatomic) ACAccountStore *internalStore; // @synthesize internalStore=_internalStore;
- (id)primaryAccount;	// IMP=0x0000000100104030
- (void)dealloc;	// IMP=0x0000000100103fd8
- (id)init;	// IMP=0x0000000100103f64

@end

