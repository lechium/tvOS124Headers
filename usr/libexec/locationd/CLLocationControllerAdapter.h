//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLLocationControllerProtocol-Protocol.h"

@class NSString;

@interface CLLocationControllerAdapter : CLLocationProviderAdapter <CLLocationControllerProtocol>
{
}

+ (id)getSilo;	// IMP=0x00000001002528b4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100252890
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x000000010025280c
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x00000001002531d8
- (_Bool)syncgetActiveTechs:(set_7b7d70f4 *)arg1;	// IMP=0x0000000100252d38
- (_Bool)syncgetMetric:(struct LocationMapMatching *)arg1;	// IMP=0x0000000100252d00
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100252cc4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100252c80
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100252c4c
- (struct CLLocationController *)adaptee;	// IMP=0x0000000100252c14
- (void)endService;	// IMP=0x0000000100252bf0
- (void)beginService;	// IMP=0x0000000100252978
- (id)init;	// IMP=0x0000000100252934

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

