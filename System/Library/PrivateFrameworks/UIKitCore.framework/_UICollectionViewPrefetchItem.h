/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionViewLayoutAttributes, UICollectionReusableView;

@interface _UICollectionViewPrefetchItem : NSObject {

	BOOL _hasPrefetchedData;
	UICollectionViewLayoutAttributes* _attributes;
	UICollectionReusableView* _view;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL hasPrefetchedData;                                     //@synthesize hasPrefetchedData=_hasPrefetchedData - In the implementation block
@property (nonatomic,retain) UICollectionReusableView * view;                            //@synthesize view=_view - In the implementation block
-(id)description;
-(UICollectionReusableView *)view;
-(void)setView:(UICollectionReusableView *)arg1 ;
-(UICollectionViewLayoutAttributes *)attributes;
-(void)setAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setHasPrefetchedData:(BOOL)arg1 ;
-(BOOL)hasPrefetchedData;
@end

