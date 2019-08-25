//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTFetchedTableViewController.h"

#import "MTTableViewDataSource.h"

@class NSAttributedString, NSString;

@interface MTBasePodcastListViewController : MTFetchedTableViewController <MTTableViewDataSource>
{
    _Bool _endRefreshWhenDraggingEnds;	// 8 = 0x8
    _Bool _refreshing;	// 9 = 0x9
    id <MTSourceListDelegate> _delegate;	// 16 = 0x10
    id <MTRefreshControlDelegate> _refreshDelegate;	// 24 = 0x18
    NSString *_selectedUuid;	// 32 = 0x20
    NSAttributedString *_attributedTitleForRefreshControl;	// 40 = 0x28
    SEL _selectorForRefreshControl;	// 48 = 0x30
    id _targetForRefreshControl;	// 56 = 0x38
    id <MTViewControllerEditingNotificationDelegate> _editingNotificationDelegate;	// 64 = 0x40
}

+ (id)defaultsKey;	// IMP=0x000000010000e940
@property(nonatomic) __weak id <MTViewControllerEditingNotificationDelegate> editingNotificationDelegate; // @synthesize editingNotificationDelegate=_editingNotificationDelegate;
@property(nonatomic) __weak id targetForRefreshControl; // @synthesize targetForRefreshControl=_targetForRefreshControl;
@property(nonatomic) SEL selectorForRefreshControl; // @synthesize selectorForRefreshControl=_selectorForRefreshControl;
@property(retain, nonatomic) NSAttributedString *attributedTitleForRefreshControl; // @synthesize attributedTitleForRefreshControl=_attributedTitleForRefreshControl;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) NSString *selectedUuid; // @synthesize selectedUuid=_selectedUuid;
@property(nonatomic) __weak id <MTRefreshControlDelegate> refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
@property(nonatomic) __weak id <MTSourceListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100010a88
- (_Bool)indexPathIsCurrentlySelectedRow:(id)arg1;	// IMP=0x00000001000108b4
- (void)selectItemWithUuid:(id)arg1 forceScroll:(_Bool)arg2;	// IMP=0x00000001000107a8
- (id)_selectItemWithUuid:(id)arg1;	// IMP=0x0000000100010694
- (id)firstValidIndexPath;	// IMP=0x00000001000105e8
- (void)getObjectId:(id *)arg1 andIndexPath:(id *)arg2 forItemWithUuid:(id)arg3;	// IMP=0x00000001000105e4
- (void)updatedDefaults:(id)arg1;	// IMP=0x0000000100010424
- (long long)flattenedCellIndexForIndexPath:(id)arg1;	// IMP=0x00000001000102f4
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000101fc
- (void)endRefreshingWhenDraggingCompletes;	// IMP=0x00000001000100d8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000fe2c
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010000fd8c
- (void)dealloc;	// IMP=0x000000010000fd14
- (void)configureRowHeight;	// IMP=0x000000010000fc6c
- (void)viewDidLoad;	// IMP=0x000000010000fabc
- (void)loadView;	// IMP=0x000000010000f9d0
- (void)didReceiveMemoryWarning;	// IMP=0x000000010000f99c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010000f8b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000f26c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000f174
- (id)tableView;	// IMP=0x000000010000f140
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010000f064
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010000eed0
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000010000eeb8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000ee40
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000ee0c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000edd8
- (void)didEndDraggingScrollView;	// IMP=0x000000010000ed98
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000010000ed8c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000010000ed78
- (void)restoreSelection;	// IMP=0x000000010000ecf0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000eb2c
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000010000eb24
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000010000eb1c
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000eb00
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010000ea9c
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x000000010000ea30
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x000000010000ea1c
- (id)storedUuid;	// IMP=0x000000010000e948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

