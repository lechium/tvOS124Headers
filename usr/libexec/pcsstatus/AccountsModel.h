//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSString;
@protocol OS_dispatch_queue;

@interface AccountsModel : NSObject
{
    _Bool _accountsChanged;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_dsid;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_lastError;	// 40 = 0x28
    ACAccountStore *_store;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)defaultAccountsModel;	// IMP=0x0000000100003b84
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) ACAccountStore *store; // @synthesize store=_store;
@property _Bool accountsChanged; // @synthesize accountsChanged=_accountsChanged;
- (void).cxx_destruct;	// IMP=0x0000000100004728
- (void)update;	// IMP=0x0000000100004394
@property(readonly) NSString *lastError; // @synthesize lastError=_lastError;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly) NSString *username; // @synthesize username=_username;
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0000000100003d98
- (id)init;	// IMP=0x0000000100003c1c

@end

