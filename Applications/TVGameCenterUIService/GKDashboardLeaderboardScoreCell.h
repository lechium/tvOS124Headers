//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKRectShadowCell.h"

@class GKDashboardPlayerPhotoView, GKScore, NSLayoutConstraint, UILabel, UIView;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell
{
    GKScore *_score;	// 8 = 0x8
    GKDashboardPlayerPhotoView *_playerView;	// 16 = 0x10
    NSLayoutConstraint *_playerViewHeightConstraint;	// 24 = 0x18
    UILabel *_rankLabel;	// 32 = 0x20
    UILabel *_nameLabel;	// 40 = 0x28
    UILabel *_scoreLabel;	// 48 = 0x30
    UIView *_topLine;	// 56 = 0x38
    UIView *_bottomLine;	// 64 = 0x40
    UIView *_monogramColorView;	// 72 = 0x48
}

+ (id)highRankNib;	// IMP=0x000000010001bd68
+ (id)lowRankNib;	// IMP=0x000000010001bd3c
+ (struct CGSize)defaultSize;	// IMP=0x000000010001bd28
@property(nonatomic) UIView *monogramColorView; // @synthesize monogramColorView=_monogramColorView;
@property(nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint; // @synthesize playerViewHeightConstraint=_playerViewHeightConstraint;
@property(nonatomic) GKDashboardPlayerPhotoView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) GKScore *score; // @synthesize score=_score;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001c1b4
@property(nonatomic) _Bool linesVisible; // @dynamic linesVisible;
- (void)setupForScore:(id)arg1;	// IMP=0x000000010001c008
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;	// IMP=0x000000010001bf0c
- (void)awakeFromNib;	// IMP=0x000000010001bd94

@end
