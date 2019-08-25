//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class GKAchievement;

@interface GKAchievementIconView : UIImageView
{
    _Bool _isDetail;	// 8 = 0x8
    GKAchievement *_achievement;	// 16 = 0x10
    GKAchievement *_localAchievement;	// 24 = 0x18
}

+ (id)progressSourceDetail;	// IMP=0x000000010000a160
+ (id)progressSource;	// IMP=0x000000010000a0dc
@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
- (void)configureImage;	// IMP=0x000000010000aa04
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a4b4
- (id)progressIdentifierForAchievement:(id)arg1;	// IMP=0x000000010000a440
- (id)processProgressImage:(id)arg1 forAchievement:(id)arg2;	// IMP=0x000000010000a3d0
- (double)progressForAchievement:(id)arg1;	// IMP=0x000000010000a358
- (void)invalidateIntrinsicContentSize;	// IMP=0x000000010000a354
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;	// IMP=0x000000010000a288
- (void)dealloc;	// IMP=0x000000010000a218
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000a1e4

@end
