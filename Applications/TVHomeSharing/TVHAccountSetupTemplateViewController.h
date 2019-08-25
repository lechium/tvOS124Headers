//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHKAccountSetupViewController.h"

#import "TVHKAccountSetupViewControllerDelegate.h"

@class IKViewElement, NSString;

@interface TVHAccountSetupTemplateViewController : TVHKAccountSetupViewController <TVHKAccountSetupViewControllerDelegate>
{
    IKViewElement *_templateElement;	// 8 = 0x8
}

@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
- (void).cxx_destruct;	// IMP=0x00000001000345d8
- (void)accountSetupViewControllerDidCancel:(id)arg1;	// IMP=0x000000010003454c
- (void)accountSetupViewController:(id)arg1 didSucceedWithAccountName:(id)arg2;	// IMP=0x00000001000344f8
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000001000344ec
- (void)dealloc;	// IMP=0x0000000100034474
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000343ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

