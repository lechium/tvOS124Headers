//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTFeedUpdateProcessor : MTBaseProcessor
{
}

- (void)_lpmDidChange;	// IMP=0x0000000100115f50
- (void)_reCheck;	// IMP=0x0000000100115dd4
- (_Bool)_isLPMEnabled;	// IMP=0x0000000100115d80
- (void)checkAutoDownloadsForUuids:(id)arg1;	// IMP=0x0000000100115be8
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x0000000100115bd8
- (id)entityName;	// IMP=0x0000000100115bc8
- (id)predicate;	// IMP=0x0000000100115b38
- (double)updatePredicateDuration;	// IMP=0x0000000100115b2c
- (void)dealloc;	// IMP=0x0000000100115ab4
- (void)start;	// IMP=0x0000000100115a24

@end
