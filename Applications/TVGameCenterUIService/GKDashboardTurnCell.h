//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardPlayerCell.h"

@class NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface GKDashboardTurnCell : GKDashboardPlayerCell
{
    long long _displayIndex;	// 8 = 0x8
    UILabel *_dateLabel;	// 16 = 0x10
    UILabel *_turnLabel;	// 24 = 0x18
    UIImageView *_actionIndicatorView;	// 32 = 0x20
    NSLayoutConstraint *_dateToNameConstraint;	// 40 = 0x28
    NSLayoutConstraint *_turnToNameConstraint;	// 48 = 0x30
    UIColor *_dateColor;	// 56 = 0x38
    UIColor *_turnColor;	// 64 = 0x40
    double _dateToNameConstant;	// 72 = 0x48
    double _turnToNameConstant;	// 80 = 0x50
}

+ (struct CGSize)defaultSizeForTurnDetail;	// IMP=0x000000010001cfe8
@property(nonatomic) double turnToNameConstant; // @synthesize turnToNameConstant=_turnToNameConstant;
@property(nonatomic) double dateToNameConstant; // @synthesize dateToNameConstant=_dateToNameConstant;
@property(retain, nonatomic) UIColor *turnColor; // @synthesize turnColor=_turnColor;
@property(retain, nonatomic) UIColor *dateColor; // @synthesize dateColor=_dateColor;
@property(nonatomic) NSLayoutConstraint *turnToNameConstraint; // @synthesize turnToNameConstraint=_turnToNameConstraint;
@property(nonatomic) NSLayoutConstraint *dateToNameConstraint; // @synthesize dateToNameConstraint=_dateToNameConstraint;
@property(nonatomic) UIImageView *actionIndicatorView; // @synthesize actionIndicatorView=_actionIndicatorView;
@property(nonatomic) UILabel *turnLabel; // @synthesize turnLabel=_turnLabel;
@property(nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) long long displayIndex; // @synthesize displayIndex=_displayIndex;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001d76c
- (void)setOnDarkBackground:(_Bool)arg1;	// IMP=0x000000010001d698
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;	// IMP=0x000000010001d310
- (void)configureForMatch:(id)arg1;	// IMP=0x000000010001d034
- (_Bool)wantsLocalPlayerAction:(id)arg1;	// IMP=0x000000010001cffc
- (void)dealloc;	// IMP=0x000000010001cf78
- (void)awakeFromNib;	// IMP=0x000000010001ce40

@end

