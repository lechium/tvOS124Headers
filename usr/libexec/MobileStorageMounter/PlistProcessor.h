//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PlistProcessor : NSObject
{
}

+ (id)sharedPlistProcessor;	// IMP=0x000000010000c074
- (_Bool)verifyPlist:(id)arg1 forMountPoint:(id)arg2;	// IMP=0x000000010000cc6c
- (id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2;	// IMP=0x000000010000cc24
- (void)scanPlistsAtPath:(id)arg1 execBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c0f4

@end
