//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayBootUIRenderOverlay.h"

@class PUIProgressWindow;

@interface BKDisplayRenderOverlayAppleLogo : BKDisplayBootUIRenderOverlay
{
    PUIProgressWindow *_puiProgressWindow;	// 8 = 0x8
}

+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x000000010004f9b8
- (void).cxx_destruct;	// IMP=0x000000010004fc90
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010004fc10
- (void)_cleanUpContentLayer;	// IMP=0x000000010004fbd0
- (id)_prepareContentLayerForPresentation:(id)arg1;	// IMP=0x000000010004fb04
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010004faa8

@end

