//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, CAWindowServerDisplay;

@interface _BKDisplayBlankingContext : NSObject
{
    CAWindowServerDisplay *_display;
    CAContext *_blankingContext;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateBounds;
- (void)clear;
- (void)blank;
- (void)dealloc;
- (id)initForDisplay:(id)arg1;

@end

