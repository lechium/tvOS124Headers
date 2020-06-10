//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSMutableArray, NSNetServiceBrowser, NSString;

@interface MSDContentServerLocator : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    id _delegate;	// 8 = 0x8
    NSNetServiceBrowser *_browser;	// 16 = 0x10
    NSMutableArray *_servers;	// 24 = 0x18
    NSString *_savedName;	// 32 = 0x20
}

@property(retain) NSString *savedName; // @synthesize savedName=_savedName;
@property(retain) NSMutableArray *servers; // @synthesize servers=_servers;
@property(retain) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010003a30c
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x000000010003a08c
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000100039ec8
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000100039de4
- (_Bool)startLocatingContentServer;	// IMP=0x0000000100039a48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
