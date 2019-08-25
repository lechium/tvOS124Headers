//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SiriUIKeyline, UICollectionView;

@interface SVSTranscriptContentView : UIView
{
    SiriUIKeyline *_bottomKeyline;	// 8 = 0x8
    SiriUIKeyline *_topKeyline;	// 16 = 0x10
    _Bool _bottomKeylineHidden;	// 24 = 0x18
    _Bool _topKeylineHidden;	// 25 = 0x19
    UICollectionView *_collectionView;	// 32 = 0x20
    UIView *_suggestionsView;	// 40 = 0x28
    double _topMargin;	// 48 = 0x30
    double _bottomMargin;	// 56 = 0x38
}

@property(nonatomic) _Bool topKeylineHidden; // @synthesize topKeylineHidden=_topKeylineHidden;
@property(nonatomic) _Bool bottomKeylineHidden; // @synthesize bottomKeylineHidden=_bottomKeylineHidden;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) UIView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;	// IMP=0x0000000100075e28
- (void)_setKeylineHidden:(id)arg1 hidden:(_Bool)arg2;	// IMP=0x0000000100075cfc
- (void)layoutSubviews;	// IMP=0x00000001000759a4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100075994
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2;	// IMP=0x000000010007576c

@end

