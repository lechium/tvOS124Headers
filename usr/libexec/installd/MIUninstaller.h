//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MIClientConnection, NSArray, NSDictionary;

@interface MIUninstaller : NSObject
{
    unsigned int _percentComplete;	// 8 = 0x8
    NSDictionary *_receipt;	// 16 = 0x10
    NSArray *_identifiers;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    MIClientConnection *_client;	// 40 = 0x28
    NSArray *_outstandingTerminationAssertions;	// 48 = 0x30
}

+ (id)uninstallerForIdentifiers:(id)arg1 withOptions:(id)arg2 forClient:(id)arg3;	// IMP=0x000000010003a4e0
@property(retain, nonatomic) NSArray *outstandingTerminationAssertions; // @synthesize outstandingTerminationAssertions=_outstandingTerminationAssertions;
@property(nonatomic) unsigned int percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) MIClientConnection *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSDictionary *receipt; // @synthesize receipt=_receipt;
- (void).cxx_destruct;	// IMP=0x000000010003c91c
- (_Bool)performUninstallationWithError:(id *)arg1;	// IMP=0x000000010003b65c
- (void)_releaseOutstandingTerminationAssertions;	// IMP=0x000000010003b4f4
- (void)_acquireTerminationAssertionsForIdentifiers:(id)arg1 uninstallUserDataOnly:(_Bool)arg2;	// IMP=0x000000010003b2bc
- (id)_uninstallBundleWithIdentifier:(id)arg1 waitForDeletion:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010003a9dc
- (_Bool)_uninstallUserStuffForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003a758
- (void)_fireCallbackWithStatus:(id)arg1;	// IMP=0x000000010003a6f8
- (void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x000000010003a590
- (id)initWithIdentifiers:(id)arg1 options:(id)arg2 forClient:(id)arg3;	// IMP=0x000000010003a3f8

@end

