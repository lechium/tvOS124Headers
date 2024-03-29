//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;
@protocol OS_os_transaction, OS_xpc_object;

@interface CloudXPCService : NSObject
{
    NSMutableArray *_cloudRetain;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcServer;	// 16 = 0x10
    NSObject<OS_xpc_object> *_serverConnection;	// 24 = 0x18
    NSObject<OS_xpc_object> *_cloudKitConnection;	// 32 = 0x20
    NSObject<OS_os_transaction> *_persistenceAssertion;	// 40 = 0x28
    NSTimer *_killTimer;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000100014274
@property(retain, nonatomic) NSTimer *killTimer; // @synthesize killTimer=_killTimer;
@property(retain, nonatomic) NSObject<OS_os_transaction> *persistenceAssertion; // @synthesize persistenceAssertion=_persistenceAssertion;
@property(retain, nonatomic) NSObject<OS_xpc_object> *cloudKitConnection; // @synthesize cloudKitConnection=_cloudKitConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain) NSMutableArray *cloudRetain; // @synthesize cloudRetain=_cloudRetain;
- (void).cxx_destruct;	// IMP=0x0000000100016028
- (void)handleConnection:(id)arg1;	// IMP=0x0000000100015e8c
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100014ffc
- (void)sendCloudKitMsg:(id)arg1 args:(id)arg2;	// IMP=0x0000000100014d94
- (void)establishBluetoothdXPC;	// IMP=0x0000000100014bf8
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x0000000100014a48
- (void)releasePersistenceAssertion;	// IMP=0x0000000100014854
- (void)takePersistenceAssertion;	// IMP=0x00000001000146c4
- (void)dealloc;	// IMP=0x000000010001460c
- (void)timerFired:(id)arg1;	// IMP=0x0000000100014578
- (void)waitForBuddySetup;	// IMP=0x0000000100014514
- (id)init;	// IMP=0x00000001000142f4

@end

