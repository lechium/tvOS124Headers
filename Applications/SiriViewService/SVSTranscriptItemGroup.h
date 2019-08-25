//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface SVSTranscriptItemGroup : NSObject <NSFastEnumeration>
{
    NSMutableArray *_transcriptItems;	// 8 = 0x8
    NSMutableIndexSet *_insertionIndexes;	// 16 = 0x10
    _Bool _provisional;	// 24 = 0x18
    _Bool _waitsForConfirmation;	// 25 = 0x19
    double _presentationDelay;	// 32 = 0x20
    _Bool _eligibleForPresentation;	// 40 = 0x28
    _Bool _presentationDelayElapsed;	// 41 = 0x29
    id <SVSTranscriptItemGroupDelegate> _delegate;	// 48 = 0x30
}

@property(nonatomic, getter=_presentationDelayElapsed, setter=_setPresentationDelayElapsed:) _Bool presentationDelayElapsed; // @synthesize presentationDelayElapsed=_presentationDelayElapsed;
@property(nonatomic) __weak id <SVSTranscriptItemGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool waitsForConfirmation; // @synthesize waitsForConfirmation=_waitsForConfirmation;
@property(nonatomic, getter=isEligibleForPresentation) _Bool eligibleForPresentation; // @synthesize eligibleForPresentation=_eligibleForPresentation;
@property(readonly, nonatomic, getter=isProvisional) _Bool provisional; // @synthesize provisional=_provisional;
- (void).cxx_destruct;	// IMP=0x0000000100051f40
- (void)removeElementAtIndex:(long long)arg1;	// IMP=0x0000000100051e04
- (void)shiftInsertionIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2;	// IMP=0x0000000100051dec
- (void)replaceTranscriptItem:(id)arg1 withTranscriptItem:(id)arg2 cancelPresentationDelay:(_Bool)arg3;	// IMP=0x0000000100051c6c
- (unsigned long long)insertionIndexForTranscriptItem:(id)arg1;	// IMP=0x0000000100051a9c
- (void)_presentationEligibilityConditionDidChange;	// IMP=0x0000000100051854
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000001000517e8
@property(readonly, nonatomic) NSIndexSet *insertionIndexes;
@property(readonly, nonatomic) NSArray *transcriptItems;
- (id)description;	// IMP=0x0000000100051530
- (id)init;	// IMP=0x00000001000514ac
- (id)initWithTranscriptItems:(id)arg1 insertionIndexes:(id)arg2 provisional:(_Bool)arg3 waitsForConfirmation:(_Bool)arg4 presentationDelay:(double)arg5;	// IMP=0x00000001000511bc

@end

