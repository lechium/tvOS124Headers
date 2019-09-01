//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDBonjourResolverDelegate-Protocol.h"

@class NSNumber, NSString, SDBonjourResolver;
@protocol SDNetworkResolverDelegate;

__attribute__((visibility("hidden")))
@interface SDNetworkResolver : NSObject <SDBonjourResolverDelegate>
{
    struct __SFNode *_node;	// 8 = 0x8
    SDBonjourResolver *_resolver;	// 16 = 0x10
    void *_session;	// 24 = 0x18
    NSNumber *_flags;	// 32 = 0x20
    NSString *_protocol;	// 40 = 0x28
    id <SDNetworkResolverDelegate> _delegate;	// 48 = 0x30
}

@property __weak id <SDNetworkResolverDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;	// IMP=0x00000001000a546c
- (void)stop;	// IMP=0x00000001000a53a0
- (int)start;	// IMP=0x00000001000a5050
- (void)mount;	// IMP=0x00000001000a504c
- (void)bonjourResolverDidChange:(id)arg1;	// IMP=0x00000001000a4d20
- (void)mountDiskImageAsync;	// IMP=0x00000001000a4d1c
- (void)notifyClientAboutResolve:(int)arg1;	// IMP=0x00000001000a4bc0
- (void)dealloc;	// IMP=0x00000001000a4b70
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x00000001000a4ac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

