//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVTableViewController.h"

@class NSArray;

@interface SATVAirplay2HomePickerViewController : SATVTableViewController
{
    id <SATVAirplay2HomePickerViewControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
}

@property(readonly, nonatomic, getter=_homes) NSArray *homes; // @synthesize homes=_homes;
@property(nonatomic) __weak id <SATVAirplay2HomePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010002d068
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010002cf50
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010002cec8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002cd5c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010002cd10
- (void)viewDidLoad;	// IMP=0x000000010002cc4c
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010002cac0

@end

