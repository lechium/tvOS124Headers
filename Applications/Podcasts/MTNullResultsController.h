//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResultsController.h"

@interface MTNullResultsController : MTResultsController
{
    unsigned long long _numberOfObjects;	// 8 = 0x8
}

@property(nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
- (id)allObjects;	// IMP=0x000000010005d08c
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000010005d084
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000010005d07c
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;	// IMP=0x000000010005d070
- (id)indexPathForObject:(id)arg1;	// IMP=0x000000010005d068
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000010005d02c
- (void)reloadData;	// IMP=0x000000010005d028
- (id)init;	// IMP=0x000000010005cfb8

@end

