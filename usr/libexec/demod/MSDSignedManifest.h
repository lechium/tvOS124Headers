//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDDemoManifestCheck, NSArray, NSDictionary, NSString;

@interface MSDSignedManifest : NSObject
{
    NSString *_signingKey;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
    MSDDemoManifestCheck *_manifestVerifier;	// 24 = 0x18
}

+ (id)appIdentifierFromOrderItem:(id)arg1;	// IMP=0x0000000100047ebc
+ (_Bool)isItemSystemAppData:(id)arg1;	// IMP=0x0000000100047ea4
+ (_Bool)isItemBackup:(id)arg1;	// IMP=0x0000000100047e8c
+ (id)signedManifestWithNSStream:(id)arg1;	// IMP=0x00000001000467d8
@property(retain) MSDDemoManifestCheck *manifestVerifier; // @synthesize manifestVerifier=_manifestVerifier;
@property(retain) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *signingKey; // @synthesize signingKey=_signingKey;
- (void).cxx_destruct;	// IMP=0x000000010004a92c
- (_Bool)isAppleWatch;	// IMP=0x000000010004a878
- (_Bool)isManualSigning:(id)arg1;	// IMP=0x000000010004a63c
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 withKey:(struct __SecKey *)arg3;	// IMP=0x000000010004a438
- (struct __SecKey *)createPublicKey:(id)arg1 usingPolicy:(struct __SecPolicy *)arg2 anchors:(id)arg3;	// IMP=0x0000000100049f34
- (struct __SecKey *)createPublicKeyForDevelopmentSigningStandard:(id)arg1;	// IMP=0x0000000100049e44
- (struct __SecKey *)createPublicKeyAppleISTSigning:(id)arg1;	// IMP=0x00000001000497e0
- (struct __SecKey *)createPublicKeyForDevelopmentSigning:(id)arg1;	// IMP=0x0000000100049740
- (struct __SecKey *)createPublicKeyForStrongSigning:(id)arg1;	// IMP=0x0000000100049604
- (id)verifyMonolithicManifestSignature:(id)arg1;	// IMP=0x0000000100048dd4
- (id)verifyManifestSignature:(id)arg1;	// IMP=0x0000000100047fd8
@property(readonly, getter=getInstallationOrder) NSArray *installationOrder;
- (id)originServerForBackupManifest:(struct _NSRange)arg1;	// IMP=0x0000000100047d34
- (_Bool)hasSystemContainerBackupInRange:(struct _NSRange)arg1;	// IMP=0x0000000100047c2c
- (id)mergedBackupManifest:(struct _NSRange)arg1;	// IMP=0x00000001000478b4
- (struct _NSRange)rangeOfGroupedBackups:(long long)arg1;	// IMP=0x00000001000476d4
@property(readonly, getter=getBackupList) NSDictionary *backupList;
@property(readonly, getter=getBackup) NSDictionary *backup;
@property(readonly, getter=getPlugInDataList) NSDictionary *plugInDataList;
@property(readonly, getter=getGroupDataList) NSDictionary *groupDataList;
@property(readonly, getter=getAppDataList) NSDictionary *appDataList;
@property(readonly, getter=getAppList) NSDictionary *appList;
@property(readonly, getter=getInfo) NSDictionary *info;
@property(readonly, getter=getVersion) int version;
- (void)dealloc;	// IMP=0x00000001000472a0
- (id)initWithNSStream:(id)arg1;	// IMP=0x0000000100046840

@end

