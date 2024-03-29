//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TVPCommentsPageView;

@interface TVPSharedPSCommentsView : UIView
{
    struct {
        unsigned int _respondsToSubheaderViewInCommentsView:1;
    } _dataSourceFlags;	// 8 = 0x8
    id <TVPSharedPSCommentsViewDataSource> _dataSource;	// 16 = 0x10
    id <TVPSharedPSCommentsViewDelegate> _delegate;	// 24 = 0x18
    UIView *_headerView;	// 32 = 0x20
    UIView *_subHeaderView;	// 40 = 0x28
    Class _commentsClass;	// 48 = 0x30
    TVPCommentsPageView *_commentsView;	// 56 = 0x38
    NSString *_headerCellReuseIdentifier;	// 64 = 0x40
    NSString *_subHeaderCellReuseIdentifier;	// 72 = 0x48
    NSString *_commentsCellReuseIdentifier;	// 80 = 0x50
}

@property(retain, nonatomic) NSString *commentsCellReuseIdentifier; // @synthesize commentsCellReuseIdentifier=_commentsCellReuseIdentifier;
@property(retain, nonatomic) NSString *subHeaderCellReuseIdentifier; // @synthesize subHeaderCellReuseIdentifier=_subHeaderCellReuseIdentifier;
@property(retain, nonatomic) NSString *headerCellReuseIdentifier; // @synthesize headerCellReuseIdentifier=_headerCellReuseIdentifier;
@property(retain, nonatomic) TVPCommentsPageView *commentsView; // @synthesize commentsView=_commentsView;
@property(retain, nonatomic) Class commentsClass; // @synthesize commentsClass=_commentsClass;
@property(retain, nonatomic) UIView *subHeaderView; // @synthesize subHeaderView=_subHeaderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <TVPSharedPSCommentsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVPSharedPSCommentsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x000000010001a054
- (id)_latestCommentIndexPathForCommentsView;	// IMP=0x0000000100019e84
- (void)_scrollToLastComment;	// IMP=0x0000000100019e04
- (void)layoutSubviews;	// IMP=0x0000000100019aa0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100019a10
- (id)dequeueReusableViewForIdentifier:(id)arg1;	// IMP=0x000000010001996c
- (void)reloadCommentsData;	// IMP=0x0000000100019928
- (void)registerClass:(Class)arg1 forCommentsWithReuseIdentifier:(id)arg2;	// IMP=0x0000000100019834
- (void)registerClass:(Class)arg1 forSubheaderWithReuseIdentifier:(id)arg2;	// IMP=0x0000000100019754
- (void)registerClass:(Class)arg1 forHeaderWithReuseIdentifier:(id)arg2;	// IMP=0x0000000100019674

@end

