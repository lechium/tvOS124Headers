//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDActivationPredicateObserver.h"

@class NSString;

@interface DMDActivationiCloudAccountObserver : DMDActivationPredicateObserver
{
    NSString *_DSID;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
- (void).cxx_destruct;	// IMP=0x000000010000efc8
- (void)_extractComponentsFromPredicate:(id)arg1;	// IMP=0x000000010000ee44
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x000000010000eba4
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 iCloudAccountPredicate:(id)arg3;	// IMP=0x000000010000eae4

@end
