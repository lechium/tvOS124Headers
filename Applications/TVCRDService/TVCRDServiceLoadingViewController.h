//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSViewServicePresenter.h"

@class NSString;

@interface TVCRDServiceLoadingViewController : UIViewController <PBSViewServicePresenter>
{
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100005b5c
+ (id)_exportedInterface;	// IMP=0x0000000100005a40
- (void)_menuPressed:(id)arg1;	// IMP=0x0000000100005c14
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000591c
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100005840
- (void)viewDidLoad;	// IMP=0x0000000100004b7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

