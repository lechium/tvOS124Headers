//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (MTAdditions)
+ (id)mt_rootViewController;	// IMP=0x00000001000fff58
- (id)mt_topViewControllerExcludingPopovers;	// IMP=0x00000001000ffe9c
- (id)mt_topViewController;	// IMP=0x00000001000ffdfc
- (_Bool)mt_isVisible;	// IMP=0x00000001000ffd80
- (void)simulateMemoryWarning;	// IMP=0x00000001000ffd7c
- (_Bool)isADescendantOfParentViewController:(id)arg1;	// IMP=0x00000001000ffc9c
- (void)visitChildenViewControllers:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ffb3c
- (id)recursiveDescription;	// IMP=0x00000001000ffad0
- (id)_recursiveDescriptionWithLevel:(long long)arg1 result:(id)arg2;	// IMP=0x00000001000ff8b0
@end

