//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKBulletinService-Protocol.h"

@class NSString;

@interface GKBulletinService : GKService <GKBulletinService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100130dd0
+ (Class)interfaceClass;	// IMP=0x0000000100130dbc
- (_Bool)requiresAuthentication;	// IMP=0x0000000100130dd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
