//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TVImageProxy, UIImage, UIImageView, UIView;

@interface TVPPhotoCell : UICollectionViewCell
{
    _Bool _imageLoaded;	// 8 = 0x8
    TVImageProxy *_imageProxy;	// 16 = 0x10
    UIImage *_photoImage;	// 24 = 0x18
    UIImage *_placeholderImage;	// 32 = 0x20
    long long _placeholderAssetType;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIView *_overlayView;	// 56 = 0x38
}

@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long placeholderAssetType; // @synthesize placeholderAssetType=_placeholderAssetType;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (void).cxx_destruct;	// IMP=0x000000010008f0cc
- (void)_updateImageView;	// IMP=0x000000010008efb8
- (void)_setPlaceholderImageFromPlaceholderAssetTypeImage;	// IMP=0x000000010008ef70
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010008eee4
- (_Bool)canBecomeFocused;	// IMP=0x000000010008eedc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010008ee00
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010008ed34
- (double)cellCornerRadius;	// IMP=0x000000010008ed2c
- (void)setOverlay:(id)arg1;	// IMP=0x000000010008ec38
- (void)setImage:(id)arg1;	// IMP=0x000000010008eb8c
- (void)prepareForReuse;	// IMP=0x000000010008e6d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008e5d4

@end

