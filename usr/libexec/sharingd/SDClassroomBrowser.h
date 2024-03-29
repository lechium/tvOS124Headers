//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SDClassroomBrowser : NSObject
{
    NSArray *_nodes;	// 8 = 0x8
    NSString *_clientBundleID;	// 16 = 0x10
}

+ (id)sharedBrowser;	// IMP=0x000000010008557c
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly, copy) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;	// IMP=0x0000000100085670
- (void)cancelSendingItemsToPersonWithID:(id)arg1 sessionID:(id)arg2 clientBundleID:(id)arg3;	// IMP=0x0000000100085640
- (void)startSendingItems:(id)arg1 withProperties:(id)arg2 toPersonWithID:(id)arg3 clientBundleID:(id)arg4 airDropClientDelegate:(id)arg5;	// IMP=0x000000010008563c
- (void)potentiallyInvalidate;	// IMP=0x0000000100085638
- (void)stop;	// IMP=0x0000000100085634
- (void)start;	// IMP=0x0000000100085630
- (id)init;	// IMP=0x00000001000855fc

@end

