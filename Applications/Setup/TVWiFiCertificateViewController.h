//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WFNetworkView.h"

@class NSString, UILabel;

@interface TVWiFiCertificateViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkView>
{
    id <TVWiFiCertificateTrustDelegate> _delegate;	// 8 = 0x8
    id _trust;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) id trust; // @synthesize trust=_trust;
@property(nonatomic) __weak id <TVWiFiCertificateTrustDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010004f274
- (void)_didSelectMenu;	// IMP=0x000000010004f1c4
@property(readonly, nonatomic) _Bool wantsModalPresentation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010004f084
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010004ed34
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010004ecf8
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010004ecc4
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010004ecb8
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010004ecac
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010004eca4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010004ec9c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010004ebd8
- (void)viewDidLoad;	// IMP=0x000000010004e930
- (id)initWithTrust:(struct __SecTrust *)arg1;	// IMP=0x000000010004e8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

