//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MTResultsControllerDelegate.h"

@class MTCompositeResultsController, MTCoreDataResultsController, NSString;

@interface MTFetchedTableWithSectionsViewController : UITableViewController <MTResultsControllerDelegate>
{
    long long _userDrivenCounter;	// 8 = 0x8
    _Bool _inSwipeToDeleteMode;	// 16 = 0x10
    MTCompositeResultsController *_compositeResultsController;	// 24 = 0x18
}

@property(retain, nonatomic) MTCompositeResultsController *compositeResultsController; // @synthesize compositeResultsController=_compositeResultsController;
@property(nonatomic) _Bool inSwipeToDeleteMode; // @synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode;
- (void).cxx_destruct;	// IMP=0x000000010007b75c
- (void)_updateTableAnimated:(_Bool)arg1;	// IMP=0x000000010007b118
- (void)refetchWithPredicate:(id)arg1;	// IMP=0x000000010007b098
- (void)refetchWithSortDescriptors:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010007b000
- (void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000010007af18
@property(readonly, nonatomic) MTCoreDataResultsController *frc;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010007abbc
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x000000010007a8f4
- (void)controllerWillChangeContent:(id)arg1;	// IMP=0x000000010007a890
- (_Bool)hideHeaderForEmptySection:(long long)arg1;	// IMP=0x000000010007a888
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010007a848
- (void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010007a844
- (id)newCellInstanceWithReuseIdentifier:(id)arg1;	// IMP=0x000000010007a7d8
- (id)reuseIdentifierForRow:(id)arg1;	// IMP=0x000000010007a7bc
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010007a748
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010007a638
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010007a520
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010007a480
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010007a42c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010007a3b8
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010007a37c
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000010007a358
- (unsigned long long)_sectionForController:(id)arg1;	// IMP=0x000000010007a2e0
- (id)_controllerForSection:(unsigned long long)arg1;	// IMP=0x000000010007a284
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010007a16c
- (id)indexPathsForObject:(id)arg1;	// IMP=0x000000010007a0e8
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010007a068
@property(nonatomic) _Bool changeIsUserDriven;
- (void)viewDidLoad;	// IMP=0x0000000100079f48
- (void)dealloc;	// IMP=0x0000000100079ed0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100079ec0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100079eb0
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100079ea0
- (id)initWithCompositeFetchedResultsController:(id)arg1;	// IMP=0x0000000100079e04
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyKeys:(id)arg4;	// IMP=0x0000000100079c78
- (id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x0000000100079bfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

