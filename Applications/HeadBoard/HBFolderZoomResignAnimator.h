//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class HBFolderCell, NSString;

@interface HBFolderZoomResignAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    HBFolderCell *_folderCell;	// 8 = 0x8
}

@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void).cxx_destruct;	// IMP=0x000000010003eefc
- (void)animateTransition:(id)arg1;	// IMP=0x000000010003e8b0
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010003e8a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
