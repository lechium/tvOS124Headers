//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSArray, NSOperationQueue, NSString, UITableView;

@interface SATVWiFiNetworkDataSource : NSObject <UITableViewDataSource>
{
    NSOperationQueue *_connectionQueue;	// 8 = 0x8
    unsigned long long _groupingStyle;	// 16 = 0x10
    float _currentNetworkScaledRSSI;	// 24 = 0x18
    id <WFNetworkListRecord> _currentNetwork;	// 32 = 0x20
    long long _currentNetworkState;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    Class _cellClass;	// 56 = 0x38
    NSArray *_foundNetworks;	// 64 = 0x40
}

@property(retain, nonatomic) NSArray *foundNetworks; // @synthesize foundNetworks=_foundNetworks;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long currentNetworkState; // @synthesize currentNetworkState=_currentNetworkState;
@property(nonatomic) float currentNetworkScaledRSSI; // @synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI;
@property(retain, nonatomic) id <WFNetworkListRecord> currentNetwork; // @synthesize currentNetwork=_currentNetwork;
- (void).cxx_destruct;	// IMP=0x0000000100067f78
- (id)_currentNetworkCell;	// IMP=0x0000000100067de4
- (long long)_indexForSection:(long long)arg1;	// IMP=0x0000000100067d70
- (long long)_sectionTypeAtSection:(long long)arg1;	// IMP=0x0000000100067d04
- (void)setNetworks:(id)arg1;	// IMP=0x00000001000677cc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010006711c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001000670f8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100066d54
- (id)networkAtIndexPath:(id)arg1;	// IMP=0x0000000100066c04
- (id)initWithTableView:(id)arg1 groupingStyle:(unsigned long long)arg2;	// IMP=0x0000000100066ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

