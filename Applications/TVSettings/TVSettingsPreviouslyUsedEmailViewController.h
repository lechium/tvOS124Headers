//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSettingsPreviouslyUsedEmailFacade, UIBarButtonItem;

@interface TVSettingsPreviouslyUsedEmailViewController : TSKViewController
{
    TVSettingsPreviouslyUsedEmailFacade *_emailFacade;	// 8 = 0x8
    UIBarButtonItem *_editButtonItem;	// 16 = 0x10
    UIBarButtonItem *_doneButtonItem;	// 24 = 0x18
}

@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) TVSettingsPreviouslyUsedEmailFacade *emailFacade; // @synthesize emailFacade=_emailFacade;
- (void).cxx_destruct;	// IMP=0x000000010005a280
- (void)_clearAll;	// IMP=0x0000000100059e74
- (void)_showDeleteConfirmationForItem:(id)arg1;	// IMP=0x0000000100059948
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000598ec
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000598c4
- (void)clearAll;	// IMP=0x00000001000598b8
- (void)willResumeFromBackground;	// IMP=0x00000001000598ac
- (id)title;	// IMP=0x000000010005983c
- (id)loadSettingGroups;	// IMP=0x0000000100059470
- (void)_updateNavigationItem;	// IMP=0x0000000100059314
- (void)toggleEditMode:(id)arg1;	// IMP=0x0000000100059190
- (void)dealloc;	// IMP=0x0000000100059108
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000590d4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100058fc0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100058f6c
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100058ea0

@end

