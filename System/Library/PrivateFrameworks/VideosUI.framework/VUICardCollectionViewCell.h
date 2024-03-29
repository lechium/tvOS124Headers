/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUICardView, VUICardViewLayoutFactory;

@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell {

	IKViewElement* _viewElement;
	VUICardView* _cardView;
	VUICardViewLayoutFactory* _layoutFactory;

}

@property (nonatomic,retain) IKViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUICardView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
+(long long)_cardLayoutTypeForElement:(id)arg1 ;
+(id)cardCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_updateBackgroundAndHighlightColor;
-(VUICardViewLayoutFactory *)layoutFactory;
-(VUICardView *)cardView;
-(void)setCardView:(VUICardView *)arg1 ;
-(void)setLayoutFactory:(VUICardViewLayoutFactory *)arg1 ;
-(void)setCardView:(id)arg1 force:(BOOL)arg2 ;
@end

