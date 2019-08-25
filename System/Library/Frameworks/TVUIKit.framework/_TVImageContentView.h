/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/_TVLockupContentView.h>

@class UIImage, UIImageView;

@interface _TVImageContentView : _TVLockupContentView {

	UIImage* _image;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(NSDirectionalEdgeInsets)intrinsicFocusSizeIncrease;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(id)_imageViewForImage:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
-(CGSize)intrinsicContentSize;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end

