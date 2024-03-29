/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, UIColor;

@interface VUIProductMetadataLayout : TVViewLayout {

	VUITextLayout* _headerTextLayout;
	VUITextLayout* _infoHeaderTextLayout;
	VUITextLayout* _infoBodyTextLayout;
	VUITextLayout* _infoDescriptionTextLayout;
	VUITextLayout* _footerTextLayout;
	double _descriptionLineSpacing;
	UIColor* _seeMoreTextColor;
	UIColor* _darkSeeMoreTextColor;
	UIColor* _highlightedDescriptionText;
	UIColor* _darkHighlightedDescriptionText;

}

@property (nonatomic,readonly) VUITextLayout * headerTextLayout;                       //@synthesize headerTextLayout=_headerTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * infoHeaderTextLayout;                   //@synthesize infoHeaderTextLayout=_infoHeaderTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * infoBodyTextLayout;                     //@synthesize infoBodyTextLayout=_infoBodyTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * infoDescriptionTextLayout;              //@synthesize infoDescriptionTextLayout=_infoDescriptionTextLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * footerTextLayout;                       //@synthesize footerTextLayout=_footerTextLayout - In the implementation block
@property (nonatomic,readonly) double descriptionLineSpacing;                          //@synthesize descriptionLineSpacing=_descriptionLineSpacing - In the implementation block
@property (nonatomic,readonly) UIColor * seeMoreTextColor;                             //@synthesize seeMoreTextColor=_seeMoreTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * darkSeeMoreTextColor;                         //@synthesize darkSeeMoreTextColor=_darkSeeMoreTextColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightedDescriptionText;                   //@synthesize highlightedDescriptionText=_highlightedDescriptionText - In the implementation block
@property (nonatomic,readonly) UIColor * darkHighlightedDescriptionText;               //@synthesize darkHighlightedDescriptionText=_darkHighlightedDescriptionText - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
@property (nonatomic,readonly) BOOL isDynamicTextEnabled; 
@property (nonatomic,readonly) BOOL isTVOS; 
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(BOOL)isHorizontal;
-(VUITextLayout *)footerTextLayout;
-(VUITextLayout *)headerTextLayout;
-(UIColor *)seeMoreTextColor;
-(UIColor *)darkSeeMoreTextColor;
-(VUITextLayout *)infoHeaderTextLayout;
-(VUITextLayout *)infoBodyTextLayout;
-(VUITextLayout *)infoDescriptionTextLayout;
-(double)descriptionLineSpacing;
-(UIColor *)highlightedDescriptionText;
-(UIColor *)darkHighlightedDescriptionText;
-(void)_setupLayouts;
-(BOOL)isDynamicTextEnabled;
-(BOOL)isTVOS;
@end

