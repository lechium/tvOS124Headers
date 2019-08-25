/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIImage, NSString, UIImageView, UILabel;

@interface VUIAppCell : UICollectionViewCell {

	UIImage* _image;
	NSString* _title;
	BOOL _didLayout;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}
-(void)setTitle:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
@end

