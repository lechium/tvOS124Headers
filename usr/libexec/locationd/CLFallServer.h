//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSString;

@interface CLFallServer : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _dataCollectionEnabled;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool dataCollectionEnabled; // @synthesize dataCollectionEnabled=_dataCollectionEnabled;
- (void)clearUUID;	// IMP=0x00000001008a8fcc
- (id)getUUID;	// IMP=0x00000001008a8fc4
- (void)cleanUp:(double)arg1;	// IMP=0x00000001008a8fc0
- (void)sendData:(id)arg1 metaData:(id)arg2 start:(id)arg3 end:(id)arg4;	// IMP=0x00000001008a8fbc
- (id)initInUniverse:(id)arg1;	// IMP=0x00000001008a8fb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
