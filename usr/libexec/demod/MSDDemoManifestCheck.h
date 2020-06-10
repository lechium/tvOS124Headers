//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WhitelistChecker;

@interface MSDDemoManifestCheck : NSObject
{
    NSDictionary *_segmentedManifestWithRigorousFlag;	// 8 = 0x8
    NSMutableDictionary *_allowedSymLinks;	// 16 = 0x10
    WhitelistChecker *_whitelistChecker;	// 24 = 0x18
    NSDictionary *_itemBeingInstalled;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010004a980
@property(retain) NSDictionary *itemBeingInstalled; // @synthesize itemBeingInstalled=_itemBeingInstalled;
@property(retain) WhitelistChecker *whitelistChecker; // @synthesize whitelistChecker=_whitelistChecker;
@property(retain) NSMutableDictionary *allowedSymLinks; // @synthesize allowedSymLinks=_allowedSymLinks;
@property(retain) NSDictionary *segmentedManifestWithRigorousFlag; // @synthesize segmentedManifestWithRigorousFlag=_segmentedManifestWithRigorousFlag;
- (void).cxx_destruct;	// IMP=0x000000010004dd64
- (_Bool)checkFileForEntitlements:(id)arg1 forCorrespondingManifestEntry:(id)arg2;	// IMP=0x000000010004d6ac
- (void)registerEntitlementNotificationHandler;	// IMP=0x000000010004d494
- (_Bool)runAppLayoutSecurityCheck:(id)arg1;	// IMP=0x000000010004c6e0
- (_Bool)runSecurityChecksForSection:(id)arg1 dataType:(id)arg2;	// IMP=0x000000010004be10
- (_Bool)runSecurityCheck;	// IMP=0x000000010004b654
- (_Bool)secureManifestCheckForSegmentedManifest:(id)arg1;	// IMP=0x000000010004b4f4
- (_Bool)secureManifestCheckForUnsegmentedManifest:(id)arg1;	// IMP=0x000000010004b2f8
- (_Bool)unsegmentedToSegmentedWithRigorousFlag:(id)arg1;	// IMP=0x000000010004ab64
- (id)init;	// IMP=0x000000010004aa00

@end

