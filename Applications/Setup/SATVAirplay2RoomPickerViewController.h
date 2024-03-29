//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVTableViewController.h"

@class NSArray, TVCSHome, _SATVAirplay2TableDataSource;

@interface SATVAirplay2RoomPickerViewController : SATVTableViewController
{
    _SATVAirplay2TableDataSource *_dataSource;	// 8 = 0x8
    TVCSHome *_home;	// 16 = 0x10
    id <SATVAirplay2RoomPickerViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_existingRooms;	// 32 = 0x20
    NSArray *_suggestedRooms;	// 40 = 0x28
}

@property(readonly, nonatomic, getter=_suggestedRooms) NSArray *suggestedRooms; // @synthesize suggestedRooms=_suggestedRooms;
@property(readonly, nonatomic, getter=_existingRooms) NSArray *existingRooms; // @synthesize existingRooms=_existingRooms;
@property(nonatomic) __weak id <SATVAirplay2RoomPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVCSHome *home; // @synthesize home=_home;
- (void).cxx_destruct;	// IMP=0x00000001000899e0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000898dc
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100089880
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100089748
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001000896f4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000896a8
@property(readonly, nonatomic, getter=_dataSource) _SATVAirplay2TableDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)viewDidLoad;	// IMP=0x0000000100088b58
- (id)initWithHome:(id)arg1;	// IMP=0x000000010008889c

@end

