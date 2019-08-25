/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol VUITVLibraryEpisodeListCellDelegate, TVAuxiliaryViewSelecting;
@class UIView, IKViewElement, _TVStackingPosterView, UIPress, VUIMediaItem, VUITVEpisodeInformationView, NSString;

@interface VUITVLibraryEpisodeListCell : TVContainerCollectionViewCell <UIGestureRecognizerDelegate, TVAuxiliaryViewSelecting> {

	BOOL _isFocusWithinCell;
	id<VUITVLibraryEpisodeListCellDelegate> _delegate;
	UIView*<TVAuxiliaryViewSelecting> _selectingView;
	IKViewElement* _viewElement;
	IKViewElement* _imageViewElement;
	IKViewElement* _informationViewElement;
	_TVStackingPosterView* _stackingPosterView;
	UIPress* _press;
	UIView* _imageView;
	VUIMediaItem* _mediaItem;
	VUITVEpisodeInformationView* _informationView;

}

@property (assign,nonatomic) BOOL isFocusWithinCell;                                               //@synthesize isFocusWithinCell=_isFocusWithinCell - In the implementation block
@property (nonatomic,retain) UIView*<TVAuxiliaryViewSelecting> selectingView;                      //@synthesize selectingView=_selectingView - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                          //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * imageViewElement;                                     //@synthesize imageViewElement=_imageViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * informationViewElement;                               //@synthesize informationViewElement=_informationViewElement - In the implementation block
@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;                           //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) UIPress * press;                                                      //@synthesize press=_press - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) VUIMediaItem * mediaItem;                                             //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) VUITVEpisodeInformationView * informationView;                        //@synthesize informationView=_informationView - In the implementation block
@property (assign,nonatomic,__weak) id<VUITVLibraryEpisodeListCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureVUITVLibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 cornerRadius:(double)arg4 ;
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(VUIMediaItem *)mediaItem;
-(void)setMediaItem:(VUIMediaItem *)arg1 ;
-(void)setDelegate:(id<VUITVLibraryEpisodeListCellDelegate>)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)imageView;
-(id<VUITVLibraryEpisodeListCellDelegate>)delegate;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)prepareForReuse;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(UIPress *)press;
-(void)setPress:(UIPress *)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(_TVStackingPosterView *)stackingPosterView;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(VUITVEpisodeInformationView *)informationView;
-(void)setInformationView:(VUITVEpisodeInformationView *)arg1 ;
-(BOOL)_shouldAddInfoViewToPoster;
-(void)_postConfigurationSetup;
-(void)setImageViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)informationViewElement;
-(void)setInformationViewElement:(IKViewElement *)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_imageViewHandler:(id)arg1 ;
-(void)_informationViewHandler:(id)arg1 ;
-(void)_addTapGestureRecognizersForImageView;
-(void)_addTapGestureRecognizersForInformationView;
-(BOOL)isFocusWithinCell;
-(void)setIsFocusWithinCell:(BOOL)arg1 ;
-(IKViewElement *)imageViewElement;
@end
