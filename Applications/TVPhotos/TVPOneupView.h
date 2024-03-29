//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface TVPOneupView : UIView <UIGestureRecognizerDelegate>
{
    Class _viewClass;	// 8 = 0x8
    Class _supplementaryViewClass;	// 16 = 0x10
    struct {
        unsigned int _respondsToDidFocusItem:1;
        unsigned int _respondsToDidSelectItem:1;
        unsigned int _respondsToDidPlayItem:1;
        unsigned int _respondsToTransitioningToMode:1;
    } _delegateFlags;	// 24 = 0x18
    struct CGPoint _firstTouchLocation;	// 32 = 0x20
    struct CGPoint _minCenter;	// 48 = 0x30
    struct CGPoint _maxCenter;	// 64 = 0x40
    _Bool _reloadOnLayout;	// 80 = 0x50
    _Bool _isPerformingTransitionAnimation;	// 81 = 0x51
    id <TVPOneupViewDelegate> _delegate;	// 88 = 0x58
    id <TVPOneupViewDataSource> _dataSource;	// 96 = 0x60
    unsigned long long _transition;	// 104 = 0x68
    long long _focusedItemIndex;	// 112 = 0x70
    unsigned long long _allowedModes;	// 120 = 0x78
    unsigned long long _currentMode;	// 128 = 0x80
    UITapGestureRecognizer *_menuGestureRecognizer;	// 136 = 0x88
    unsigned long long _nextEventType;	// 144 = 0x90
    UIView *_currentView;	// 152 = 0x98
    UIView *_spareView;	// 160 = 0xa0
    UIView *_currentSupplementaryView;	// 168 = 0xa8
    UIView *_spareSupplementaryView;	// 176 = 0xb0
    UIPanGestureRecognizer *_panGestureRecognizer;	// 184 = 0xb8
    UISwipeGestureRecognizer *_upSwipeGesture;	// 192 = 0xc0
    UISwipeGestureRecognizer *_downSwipeGesture;	// 200 = 0xc8
    UISwipeGestureRecognizer *_leftSwipeGesture;	// 208 = 0xd0
    UISwipeGestureRecognizer *_rightSwipeGesture;	// 216 = 0xd8
}

@property(nonatomic) _Bool isPerformingTransitionAnimation; // @synthesize isPerformingTransitionAnimation=_isPerformingTransitionAnimation;
@property(nonatomic) __weak UISwipeGestureRecognizer *rightSwipeGesture; // @synthesize rightSwipeGesture=_rightSwipeGesture;
@property(nonatomic) __weak UISwipeGestureRecognizer *leftSwipeGesture; // @synthesize leftSwipeGesture=_leftSwipeGesture;
@property(nonatomic) __weak UISwipeGestureRecognizer *downSwipeGesture; // @synthesize downSwipeGesture=_downSwipeGesture;
@property(nonatomic) __weak UISwipeGestureRecognizer *upSwipeGesture; // @synthesize upSwipeGesture=_upSwipeGesture;
@property(nonatomic) __weak UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *spareSupplementaryView; // @synthesize spareSupplementaryView=_spareSupplementaryView;
@property(retain, nonatomic) UIView *currentSupplementaryView; // @synthesize currentSupplementaryView=_currentSupplementaryView;
@property(retain, nonatomic) UIView *spareView; // @synthesize spareView=_spareView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(nonatomic) unsigned long long nextEventType; // @synthesize nextEventType=_nextEventType;
@property(nonatomic) __weak UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(nonatomic) unsigned long long allowedModes; // @synthesize allowedModes=_allowedModes;
@property(nonatomic) long long focusedItemIndex; // @synthesize focusedItemIndex=_focusedItemIndex;
@property(nonatomic) unsigned long long transition; // @synthesize transition=_transition;
@property(nonatomic) id <TVPOneupViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <TVPOneupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100082e4c
- (_Bool)_isValidIndex:(long long)arg1;	// IMP=0x0000000100082b44
- (void)_performNextEventTransitionIfRequired;	// IMP=0x0000000100082aa0
- (void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2;	// IMP=0x0000000100082724
- (void)_transitionToItemAtIndex:(long long)arg1;	// IMP=0x0000000100081b34
- (void)_addAllSubviews;	// IMP=0x0000000100081a74
- (void)_configureSupplementaryView;	// IMP=0x0000000100081918
- (void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000001000816f4
- (void)_transitionToSupplementaryView:(id)arg1 itemView:(id)arg2;	// IMP=0x0000000100081570
- (void)_transitionToFullScreenMode;	// IMP=0x000000010008138c
- (void)_transitionToCaptionMode;	// IMP=0x00000001000810e0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100080fac
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100080e88
- (void)_panAction:(id)arg1;	// IMP=0x0000000100080af0
- (void)_longPressAction:(id)arg1;	// IMP=0x0000000100080aec
- (void)_menuAction:(id)arg1;	// IMP=0x0000000100080a38
- (void)_doubleTapAction:(id)arg1;	// IMP=0x0000000100080870
- (void)_downAction:(id)arg1;	// IMP=0x0000000100080740
- (void)_upAction:(id)arg1;	// IMP=0x0000000100080610
- (void)_rightAction:(id)arg1;	// IMP=0x000000010008043c
- (void)_leftAction:(id)arg1;	// IMP=0x0000000100080268
- (void)_playButtonAction:(id)arg1;	// IMP=0x00000001000801f4
- (void)_selectButtonAction:(id)arg1;	// IMP=0x0000000100080180
- (_Bool)canBecomeFocused;	// IMP=0x0000000100080178
- (void)layoutSubviews;	// IMP=0x000000010007fc98
- (id)dequeueReusableSupplementaryView;	// IMP=0x000000010007fc8c
- (void)registerSupplementaryViewClass:(Class)arg1;	// IMP=0x000000010007fc7c
- (id)dequeueReusableItemView;	// IMP=0x000000010007fc70
- (void)registerItemViewClass:(Class)arg1;	// IMP=0x000000010007fc60
@property(readonly, nonatomic) UIView *focusedItemView;
- (void)reloadData;	// IMP=0x000000010007fab8
- (void)setAdjustedFocusIndex:(long long)arg1;	// IMP=0x000000010007faa8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007f2b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

