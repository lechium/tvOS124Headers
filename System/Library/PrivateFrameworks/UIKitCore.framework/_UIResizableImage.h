/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImage.h>

@interface _UIResizableImage : UIImage {

	BOOL _alwaysStretches;
	BOOL _isSubimage;
	UIEdgeInsets _subimageInsets;
	UIEdgeInsets _capInsets;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isResizable;
-(UIEdgeInsets)capInsets;
-(BOOL)_suppressesAccessibilityHairlineThickening;
-(CGRect)_contentStretchInPixels;
-(BOOL)_isTiledWhenStretchedToSize:(CGSize)arg1 ;
-(id)_resizableImageWithCapMask:(int)arg1 ;
-(void)_configureImage:(id)arg1 ;
-(void)_setCapInsets:(UIEdgeInsets)arg1 ;
-(void)_setAlwaysStretches:(BOOL)arg1 ;
-(CGRect)_contentInsetsInPixels:(UIEdgeInsets)arg1 emptySizeFallback:(/*^block*/id)arg2 ;
-(CGRect)_contentRectInPixels;
-(long long)resizingMode;
-(id)initWithImage:(id)arg1 capInsets:(UIEdgeInsets)arg2 ;
-(void)_setSubimageInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_isSubimage;
@end
