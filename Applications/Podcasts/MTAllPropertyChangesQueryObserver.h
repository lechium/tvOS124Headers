//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseQueryObserver.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSString;

@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate>
{
    _Bool _inCallback;	// 8 = 0x8
}

- (void)controllerDidChangeContent:(id)arg1;	// IMP=0x0000000100016fd0
- (void)notifyObservers;	// IMP=0x0000000100016ee8
- (void)startObserving;	// IMP=0x0000000100016e98
- (id)addResultsChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
