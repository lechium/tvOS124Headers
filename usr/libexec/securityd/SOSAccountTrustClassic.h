//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SOSAccountTrust.h"

__attribute__((visibility("hidden")))
@interface SOSAccountTrustClassic : SOSAccountTrust
{
}

+ (id)trustClassic;	// IMP=0x000000010008392c
- (void)addRingDictionary;	// IMP=0x000000010008273c
- (_Bool)clientPing:(id)arg1;	// IMP=0x0000000100082498
- (_Bool)removeIncompleteiCloudIdentities:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100082348
- (struct __SecKey *)copyDeviceKey:(struct __CFError **)arg1;	// IMP=0x00000001000822d4
- (_Bool)postDebugScope:(id)arg1 scope:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000822ac
- (struct __OpaqueSOSEngine *)getDataSourceEngine:(struct SOSDataSourceFactory *)arg1;	// IMP=0x000000010008224c
- (_Bool)isSyncingV0;	// IMP=0x00000001000821a0
- (_Bool)requestSyncWithAllPeers:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100082010
- (struct __CFSet *)syncWithPeers:(id)arg1 peerIDs:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100081e1c
- (char *)encodeToDER:(id)arg1 err:(id *)arg2 start:(const char *)arg3 end:(char *)arg4;	// IMP=0x0000000100081b08
- (unsigned long long)getDEREncodedSize:(id)arg1 err:(id *)arg2;	// IMP=0x00000001000817f4
- (struct __CFArray *)copySortedPeerArray:(struct __CFError **)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000010008174c
- (_Bool)addEscrowToPeerInfo:(struct __OpaqueSOSFullPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001000816d0
- (_Bool)addiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010008143c
- (struct __CFSet *)copyPreApprovedHSA2Info;	// IMP=0x00000001000813f0
- (_Bool)upgradeiCloudIdentity:(struct __OpaqueSOSCircle *)arg1 privKey:(struct __SecKey *)arg2;	// IMP=0x000000010008137c
- (void)removeInvalidApplications:(struct __OpaqueSOSCircle *)arg1 userPublic:(struct __SecKey *)arg2;	// IMP=0x0000000100081280
- (_Bool)updatePeerInfo:(id)arg1 description:(struct __CFString *)arg2 err:(struct __CFError **)arg3 update:(CDUnknownBlockType)arg4;	// IMP=0x0000000100081160
- (_Bool)peerSignatureUpdate:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001000810fc
- (struct __CFArray *)copyPeersToListenTo:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0000000100081064
- (struct __CFSet *)copyPeerSetMatching:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080f50
- (_Bool)isAccountIdentity:(struct __OpaqueSOSPeerInfo *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0000000100080f00
- (struct __OpaqueSOSPeerInfo *)copyPeerWithID:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0000000100080ea0
- (struct __SecKey *)copyPublicKeyForPeer:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x0000000100080e04
- (struct __CFSet *)copyPeerSetForView:(struct __CFString *)arg1;	// IMP=0x0000000100080d14
- (void)addSyncablePeerBlock:(id)arg1 dsName:(struct __CFString *)arg2 change:(CDUnknownBlockType)arg3;	// IMP=0x0000000100080b6c
- (_Bool)updateViewSets:(id)arg1 enabled:(struct __CFSet *)arg2 disabled:(struct __CFSet *)arg3;	// IMP=0x00000001000805d8
- (_Bool)updateViewSetsWithAnalytics:(id)arg1 enabled:(struct __CFSet *)arg2 disabled:(struct __CFSet *)arg3 parentEvent:(id)arg4;	// IMP=0x000000010007fed0
- (int)viewStatus:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010007fc84
- (_Bool)activeValidInCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010007fbdc
- (int)updateView:(id)arg1 name:(struct __CFString *)arg2 code:(int)arg3 err:(struct __CFError **)arg4;	// IMP=0x000000010007f8ac
- (_Bool)updateGestalt:(id)arg1 newGestalt:(struct __CFDictionary *)arg2;	// IMP=0x000000010007f6e8
- (id)initWithRetirees:(id)arg1 fpi:(struct __OpaqueSOSFullPeerInfo *)arg2 circle:(struct __OpaqueSOSCircle *)arg3 departureCode:(int)arg4 peerExpansion:(id)arg5;	// IMP=0x000000010007f560
- (id)init;	// IMP=0x000000010007f45c
- (_Bool)leaveRing:(id)arg1 ring:(struct __OpaqueSOSRing *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010007ec60
- (_Bool)resetRing:(id)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010007eacc
- (struct __CFDictionary *)getRings:(struct __CFError **)arg1;	// IMP=0x000000010007ea38
- (struct __OpaqueSOSRing *)copyRing:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010007e99c
- (_Bool)handleUpdateRing:(id)arg1 prospectiveRing:(struct __OpaqueSOSRing *)arg2 transport:(id)arg3 userPublicKey:(struct __SecKey *)arg4 writeUpdate:(_Bool)arg5 err:(struct __CFError **)arg6;	// IMP=0x000000010007d9fc
- (_Bool)setRing:(struct __OpaqueSOSRing *)arg1 ringName:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010007d950
- (_Bool)checkForRings:(struct __CFError **)arg1;	// IMP=0x000000010007d824
- (void)setRings:(struct __CFDictionary *)arg1;	// IMP=0x000000010007d7d8
- (_Bool)resetAccountToEmptyWithAnalytics:(id)arg1 transport:(id)arg2 parentEvent:(id)arg3 err:(struct __CFError **)arg4;	// IMP=0x000000010007d3c4
- (_Bool)resetAccountToEmpty:(id)arg1 transport:(id)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010007d16c
- (_Bool)resetAllRings:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010007cfec
- (_Bool)forEachRing:(CDUnknownBlockType)arg1;	// IMP=0x000000010007cd80
- (_Bool)updateV2Dictionary:(id)arg1 v2:(struct __CFDictionary *)arg2;	// IMP=0x000000010007cc28
- (void)pendEnableViewSet:(struct __CFSet *)arg1;	// IMP=0x000000010007cb5c
- (void)valueSubtractFrom:(struct __CFString *)arg1 valuesToSubtract:(struct __CFSet *)arg2;	// IMP=0x000000010007ca6c
- (void)valueUnionWith:(struct __CFString *)arg1 valuesToUnion:(struct __CFSet *)arg2;	// IMP=0x000000010007c978
- (_Bool)valueSetContainsValue:(struct __CFString *)arg1 value:(void *)arg2;	// IMP=0x000000010007c90c
- (_Bool)setValueInExpansion:(struct __CFString *)arg1 value:(void *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010007c868
- (_Bool)clearValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010007c7f4
- (_Bool)ensureExpansion:(struct __CFError **)arg1;	// IMP=0x000000010007c740
- (void *)getValueFromExpansion:(struct __CFString *)arg1 err:(struct __CFError **)arg2;	// IMP=0x000000010007c6bc
- (_Bool)joinCircle:(id)arg1 userKey:(struct __SecKey *)arg2 useCloudPeer:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x0000000100092088
- (_Bool)resetCircleToOffering:(id)arg1 userKey:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100091e60
- (_Bool)resetToOffering:(id)arg1 key:(struct __SecKey *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100091d64
- (_Bool)leaveCircle:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x0000000100091c28
- (_Bool)leaveCircleWithAccount:(id)arg1 withAnalytics:(id)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100091abc
- (void)forEachCirclePeerExceptMe:(CDUnknownBlockType)arg1;	// IMP=0x000000010009197c
- (void)generationSignatureUpdateWith:(id)arg1 key:(struct __SecKey *)arg2;	// IMP=0x0000000100091890
- (_Bool)modifyCircle:(id)arg1 err:(struct __CFError **)arg2 action:(CDUnknownBlockType)arg3;	// IMP=0x000000010009178c
- (_Bool)modifyCircleWithAnalytics:(id)arg1 parentEvent:(id)arg2 err:(struct __CFError **)arg3 action:(CDUnknownBlockType)arg4;	// IMP=0x0000000100091664
- (_Bool)updateCircleWithAnalytics:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 parentEvent:(id)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001000915fc
- (_Bool)updateCircle:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000915dc
- (_Bool)updateCircleFromRemote:(id)arg1 newCircle:(struct __OpaqueSOSCircle *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00000001000915bc
- (_Bool)handleUpdateCircle:(struct __OpaqueSOSCircle *)arg1 transport:(id)arg2 update:(_Bool)arg3 err:(struct __CFError **)arg4;	// IMP=0x0000000100090158
- (_Bool)handleUpdateCircleWithAnalytics:(struct __OpaqueSOSCircle *)arg1 transport:(id)arg2 update:(_Bool)arg3 parentEvent:(id)arg4 err:(struct __CFError **)arg5;	// IMP=0x000000010008e4a8
- (_Bool)checkForSponsorshipTrust:(struct __OpaqueSOSCircle *)arg1;	// IMP=0x000000010008e3a8
- (_Bool)ghostBustingOK:(struct __OpaqueSOSCircle *)arg1 updatingTo:(struct __OpaqueSOSCircle *)arg2;	// IMP=0x000000010008e2bc
- (_Bool)hasLeft;	// IMP=0x000000010008e27c
- (struct __OpaqueSOSCircle *)ensureCircle:(id)arg1 name:(struct __CFString *)arg2 err:(struct __CFError **)arg3;	// IMP=0x000000010008e170
- (struct __OpaqueSOSCircle *)getCircle:(struct __CFError **)arg1;	// IMP=0x000000010008e0e8
- (int)getCircleStatusOnly:(struct __CFError **)arg1;	// IMP=0x000000010008e098
- (int)thisDeviceStatusInCircle:(struct __OpaqueSOSCircle *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2;	// IMP=0x000000010008e014
- (_Bool)hasCircle:(struct __CFError **)arg1;	// IMP=0x000000010008dfac
- (_Bool)isInCircleOnly:(struct __CFError **)arg1;	// IMP=0x000000010008df60
- (void)purgeIdentity;	// IMP=0x00000001000b92ac
- (_Bool)isMyPeerActive:(struct __CFError **)arg1;	// IMP=0x00000001000b9234
- (_Bool)ensureFullPeerAvailable:(struct __CFDictionary *)arg1 deviceID:(struct __CFString *)arg2 backupKey:(struct __CFData *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001000b8d78
- (void)ensureOctagonPeerKeys:(id)arg1;	// IMP=0x00000001000b8d74
- (struct __SecKey *)randomPermanentFullECKey:(int)arg1 name:(id)arg2 error:(struct __CFError **)arg3;	// IMP=0x00000001000b8d50
- (struct __OpaqueSOSFullPeerInfo *)CopyAccountIdentityPeerInfo;	// IMP=0x00000001000b8ca4
- (_Bool)hasFullPeerInfo:(struct __CFError **)arg1;	// IMP=0x00000001000b8c3c
- (_Bool)fullPeerInfoVerify:(struct __SecKey *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00000001000b8bbc
- (struct __OpaqueSOSFullPeerInfo *)getMyFullPeerInfo;	// IMP=0x00000001000b8b78
- (_Bool)updateFullPeerInfo:(id)arg1 minimum:(struct __CFSet *)arg2 excluded:(struct __CFSet *)arg3;	// IMP=0x00000001000b8874
- (_Bool)isLockedError:(id)arg1;	// IMP=0x00000001000b87d0
- (_Bool)cleanupAfterPeer:(id)arg1 circleTransport:(id)arg2 seconds:(unsigned long long)arg3 circle:(struct __OpaqueSOSCircle *)arg4 cleanupPeer:(struct __OpaqueSOSPeerInfo *)arg5 err:(struct __CFError **)arg6;	// IMP=0x00000001000b9688
- (_Bool)cleanupRetirementTickets:(id)arg1 circle:(struct __OpaqueSOSCircle *)arg2 time:(unsigned long long)arg3 err:(struct __CFError **)arg4;	// IMP=0x00000001000b946c

@end

