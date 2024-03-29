//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTModalDismissing.h"

@class NSString, UIAlertController, UIBarButtonItem;

@interface MTAddPodcastOrStationController : NSObject <MTModalDismissing>
{
    UIBarButtonItem *_plusButtonItem;	// 8 = 0x8
    UIAlertController *_alertController;	// 16 = 0x10
}

@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void).cxx_destruct;	// IMP=0x00000001000904f4
- (void)dismissAllModalsAnimated:(_Bool)arg1;	// IMP=0x0000000100090434
- (_Bool)userHasSomePodcasts;	// IMP=0x0000000100090318
- (id)presentingViewController;	// IMP=0x00000001000902bc
- (id)createAndSaveStationWithTitle:(id)arg1;	// IMP=0x000000010008ff3c
- (void)presentStationWithTitle:(id)arg1;	// IMP=0x000000010008fe94
- (void)presentAddStationUI;	// IMP=0x000000010008f9b4
- (void)performSubscribe:(id)arg1;	// IMP=0x000000010008f900
- (void)presentAddPodcastUIWithUrl:(id)arg1;	// IMP=0x000000010008f318
- (void)presentAddPodcastUI;	// IMP=0x000000010008f308
- (void)plusButtonPressed:(id)arg1;	// IMP=0x000000010008eea4
- (id)plusButtonItem;	// IMP=0x000000010008ee34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

