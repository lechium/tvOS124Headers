//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol SDNetworkEjecterDelegate;

__attribute__((visibility("hidden")))
@interface SDNetworkEjecter : NSObject
{
    struct __SFNode *_node;	// 8 = 0x8
    int _mountedCount;	// 16 = 0x10
    int _ejectedCount;	// 20 = 0x14
    NSNumber *_flags;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    id <SDNetworkEjecterDelegate> _delegate;	// 40 = 0x28
}

@property __weak id <SDNetworkEjecterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy) NSNumber *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;	// IMP=0x0000000100092a4c
- (void)stop;	// IMP=0x0000000100092974
- (int)start;	// IMP=0x00000001000928b4
- (void)eject;	// IMP=0x000000010009265c
- (void)ejectMountPoints:(id)arg1 useAssistant:(_Bool)arg2;	// IMP=0x0000000100092658
- (void)notifyClientAboutEject:(int)arg1;	// IMP=0x0000000100092494
- (void)dealloc;	// IMP=0x0000000100092444
- (id)initWithNode:(struct __SFNode *)arg1;	// IMP=0x00000001000923a4

@end

