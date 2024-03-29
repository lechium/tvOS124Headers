//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface TVPCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressRecognizer;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;	// 24 = 0x18
    NSIndexPath *_indexPathForLastFocusedItem;	// 32 = 0x20
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void).cxx_destruct;	// IMP=0x000000010007e534
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;	// IMP=0x000000010007e3d4
- (void)_longPressAction:(id)arg1;	// IMP=0x000000010007e2e0
- (void)_playButtonAction:(id)arg1;	// IMP=0x000000010007e214
@property(nonatomic) __weak id <TVPCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;	// IMP=0x000000010007e0b0
- (void)reloadData;	// IMP=0x000000010007e05c
- (_Bool)canBecomeFocused;	// IMP=0x000000010007dfcc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010007dd9c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010007dba0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010007db98
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x000000010007da18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

