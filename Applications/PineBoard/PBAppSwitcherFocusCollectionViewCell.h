//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, PBAppSwitcherItem, PBAppSwitcherTitleView, PBSnapshotView, UIView;

@interface PBAppSwitcherFocusCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _hasBlurFilter;	// 8 = 0x8
    PBSnapshotView *_snapshotImageView;	// 16 = 0x10
    PBAppSwitcherItem *_appSwitcherItem;	// 24 = 0x18
    PBAppSwitcherTitleView *_titleView;	// 32 = 0x20
    UIView *_itemContentView;	// 40 = 0x28
    UIView *_containerView;	// 48 = 0x30
    double _blurRadius;	// 56 = 0x38
    UIView *_snapshotView;	// 64 = 0x40
    UIView *_maskView;	// 72 = 0x48
    struct CGRect _blurRect;	// 80 = 0x50
    struct CGRect _maskRect;	// 112 = 0x70
}

@property(readonly, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(readonly, nonatomic) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(nonatomic) _Bool hasBlurFilter; // @synthesize hasBlurFilter=_hasBlurFilter;
@property(readonly, nonatomic) struct CGRect blurRect; // @synthesize blurRect=_blurRect;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *itemContentView; // @synthesize itemContentView=_itemContentView;
@property(readonly, nonatomic) PBAppSwitcherTitleView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) PBAppSwitcherItem *appSwitcherItem; // @synthesize appSwitcherItem=_appSwitcherItem;
@property(readonly, nonatomic) PBSnapshotView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
- (void).cxx_destruct;	// IMP=0x00000001000914dc
- (void)_updateRasterization;	// IMP=0x000000010009121c
- (void)setMaskRect:(struct CGRect)arg1;	// IMP=0x0000000100091058
- (void)setBlurRadius:(double)arg1 rect:(struct CGRect)arg2;	// IMP=0x0000000100090ca8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100090b30
- (void)setAppSwitcherItem:(id)arg1;	// IMP=0x0000000100090668
- (void)layoutSubviews;	// IMP=0x000000010009057c
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000001000901bc
- (void)dealloc;	// IMP=0x000000010009016c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008fd48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

