//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLIntersiloServiceProtocol-Protocol.h"
#import "CLIntersiloUniverse-Protocol.h"

@class CLServiceVendor, CLSilo, NSString;
@protocol CLIntersiloUniverse;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse>
{
    CLSilo *_silo;	// 8 = 0x8
    CLServiceVendor *_vendor;	// 16 = 0x10
    _Bool _valid;	// 24 = 0x18
}

+ (_Bool)isSupported;	// IMP=0x0000000100864f38
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100864648
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000001008644d4
+ (id)getSilo;	// IMP=0x000000010086434c
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) CLServiceVendor *vendor; // @synthesize vendor=_vendor;
@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void).cxx_destruct;	// IMP=0x0000000100865054
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) id <CLIntersiloUniverse> universe;
- (void)setVendor:(id)arg1;	// IMP=0x0000000100864d48
- (void)setSilo:(id)arg1;	// IMP=0x0000000100864b5c
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2;	// IMP=0x000000010086496c
- (id)init;	// IMP=0x00000001008647e4

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

