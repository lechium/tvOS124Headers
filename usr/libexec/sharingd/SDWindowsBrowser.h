//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDBonjourBrowserDelegate-Protocol.h"

@class NSArray, NSString, SDBonjourBrowser;
@protocol SDWindowsBrowserDelegate;

__attribute__((visibility("hidden")))
@interface SDWindowsBrowser : NSObject <SDBonjourBrowserDelegate>
{
    SDBonjourBrowser *_browser;	// 8 = 0x8
    NSString *_workgroup;	// 16 = 0x10
    id <SDWindowsBrowserDelegate> _delegate;	// 24 = 0x18
}

@property __weak id <SDWindowsBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *workgroup; // @synthesize workgroup=_workgroup;
- (void).cxx_destruct;	// IMP=0x00000001000ee6a4
- (void)stop;	// IMP=0x00000001000ee600
- (void)start;	// IMP=0x00000001000ee4e0
- (void)bonjourNodesDidChange:(id)arg1;	// IMP=0x00000001000ee49c
@property(readonly, copy) NSArray *nodes;
- (void)dealloc;	// IMP=0x00000001000ee438
- (id)initWithWorkgroup:(id)arg1;	// IMP=0x00000001000ee3a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
