/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewUpdateItem, NSIndexPath, UITableViewUpdateGap;

@interface UIUpdateItem : NSObject {

	UICollectionViewUpdateItem* _collectionViewUpdateItem;
	BOOL _headerFooterOnly;
	BOOL _skipAnimation;
	int _action;
	NSIndexPath* _indexPath;
	long long _animation;
	double _offset;
	UITableViewUpdateGap* _gap;

}

@property (assign,nonatomic,__weak) UITableViewUpdateGap * gap;                                    //@synthesize gap=_gap - In the implementation block
@property (nonatomic,readonly) UICollectionViewUpdateItem * collectionViewUpdateItem; 
@property (nonatomic,readonly) int action;                                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long animation;                                                  //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) double offset;                                                        //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL headerFooterOnly;                                                //@synthesize headerFooterOnly=_headerFooterOnly - In the implementation block
@property (assign,nonatomic) BOOL skipAnimation;                                                   //@synthesize skipAnimation=_skipAnimation - In the implementation block
-(int)action;
-(NSIndexPath *)indexPath;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(void)setAnimation:(long long)arg1 ;
-(long long)animation;
-(BOOL)isSectionOperation;
-(id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3 ;
-(BOOL)headerFooterOnly;
-(void)setHeaderFooterOnly:(BOOL)arg1 ;
-(UICollectionViewUpdateItem *)collectionViewUpdateItem;
-(void)setGap:(UITableViewUpdateGap *)arg1 ;
-(id)_actionDescription;
-(BOOL)skipAnimation;
-(void)setSkipAnimation:(BOOL)arg1 ;
-(UITableViewUpdateGap *)gap;
@end

