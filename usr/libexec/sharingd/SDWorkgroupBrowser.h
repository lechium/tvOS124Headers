//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDBonjourBrowserDelegate-Protocol.h"

@class NSArray, NSSet, NSString, SDBonjourBrowser;

__attribute__((visibility("hidden")))
@interface SDWorkgroupBrowser : NSObject <SDBonjourBrowserDelegate>
{
    int _clientCount;	// 8 = 0x8
    SDBonjourBrowser *_browser;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x00000001000f61a8
- (void).cxx_destruct;	// IMP=0x00000001000f6630
- (void)stop;	// IMP=0x00000001000f65c4
- (void)start;	// IMP=0x00000001000f649c
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x00000001000f6444
@property(readonly, copy) NSSet *workgroups;
@property(readonly, copy) NSArray *nodes;
- (id)init;	// IMP=0x00000001000f6228

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

