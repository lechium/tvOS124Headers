//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "TVAuxiliaryViewSelecting.h"

@class NSString, TVASAppCardView;

@interface TVASAppCardCell : UICollectionViewCell <TVAuxiliaryViewSelecting>
{
    TVASAppCardView *_appCardView;	// 8 = 0x8
}

@property(retain, nonatomic) TVASAppCardView *appCardView; // @synthesize appCardView=_appCardView;
- (void).cxx_destruct;	// IMP=0x000000010000916c
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000001000090d8
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100008e94
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100008c50
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100008a0c
- (void)layoutSubviews;	// IMP=0x0000000100008988
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000001000088b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
