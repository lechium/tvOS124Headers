//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (MTAdditions)
- (id)mt_uniqueOrdered;	// IMP=0x00000001001167a8
- (id)mt_uniqued;	// IMP=0x0000000100116790
- (id)mt_allObjectsExcludingIndexes:(id)arg1;	// IMP=0x0000000100116690
- (id)mt_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000100116554
- (id)arrayByRemovingObject:(id)arg1;	// IMP=0x00000001001164d4
- (id)filter:(CDUnknownBlockType)arg1 map:(CDUnknownBlockType)arg2;	// IMP=0x0000000100116300
- (id)filter:(CDUnknownBlockType)arg1;	// IMP=0x000000010011616c
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x0000000100115fc8
@end
