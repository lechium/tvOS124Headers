//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSettingsScreenSaverRadioSettingGroupDelegate.h"

@class NSString;

@interface TVSettingsScreenSaverTypesViewController : TSKViewController <TVSettingsScreenSaverRadioSettingGroupDelegate>
{
}

- (id)_photoCollectionGroupTitleFormatter;	// IMP=0x000000010003a8e0
- (id)_childViewControllerForPhotoCollectionGroup:(id)arg1;	// IMP=0x000000010003a840
- (void)radioSettingsGroup:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x000000010003a5d4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003a504
- (id)loadSettingGroups;	// IMP=0x000000010003a0c8
- (id)title;	// IMP=0x000000010003a058
- (void)dealloc;	// IMP=0x0000000100039f84
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100039e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

