//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NWConnection;
@protocol GKNWConnectionWrapperDelegate, OS_dispatch_queue;

@interface GKNWConnectionWrapper : NSObject
{
    id <GKNWConnectionWrapperDelegate> _delegate;	// 8 = 0x8
    NWConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writeQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NWConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <GKNWConnectionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010009d764
- (void)cancelConnection;	// IMP=0x000000010009d69c
- (void)readData;	// IMP=0x000000010009d698
- (void)_sendData:(id)arg1;	// IMP=0x000000010009d694
- (_Bool)sendData:(id)arg1;	// IMP=0x000000010009d620
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009d3e4
- (void)dealloc;	// IMP=0x000000010009d338
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x000000010009d238

@end

