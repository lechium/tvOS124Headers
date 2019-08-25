//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class IMExpandingLabel, NSString, UIButton, UIImageView, UILabel;

@interface MTPodcastInfoView : UIView <UIGestureRecognizerDelegate>
{
    id <MTPodcastInfoViewDelegate> _delegate;	// 8 = 0x8
    NSString *_podcastUuid;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_authorLabel;	// 40 = 0x28
    UIView *_separatorBelowAuthor;	// 48 = 0x30
    UIButton *_settingsButton;	// 56 = 0x38
    UIButton *_shareButton;	// 64 = 0x40
    IMExpandingLabel *_descriptionView;	// 72 = 0x48
    UIView *_bottomSeparator;	// 80 = 0x50
}

@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) IMExpandingLabel *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) UIView *separatorBelowAuthor; // @synthesize separatorBelowAuthor=_separatorBelowAuthor;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
@property(nonatomic) __weak id <MTPodcastInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100186914
- (id)metricsContentIdentifier;	// IMP=0x00000001001866c4
- (id)metricsName;	// IMP=0x0000000100186698
- (void)descriptionViewTapped:(id)arg1;	// IMP=0x00000001001865f0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001001865e8
- (void)update;	// IMP=0x0000000100186414
- (void)_updateFonts;	// IMP=0x0000000100186248
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000100186204
- (void)layoutSubviews;	// IMP=0x0000000100185dcc
- (void)addSubviews;	// IMP=0x0000000100185834
- (void)dealloc;	// IMP=0x00000001001857bc
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x000000010018568c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

