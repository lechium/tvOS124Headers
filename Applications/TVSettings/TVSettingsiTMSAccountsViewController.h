//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class ACAccountStore, NSArray, NSNumber, NSString, SSAccount, SSAuthenticateRequest, TSKSettingGroup, TSKSettingItem, TVSiCloudAccountManager, UIBarButtonItem;

@interface TVSettingsiTMSAccountsViewController : TSKViewController
{
    SSAuthenticateRequest *_authenticateRequest;	// 8 = 0x8
    _Bool _authenticationInProgress;	// 16 = 0x10
    ACAccountStore *_acStore;	// 24 = 0x18
    _Bool _familyAccountsHaveLoaded;	// 32 = 0x20
    NSArray *_otherAccounts;	// 40 = 0x28
    TVSiCloudAccountManager *_iCloudAccountManager;	// 48 = 0x30
    long long _familyCheckState;	// 56 = 0x38
    NSArray *_accounts;	// 64 = 0x40
    NSArray *_familyAccounts;	// 72 = 0x48
    NSArray *_distinctiTunesFamilyAccounts;	// 80 = 0x50
    SSAccount *_sandboxAccount;	// 88 = 0x58
    NSString *_appleID;	// 96 = 0x60
    NSString *_password;	// 104 = 0x68
    NSString *_altDSID;	// 112 = 0x70
    NSNumber *_DSID;	// 120 = 0x78
    TSKSettingGroup *_accountsGroup;	// 128 = 0x80
    TSKSettingGroup *_sandboxAccountGroup;	// 136 = 0x88
    TSKSettingItem *_addNewIDItem;	// 144 = 0x90
    TSKSettingItem *_addNewSandboxIDItem;	// 152 = 0x98
    TSKSettingItem *_locationItem;	// 160 = 0xa0
    UIBarButtonItem *_editButtonItem;	// 168 = 0xa8
    UIBarButtonItem *_doneButtonItem;	// 176 = 0xb0
    NSString *_iCloudDSID;	// 184 = 0xb8
}

@property(copy, nonatomic) NSString *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(nonatomic) _Bool familyAccountsHaveLoaded; // @synthesize familyAccountsHaveLoaded=_familyAccountsHaveLoaded;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) TSKSettingItem *locationItem; // @synthesize locationItem=_locationItem;
@property(retain, nonatomic) TSKSettingItem *addNewSandboxIDItem; // @synthesize addNewSandboxIDItem=_addNewSandboxIDItem;
@property(retain, nonatomic) TSKSettingItem *addNewIDItem; // @synthesize addNewIDItem=_addNewIDItem;
@property(retain, nonatomic) TSKSettingGroup *sandboxAccountGroup; // @synthesize sandboxAccountGroup=_sandboxAccountGroup;
@property(retain, nonatomic) TSKSettingGroup *accountsGroup; // @synthesize accountsGroup=_accountsGroup;
@property(retain, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) SSAccount *sandboxAccount; // @synthesize sandboxAccount=_sandboxAccount;
@property(retain, nonatomic) NSArray *distinctiTunesFamilyAccounts; // @synthesize distinctiTunesFamilyAccounts=_distinctiTunesFamilyAccounts;
@property(retain, nonatomic) NSArray *familyAccounts; // @synthesize familyAccounts=_familyAccounts;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) long long familyCheckState; // @synthesize familyCheckState=_familyCheckState;
@property(retain, nonatomic) TVSiCloudAccountManager *iCloudAccountManager; // @synthesize iCloudAccountManager=_iCloudAccountManager;
- (void).cxx_destruct;	// IMP=0x0000000100075544
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100074d64
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074c68
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074c04
- (void)_updateNavigationItem;	// IMP=0x0000000100074a70
- (void)toggleEditMode:(id)arg1;	// IMP=0x00000001000748ec
- (void)_updateAccounts;	// IMP=0x00000001000746b8
- (id)_accounts;	// IMP=0x000000010007453c
- (_Bool)_shouldDisableAddAccount;	// IMP=0x00000001000744ec
- (void)_killStoreApps;	// IMP=0x00000001000744a4
- (void)_disableAutoAppDownloadsIfRequiredForNewAccount:(id)arg1;	// IMP=0x00000001000743c0
- (void)_setActiveAccount:(id)arg1;	// IMP=0x0000000100073f5c
- (void)_updateLocationItem:(id)arg1 value:(id)arg2;	// IMP=0x0000000100073da8
- (void)_updateNewSandboxIDItem:(id)arg1 value:(id)arg2;	// IMP=0x0000000100073cac
- (void)_updateSandboxAccountItem:(id)arg1 value:(id)arg2;	// IMP=0x0000000100073be0
- (void)_updateOtherAccountItem:(id)arg1 value:(id)arg2;	// IMP=0x0000000100073ad8
- (void)_updateAccountItem:(id)arg1 value:(id)arg2;	// IMP=0x000000010007392c
- (void)_removeAccount:(id)arg1;	// IMP=0x00000001000738cc
- (void)_selectedAccount:(id)arg1;	// IMP=0x000000010007374c
- (void)_selectedFamilyMember:(id)arg1;	// IMP=0x0000000100073254
- (void)_signOut:(id)arg1;	// IMP=0x00000001000730fc
- (void)_signOutAccount:(id)arg1;	// IMP=0x0000000100072eac
- (void)_signInUsingAuthKitWithUsername:(id)arg1 editable:(_Bool)arg2 forceInteractiveAuth:(_Bool)arg3;	// IMP=0x0000000100072964
- (void)_signInUsingAuthKitWithUsername:(id)arg1 editable:(_Bool)arg2;	// IMP=0x00000001000728b8
- (void)_signInUsingAuthKit;	// IMP=0x00000001000728a4
- (void)_signIntoSandboxAccount:(id)arg1;	// IMP=0x00000001000725cc
- (void)_signIn;	// IMP=0x0000000100072184
- (void)_authenticateAccount:(id)arg1;	// IMP=0x0000000100071da4
- (void)_notifySiriAvailabilityIfNeeded;	// IMP=0x00000001000710e0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100070f34
- (id)_nameForFamilyMember:(id)arg1;	// IMP=0x0000000100070c0c
- (_Bool)_canSelectFamilyMember:(id)arg1;	// IMP=0x0000000100070ae4
- (void)_processFamilyDetailsResponse:(id)arg1;	// IMP=0x00000001000709c8
- (id)_filterFamilyMembersFromAccounts:(id)arg1;	// IMP=0x0000000100070710
- (void)_fetchFamilyDetails;	// IMP=0x00000001000705cc
@property(getter=isAuthenticationInProgress) _Bool authenticationInProgress;
@property(readonly, nonatomic) NSArray *otherAccounts; // @synthesize otherAccounts=_otherAccounts;
- (id)loadSettingGroups;	// IMP=0x000000010006e824
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006e61c
- (void)dealloc;	// IMP=0x000000010006e4fc
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010006e2ac

@end
