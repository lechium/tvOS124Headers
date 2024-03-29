//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSIndexPath, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface TVCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_playButtonRecognizer;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressRecognizer;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToDidLongPressItem:1;
        unsigned int _respondsToCanBecomeFocused:1;
    } _delegateFlags;	// 24 = 0x18
    UIView *_overlayLayoutView;	// 32 = 0x20
    NSIndexPath *_indexPathForLastFocusedItem;	// 40 = 0x28
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
@property(readonly, nonatomic) UIView *overlayLayoutView; // @synthesize overlayLayoutView=_overlayLayoutView;
- (void).cxx_destruct;	// IMP=0x00000001000695c4
- (void)_performBlockWithFocusedCellIndexPath:(CDUnknownBlockType)arg1;	// IMP=0x0000000100069454
- (void)_longPressAction:(id)arg1;	// IMP=0x0000000100069360
- (void)_playButtonAction:(id)arg1;	// IMP=0x0000000100069294
@property(nonatomic) __weak id <TVCollectionViewDelegate> delegate; // @dynamic delegate;
- (void)_notifyDidScroll;	// IMP=0x0000000100069130
- (void)reloadData;	// IMP=0x00000001000690dc
- (_Bool)canBecomeFocused;	// IMP=0x000000010006904c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100068e1c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100068c20
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100068c18
- (void)_updateOverlayLayoutGuide;	// IMP=0x0000000100068af4
- (void)adjustedContentInsetDidChange;	// IMP=0x0000000100068aa4
- (void)layoutSubviews;	// IMP=0x0000000100068a54
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000100068878

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

