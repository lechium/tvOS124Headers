//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"

@class NSArray, NSString;

@interface TVWiFiCertificateDetailsViewController : UITableViewController <UITableViewDataSource>
{
    id _certificate;	// 8 = 0x8
    NSArray *_keyValueSections;	// 16 = 0x10
    NSArray *_keyValueSectionTitles;	// 24 = 0x18
}

+ (id)dateFormatter;	// IMP=0x000000010005f5e4
@property(retain, nonatomic) NSArray *keyValueSectionTitles; // @synthesize keyValueSectionTitles=_keyValueSectionTitles;
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(readonly, nonatomic) id certificate; // @synthesize certificate=_certificate;
- (void).cxx_destruct;	// IMP=0x000000010005fe34
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010005fdcc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010005fa28
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010005f9bc
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010005f968
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010005f8d4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010005f8bc
- (void)viewDidLoad;	// IMP=0x000000010005f778
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000010005f664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

