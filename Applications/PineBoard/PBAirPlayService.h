//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBSAirPlayServiceInterface.h"

@class NSString, PBSystemServiceConnection;

@interface PBAirPlayService : NSObject <PBSAirPlayServiceInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
}

@property(readonly, nonatomic) PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void).cxx_destruct;	// IMP=0x00000001000f12f4
- (void)triggerUserActivity;	// IMP=0x00000001000f10a0
- (void)requestPresentationWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f0e84
- (void)invalidate;	// IMP=0x00000001000f0e80
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001000f0e00
- (id)init;	// IMP=0x00000001000f0de8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

