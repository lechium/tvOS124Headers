//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKFirstBootDetector;

@interface BKBootUIOverlayVendor : NSObject
{
    BKFirstBootDetector *_firstBootDetector;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)currentOverlayWithLevel:(float)arg1;
- (id)initWithFirstBootDetector:(id)arg1;

@end
