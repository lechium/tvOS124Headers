//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVSTranscriptContentView, UICollectionView;

@interface SVSTranscriptView : UIView
{
    SVSTranscriptContentView *_contentView;	// 8 = 0x8
    _Bool _contentSizeIsSet;	// 16 = 0x10
    id <SVSTranscriptViewDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SVSTranscriptViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010005bed4
- (void)setBottomKeylineHidden:(_Bool)arg1;	// IMP=0x000000010005be88
- (void)setTopKeylineHidden:(_Bool)arg1;	// IMP=0x000000010005be70
@property(nonatomic) double bottomMargin;
@property(nonatomic) double topMargin;
@property(retain, nonatomic) UIView *suggestionsView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010005bc34
- (void)layoutSubviews;	// IMP=0x000000010005bbc8
- (void)dealloc;	// IMP=0x000000010005bb18
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005bb04
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2 delegate:(id)arg3;	// IMP=0x000000010005b988

@end

