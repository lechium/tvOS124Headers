//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBasePlaylistEpisodeListViewController.h"

#import "UIViewControllerRestoration.h"

@interface MTPlaylistGroupByPodcastDetailViewController : MTBasePlaylistEpisodeListViewController <UIViewControllerRestoration>
{
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;	// IMP=0x00000001001852f0
- (id)metricsName;	// IMP=0x0000000100185380
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000010018534c
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x0000000100185318
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00000001001852e8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001001852e0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100185270
- (void)updateMarkButtonsAndTitle;	// IMP=0x0000000100185138
- (id)emptyListMessage;	// IMP=0x00000001001850c8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100185078
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100184df8

@end
