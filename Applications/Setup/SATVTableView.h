//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSIndexPath;

@interface SATVTableView : UITableView
{
    NSIndexPath *_indexPathForDirectlyFocusedItem;	// 8 = 0x8
    NSIndexPath *_indexPathForLastFocusedItem;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
- (void).cxx_destruct;	// IMP=0x000000010002be30
- (void)reloadData;	// IMP=0x000000010002bdcc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010002bbe0
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000010002bb84

@end

