//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDBubbled-Protocol.h"
#import "RDClient-Protocol.h"

@class NSMutableArray, NSString, NSXPCConnection;

@interface RDClient : NSObject <RDClient, BDBubbled>
{
    _Bool _stakeholderIsRegistered;	// 8 = 0x8
    _Bool _wasToldWillSwitchUser;	// 9 = 0x9
    _Bool _criticalStakeHolder;	// 10 = 0xa
    _Bool _bubbleStakeHolder;	// 11 = 0xb
    _Bool _bubblePopstakeholderIsRegistered;	// 12 = 0xc
    int _switchStakeHolderKind;	// 16 = 0x10
    NSString *_machServiceName;	// 24 = 0x18
    NSMutableArray *_userSwitchTasks;	// 32 = 0x20
    NSMutableArray *_userSyncTasks;	// 40 = 0x28
    NSXPCConnection *_xpcConnection;	// 48 = 0x30
}

+ (id)sharedBubbleXPCInterface;	// IMP=0x0000000100012b94
+ (id)sharedXPCInterface;	// IMP=0x0000000100012b10
+ (id)clientWithXPCConnection:(id)arg1;	// IMP=0x0000000100012ab0
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSMutableArray *userSyncTasks; // @synthesize userSyncTasks=_userSyncTasks;
@property(retain, nonatomic) NSMutableArray *userSwitchTasks; // @synthesize userSwitchTasks=_userSwitchTasks;
@property(nonatomic) int switchStakeHolderKind; // @synthesize switchStakeHolderKind=_switchStakeHolderKind;
@property(nonatomic) _Bool bubblePopstakeholderIsRegistered; // @synthesize bubblePopstakeholderIsRegistered=_bubblePopstakeholderIsRegistered;
@property(nonatomic) _Bool bubbleStakeHolder; // @synthesize bubbleStakeHolder=_bubbleStakeHolder;
@property(nonatomic) _Bool criticalStakeHolder; // @synthesize criticalStakeHolder=_criticalStakeHolder;
@property(nonatomic) _Bool wasToldWillSwitchUser; // @synthesize wasToldWillSwitchUser=_wasToldWillSwitchUser;
@property(nonatomic) _Bool stakeholderIsRegistered; // @synthesize stakeholderIsRegistered=_stakeholderIsRegistered;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void).cxx_destruct;	// IMP=0x0000000100013ab8
- (void)clearTaskLists;	// IMP=0x00000001000138ec
- (void)bubbleShouldPop;	// IMP=0x0000000100013890
- (void)bubbleDidPop;	// IMP=0x0000000100013850
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000137e4
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x00000001000137a4
- (void)userSwitchTaskListDidUpdate;	// IMP=0x0000000100013764
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001368c
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000135b4
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100013440
@property(readonly, nonatomic) _Bool hasUserSyncTasks;
- (_Bool)removeUserSyncTask:(id)arg1;	// IMP=0x00000001000132d4
- (void)addUserSyncTask:(id)arg1;	// IMP=0x0000000100013264
@property(readonly, nonatomic) _Bool hasUserSwitchTasks;
- (_Bool)removeUserSwitchTask:(id)arg1;	// IMP=0x00000001000130f8
- (id)taskDictionaryInArray:(id)arg1 withUUIDString:(id)arg2;	// IMP=0x0000000100012f48
- (void)addUserSwitchTask:(id)arg1;	// IMP=0x0000000100012ed8
- (id)proxy;	// IMP=0x0000000100012dec
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000100012d08
@property(readonly, nonatomic) int pid;
- (id)init;	// IMP=0x0000000100012c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
