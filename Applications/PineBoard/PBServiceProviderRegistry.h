//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSApplicationStateMonitor, NSMutableDictionary;

@interface PBServiceProviderRegistry : NSObject
{
    BKSApplicationStateMonitor *_appStateMonitor;	// 8 = 0x8
    NSMutableDictionary *_clientEndpoints;	// 16 = 0x10
    NSMutableDictionary *_clientResponseBlocks;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010003286c
- (void).cxx_destruct;	// IMP=0x0000000100033b98
- (void)endpointForIdentifier:(id)arg1 providerType:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000334c4
- (void)clearEndpointsForIdentifier:(id)arg1;	// IMP=0x0000000100032fa8
- (void)registerEndpoint:(id)arg1 forIdentifier:(id)arg2 providerType:(id)arg3;	// IMP=0x0000000100032b44
- (void)dealloc;	// IMP=0x0000000100032aec
- (id)init;	// IMP=0x00000001000328f0

@end

