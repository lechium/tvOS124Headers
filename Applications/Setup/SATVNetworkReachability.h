//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface SATVNetworkReachability : NSObject
{
    NSURLSession *_urlSession;	// 8 = 0x8
}

@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;	// IMP=0x0000000100058fd4
- (void)dealloc;	// IMP=0x0000000100058ea0
- (void)_performReachabilityRequestWithRetryCount:(long long)arg1 shouldSleep:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005885c
- (void)testReachabilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058594
- (id)init;	// IMP=0x00000001000584b4

@end
