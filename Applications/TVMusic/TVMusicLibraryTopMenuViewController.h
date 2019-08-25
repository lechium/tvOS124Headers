//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicTableViewController.h"

@class MPModelResponse, NSArray, NSDictionary, NSMutableDictionary, TVMusicParadeViewController;

@interface TVMusicLibraryTopMenuViewController : TVMusicTableViewController
{
    unsigned long long _viewControllerUIContext;	// 8 = 0x8
    _Bool _menuSelectionIsDisplayed;	// 16 = 0x10
    long long _currentPreviewType;	// 24 = 0x18
    NSMutableDictionary *_previewArtworkCatalogMap;	// 32 = 0x20
    long long _currentMenuIndex;	// 40 = 0x28
    NSDictionary *_mapMenuItemToName;	// 48 = 0x30
    MPModelResponse *_currentPreviewLibraryResponse;	// 56 = 0x38
    TVMusicParadeViewController *_previewViewController;	// 64 = 0x40
    _Bool _didSetPreviewArtwork;	// 72 = 0x48
    _Bool _artworkNeedsUpdate;	// 73 = 0x49
    long long _lastSetMenuIndex;	// 80 = 0x50
    NSArray *_menuItems;	// 88 = 0x58
    unsigned long long _currentMenuContext;	// 96 = 0x60
}

+ (id)_shuffleArray:(id)arg1 maxCount:(long long)arg2;	// IMP=0x00000001000b07fc
+ (id)currentTopMenu;	// IMP=0x00000001000ae368
@property(readonly, nonatomic) unsigned long long currentMenuContext; // @synthesize currentMenuContext=_currentMenuContext;
@property(readonly, copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;	// IMP=0x00000001000b0d9c
- (void)_libraryDidUpdate:(id)arg1;	// IMP=0x00000001000b0bbc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b0bb0
- (void)_updateArtworkIfNeeded;	// IMP=0x00000001000b0b30
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b0940
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000b08f4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000b08ec
- (void)_setColorsForCell:(id)arg1 indexPath:(id)arg2 isFocused:(_Bool)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x00000001000b0520
- (id)_textColor;	// IMP=0x00000001000b048c
- (void)_setHeadingSizeWithStartingSize:(double)arg1 minimumSize:(double)arg2;	// IMP=0x00000001000b00ac
- (void)_setHeadingAttributes;	// IMP=0x00000001000affe8
- (unsigned long long)_menuItemForRowIndex:(long long)arg1;	// IMP=0x00000001000aff6c
- (id)_artworkCatalogForMPObject:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000001000afd8c
- (void)_setPreviewArtworkForPreviewType:(long long)arg1;	// IMP=0x00000001000af700
- (void)_setPreviewArtworkForBrowseSectionRowAtIndex:(long long)arg1;	// IMP=0x00000001000af5ac
- (void)_setPreviewArtworkForMenuIndexNumber:(id)arg1;	// IMP=0x00000001000af570
- (long long)_previewTypeForMenuItem:(unsigned long long)arg1;	// IMP=0x00000001000af54c
- (id)_noResultsViewWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000001000af110
- (id)_viewControllerForBrowseSectionRowAtIndex:(long long)arg1;	// IMP=0x00000001000aeebc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000aed50
- (id)_nameForMenuItem:(unsigned long long)arg1;	// IMP=0x00000001000ae9fc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000ae93c
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000ae8b0
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000ae574
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000ae55c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000ae4c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000ae424
- (void)viewDidLoad;	// IMP=0x00000001000ae374
- (void)dealloc;	// IMP=0x00000001000ae2f0
- (id)initWithMenuItems:(id)arg1;	// IMP=0x00000001000ae15c

@end

