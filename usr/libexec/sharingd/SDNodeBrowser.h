//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharePointBrowserDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SDClassroomBrowser, SDConnectedBrowser, SDDomainBrowser, SDManagedBrowser, SDSharePointBrowser, SDStatusMonitor, SDWorkgroupBrowser;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, SDNodeBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDNodeBrowser : NSObject <SDSharePointBrowserDelegate>
{
    NSString *_kind;	// 8 = 0x8
    struct __SFNode *_parent;	// 16 = 0x10
    NSArray *_protocols;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    long long _mode;	// 40 = 0x28
    int _error;	// 48 = 0x30
    _Bool _combineWorkgroups;	// 52 = 0x34
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timer;	// 64 = 0x40
    SDStatusMonitor *_monitor;	// 72 = 0x48
    NSMutableSet *_odiskDomains;	// 80 = 0x50
    NSMutableSet *_airDropDomains;	// 88 = 0x58
    NSMutableSet *_bonjourDomains;	// 96 = 0x60
    NSMutableSet *_windowsWorkgroups;	// 104 = 0x68
    SDDomainBrowser *_domainBrowser;	// 112 = 0x70
    SDManagedBrowser *_managedBrowser;	// 120 = 0x78
    SDClassroomBrowser *_classroomBrowser;	// 128 = 0x80
    SDConnectedBrowser *_connectedBrowser;	// 136 = 0x88
    SDWorkgroupBrowser *_workgroupBrowser;	// 144 = 0x90
    SDSharePointBrowser *_sharePointBrowser;	// 152 = 0x98
    NSMutableDictionary *_managedURLTable;	// 160 = 0xa0
    NSMutableDictionary *_commentHashTable;	// 168 = 0xa8
    id <SDNodeBrowserDelegate> _delegate;	// 176 = 0xb0
    NSObject<OS_xpc_object> *_connection;	// 184 = 0xb8
}

@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNodeBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000b1364
- (_Bool)usePeopleBrowser;	// IMP=0x00000001000b130c
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x00000001000b1280
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x00000001000b125c
@property(readonly, copy) NSArray *sidebarNodes;
@property(readonly, copy) NSArray *nodes;
- (id)nodesInternal:(_Bool)arg1;	// IMP=0x00000001000b0f80
- (void)appendAllNode:(id)arg1;	// IMP=0x00000001000b0ee8
- (void)stop;	// IMP=0x00000001000b0dc8
- (void)start;	// IMP=0x00000001000b0bc8
- (void)unloadSidebarPrefsMonitor;	// IMP=0x00000001000b0b34
- (void)unloadAirDrop;	// IMP=0x00000001000b0968
- (void)unloadODisk;	// IMP=0x00000001000b079c
- (void)unloadClassroom;	// IMP=0x00000001000b06f8
- (void)unloadManaged;	// IMP=0x00000001000b0654
- (void)unloadConnected;	// IMP=0x00000001000b05b0
- (void)unloadSharePoints;	// IMP=0x00000001000b0550
- (void)unloadWorkgroups;	// IMP=0x00000001000b04ac
- (void)unloadDomains;	// IMP=0x00000001000b0408
- (void)unloadWindows;	// IMP=0x00000001000b023c
- (void)unloadBonjour;	// IMP=0x00000001000b0070
- (id)airDropNodes;	// IMP=0x00000001000affd8
- (id)odiskNodes;	// IMP=0x00000001000aff54
- (id)sharePointNodes;	// IMP=0x00000001000afed8
- (id)neighborhoodNodes;	// IMP=0x00000001000afe28
- (id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned long long)arg2 addAllNode:(_Bool *)arg3;	// IMP=0x00000001000af9b8
- (void)addConnectedChildrenFromCache:(id)arg1;	// IMP=0x00000001000af50c
- (void)addManagedChildrenFromCache:(id)arg1;	// IMP=0x00000001000af230
- (void)addClassroomChildrenFromCache:(id)arg1;	// IMP=0x00000001000af098
- (void)addWindowsChildrenFromCache:(id)arg1;	// IMP=0x00000001000aeb9c
- (void)addBonjourChildrenFromCache:(id)arg1;	// IMP=0x00000001000ae648
- (void)copyOverBonjourInfo:(struct __SFNode *)arg1 source:(struct __SFNode *)arg2;	// IMP=0x00000001000ae4e0
- (id)workgroupChildren;	// IMP=0x00000001000ae45c
- (id)domainChildren;	// IMP=0x00000001000ae434
- (void)loadSidebarPrefsMonitor;	// IMP=0x00000001000ae398
- (void)loadAirDrop;	// IMP=0x00000001000adff8
- (void)loadClassroom;	// IMP=0x00000001000ade04
- (void)loadODisk;	// IMP=0x00000001000adadc
- (void)loadManaged;	// IMP=0x00000001000ad9b0
- (void)loadConnected;	// IMP=0x00000001000ad7dc
- (void)loadSharePoints;	// IMP=0x00000001000ad7d8
- (_Bool)onlySupportsADisk:(id)arg1;	// IMP=0x00000001000ad738
- (void)loadWorkgroups;	// IMP=0x00000001000ad5e8
- (void)loadDomains;	// IMP=0x00000001000ad4b0
- (void)loadWindows;	// IMP=0x00000001000ad1b0
- (void)loadBonjour;	// IMP=0x00000001000ace18
@property long long mode;
- (void)sidebarPrefsChanged:(id)arg1;	// IMP=0x00000001000acd20
- (void)managedChanged:(id)arg1;	// IMP=0x00000001000acce0
- (void)connectedChanged:(id)arg1;	// IMP=0x00000001000acc48
- (void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2;	// IMP=0x00000001000acb98
- (void)workgroupsChanged:(id)arg1;	// IMP=0x00000001000acb60
- (void)domainsChanged:(id)arg1;	// IMP=0x00000001000acb20
- (void)serversChanged:(id)arg1;	// IMP=0x00000001000aca54
- (void)classroomChanged:(id)arg1;	// IMP=0x00000001000aca40
- (void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2;	// IMP=0x00000001000ac894
- (void)notifyClientAboutWorkgroups;	// IMP=0x00000001000ac4c0
- (void)setConnectionState:(int)arg1;	// IMP=0x00000001000ac4ac
- (void)setUserName:(id)arg1;	// IMP=0x00000001000ac498
- (void)setError:(int)arg1;	// IMP=0x00000001000ac488
- (void)notifyClient:(double)arg1;	// IMP=0x00000001000ac458
- (void)dealloc;	// IMP=0x00000001000ac3f8
- (id)initWithNode:(struct __SFNode *)arg1 protocol:(id)arg2 flags:(unsigned long long)arg3 kind:(id)arg4;	// IMP=0x00000001000ac184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

