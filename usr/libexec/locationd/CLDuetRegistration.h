//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, _CDContextualChangeRegistration;
@protocol _CDContext;

@interface CLDuetRegistration : NSObject
{
    id <_CDContext> _context;	// 8 = 0x8
    _CDContextualChangeRegistration *_cdRegistration;	// 16 = 0x10
    NSMutableSet *_clients;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) _CDContextualChangeRegistration *cdRegistration; // @synthesize cdRegistration=_cdRegistration;
@property(retain, nonatomic) id <_CDContext> context; // @synthesize context=_context;
- (void)deregisterCallback;	// IMP=0x0000000100407b60
- (void)registerCallback;	// IMP=0x00000001004077d4
- (void)removeAllClients;	// IMP=0x00000001004076b4
- (void)removeClient:(id)arg1;	// IMP=0x0000000100407634
- (void)addClient:(id)arg1;	// IMP=0x00000001004075b0
- (void)dealloc;	// IMP=0x0000000100407528
- (id)init;	// IMP=0x00000001004074b8

@end

