//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (sysContainerPath)
+ (id)restoreSystemContainerUUIDPathsInDict:(id)arg1;	// IMP=0x000000010000f4cc
- (id)lookupSystemContainerPathUUID;	// IMP=0x000000010000fb2c
- (id)getSystemContainerRootPath;	// IMP=0x000000010000faa4
- (_Bool)isSystemContainerShared;	// IMP=0x000000010000fa28
- (_Bool)isSystemContainerPath;	// IMP=0x000000010000f968
@property(readonly, getter=getSystemContainerKeyword) NSString *sysContainerID;

// Remaining properties
@property(readonly, getter=getSystemContainerKeyword) NSString *sysContainerUUID;
@end

