//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MIClientConnection, NSArray, NSDictionary, NSURL;

@interface MIInstaller : NSObject
{
    unsigned char _packageFormat;	// 8 = 0x8
    NSDictionary *_receipt;	// 16 = 0x10
    NSURL *_installURL;	// 24 = 0x18
    NSDictionary *_options;	// 32 = 0x20
    MIClientConnection *_client;	// 40 = 0x28
    NSURL *_stagingRoot;	// 48 = 0x30
    NSURL *_stagingURL;	// 56 = 0x38
    NSArray *_installables;	// 64 = 0x40
    NSArray *_outstandingTerminationAssertions;	// 72 = 0x48
    NSArray *_lockedIdentifiers;	// 80 = 0x50
    unsigned long long _stagingTime;	// 88 = 0x58
    unsigned long long _waitingTime;	// 96 = 0x60
    unsigned long long _preflightAndPatchTime;	// 104 = 0x68
    unsigned long long _verificationTime;	// 112 = 0x70
}

+ (id)installerForURL:(id)arg1 withOptions:(id)arg2 forClient:(id)arg3;	// IMP=0x000000010000cdf8
@property(nonatomic) unsigned long long verificationTime; // @synthesize verificationTime=_verificationTime;
@property(nonatomic) unsigned long long preflightAndPatchTime; // @synthesize preflightAndPatchTime=_preflightAndPatchTime;
@property(nonatomic) unsigned long long waitingTime; // @synthesize waitingTime=_waitingTime;
@property(nonatomic) unsigned long long stagingTime; // @synthesize stagingTime=_stagingTime;
@property(retain, nonatomic) NSArray *lockedIdentifiers; // @synthesize lockedIdentifiers=_lockedIdentifiers;
@property(retain, nonatomic) NSArray *outstandingTerminationAssertions; // @synthesize outstandingTerminationAssertions=_outstandingTerminationAssertions;
@property(retain, nonatomic) NSArray *installables; // @synthesize installables=_installables;
@property(nonatomic) unsigned char packageFormat; // @synthesize packageFormat=_packageFormat;
@property(retain, nonatomic) NSURL *stagingURL; // @synthesize stagingURL=_stagingURL;
@property(retain, nonatomic) NSURL *stagingRoot; // @synthesize stagingRoot=_stagingRoot;
@property(readonly, nonatomic) MIClientConnection *client; // @synthesize client=_client;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(readonly, nonatomic) NSDictionary *receipt; // @synthesize receipt=_receipt;
- (void).cxx_destruct;	// IMP=0x0000000100011c88
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x0000000100010584
- (_Bool)_discoverInstallablesWithError:(id *)arg1;	// IMP=0x000000010000f3e0
- (void)_writeLockBundles:(id)arg1;	// IMP=0x000000010000f1b4
- (void)_acquireTerminationAssertionsForBundles:(id)arg1;	// IMP=0x000000010000ef74
- (id)_bundlesAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000eae8
- (id)_manifestPathForBase:(id)arg1 withIdentifier:(id)arg2 patchType:(unsigned char *)arg3 error:(id *)arg4;	// IMP=0x000000010000e5fc
- (_Bool)_extractPackageContainedSymlink:(_Bool *)arg1 withError:(id *)arg2;	// IMP=0x000000010000ddc4
- (_Bool)_setupPackageStateWithError:(id *)arg1;	// IMP=0x000000010000d1e8
- (_Bool)_takeOwnershipOfInstallableContainingSymlink:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000010000cf88
- (void)_fireCallbackWithStatus:(id)arg1;	// IMP=0x000000010000cf1c
- (void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned int)arg2;	// IMP=0x000000010000cea8
- (void)dealloc;	// IMP=0x000000010000cc14
- (id)initWithURL:(id)arg1 options:(id)arg2 forClient:(id)arg3;	// IMP=0x000000010000cb2c
- (id)init;	// IMP=0x000000010000cb20

@end

