//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTShowSettingsViewController;

@protocol MTShowSettingsViewControllerDelegate <NSObject>
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedDeletedPlayedEpisodes:(long long)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedEpisodeLimit:(long long)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedNotifications:(_Bool)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedSubscribed:(_Bool)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedEpisodeOrderAscending:(_Bool)arg2;
- (void)showSettings:(MTShowSettingsViewController *)arg1 changedShowType:(long long)arg2;
@end

