//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSAccount;

@interface TVSettingsITMSSandboxFacade : NSObject
{
    _Bool _isSandboxUIEnabled;	// 8 = 0x8
    SSAccount *_sandboxAccount;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000d9d18
@property(retain, nonatomic) SSAccount *sandboxAccount; // @synthesize sandboxAccount=_sandboxAccount;
@property(nonatomic) _Bool isSandboxUIEnabled; // @synthesize isSandboxUIEnabled=_isSandboxUIEnabled;
- (void).cxx_destruct;	// IMP=0x00000001000da094
- (void)didBecomeActive:(id)arg1;	// IMP=0x00000001000da044
- (void)updateSandboxAccountState;	// IMP=0x00000001000d9f78
- (id)_getSandboxAccount;	// IMP=0x00000001000d9ec8
- (void)dealloc;	// IMP=0x00000001000d9e40
- (id)init;	// IMP=0x00000001000d9d98

@end

