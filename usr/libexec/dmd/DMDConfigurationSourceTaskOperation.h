//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class DMDConfigurationSourceController, NSXPCConnection;

@interface DMDConfigurationSourceTaskOperation : CATOperation
{
    DMDConfigurationSourceController *_controller;	// 24 = 0x18
    NSXPCConnection *_anonymousConnection;	// 32 = 0x20
    NSXPCConnection *_namedConnection;	// 40 = 0x28
}

@property(readonly, nonatomic) NSXPCConnection *namedConnection; // @synthesize namedConnection=_namedConnection;
@property(readonly, nonatomic) NSXPCConnection *anonymousConnection; // @synthesize anonymousConnection=_anonymousConnection;
@property(nonatomic) __weak DMDConfigurationSourceController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;	// IMP=0x000000010003985c
- (void)tryConnectingToConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000394bc
- (void)fetchRemoteProxy:(CDUnknownBlockType)arg1;	// IMP=0x00000001000391ac
- (void)dealloc;	// IMP=0x000000010003913c
- (id)initWithController:(id)arg1;	// IMP=0x0000000100038ee8

@end
