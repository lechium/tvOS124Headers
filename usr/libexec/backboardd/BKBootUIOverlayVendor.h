//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKFirstBootDetector;

@interface BKBootUIOverlayVendor : NSObject
{
    BKFirstBootDetector *_firstBootDetector;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010005d9b8
- (void).cxx_destruct;	// IMP=0x000000010005dc84
- (id)currentOverlayWithLevel:(float)arg1;	// IMP=0x000000010005daf4
- (id)initWithFirstBootDetector:(id)arg1;	// IMP=0x000000010005da74

@end

