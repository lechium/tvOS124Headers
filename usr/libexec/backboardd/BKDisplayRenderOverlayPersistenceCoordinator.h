//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BKDisplayRenderOverlayPersistenceCoordinator : NSObject
{
    NSString *_rootPersistencePath;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010005cca4
- (void).cxx_destruct;	// IMP=0x000000010005d9a4
- (id)_fileNameForOverlay:(id)arg1;	// IMP=0x000000010005d8ac
- (id)_filePathForOverlay:(id)arg1;	// IMP=0x000000010005d810
- (_Bool)destroyOverlay:(id)arg1;	// IMP=0x000000010005d780
- (_Bool)saveOverlay:(id)arg1;	// IMP=0x000000010005d0ac
- (id)rebuildPersistentOverlays;	// IMP=0x000000010005cd24
- (id)init;	// IMP=0x000000010005cbf0

@end

