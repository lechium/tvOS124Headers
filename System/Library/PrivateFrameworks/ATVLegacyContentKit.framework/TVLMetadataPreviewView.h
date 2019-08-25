/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <TVKit/TVMetadataView.h>
#import <libobjc.A.dylib/TVLPreviewView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UIImage, TVLKeyedPreviewElement, TVLLongDescriptionPreviewElement, NSString;

@interface TVLMetadataPreviewView : TVMetadataView <TVLPreviewView, ATVUpdatable> {

	CGSize _previousPreviewImageSize;
	CGRect _previousBounds;
	double _previousYDiff;
	BOOL _centersContent;
	double _topPadding;
	UIImage* _placeholderImage;
	TVLKeyedPreviewElement* _previewElement;
	TVLLongDescriptionPreviewElement* _longDescriptionElement;
	id _imageURL;

}

@property (nonatomic,retain) UIImage * placeholderImage;                                             //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) TVLKeyedPreviewElement * previewElement;                                //@synthesize previewElement=_previewElement - In the implementation block
@property (nonatomic,retain) TVLLongDescriptionPreviewElement * longDescriptionElement;              //@synthesize longDescriptionElement=_longDescriptionElement - In the implementation block
@property (nonatomic,copy) id imageURL;                                                              //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) double topPadding;                                                      //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,getter=isCenteringContent,nonatomic) BOOL centersContent;                          //@synthesize centersContent=_centersContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageURL;
-(id)initWithKeyedPreviewElement:(id)arg1 ;
-(id)initWithLongDescriptionPreviewElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)updateWithPreviewElement:(id)arg1 ;
-(void)configureWithKeyedPreviewElement:(id)arg1 ;
-(void)configureWithLongDescriptionPreviewElement:(id)arg1 ;
-(id)defaultSummaryFont;
-(id)italicSummaryFont;
-(id)_metadataItemsWithKeyedPreviewElement:(id)arg1 ;
-(id)imageOutlineColor;
-(BOOL)isCenteringContent;
-(double)topPadding;
-(void)setCentersContent:(BOOL)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(TVLKeyedPreviewElement *)previewElement;
-(void)setPreviewElement:(TVLKeyedPreviewElement *)arg1 ;
-(TVLLongDescriptionPreviewElement *)longDescriptionElement;
-(void)setLongDescriptionElement:(TVLLongDescriptionPreviewElement *)arg1 ;
-(Class)_titleViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setImageProxy:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
@end

