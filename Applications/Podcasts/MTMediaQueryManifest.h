//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPredicateManifest.h"

@class MPMediaQuery, NSArray, NSMutableDictionary;

@interface MTMediaQueryManifest : MTPredicateManifest
{
    MPMediaQuery *_query;	// 8 = 0x8
    NSArray *_persistentIds;	// 16 = 0x10
    NSMutableDictionary *_pidToUuidMapping;	// 24 = 0x18
}

@property(retain, nonatomic) NSMutableDictionary *pidToUuidMapping; // @synthesize pidToUuidMapping=_pidToUuidMapping;
@property(retain, nonatomic) NSArray *persistentIds; // @synthesize persistentIds=_persistentIds;
@property(retain, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;	// IMP=0x0000000100059a90
- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x00000001000599b0
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x000000010005981c
- (void)_updateSortOrder;	// IMP=0x0000000100059614
- (void)_processResults:(id)arg1;	// IMP=0x00000001000593e4
- (id)initWithMediaQuery:(id)arg1 initialItem:(id)arg2;	// IMP=0x0000000100058e94

@end

