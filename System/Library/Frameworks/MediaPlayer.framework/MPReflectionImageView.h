/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/_UIReflectingView.h>

@class UIImageView, UIImage;

@interface MPReflectionImageView : _UIReflectingView {

	UIImageView* _imageView;
	BOOL _squareImage;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL squareImage;                       //@synthesize squareImage=_squareImage - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(double)defaultReflectionHeight;
-(void)setSquareImage:(BOOL)arg1 ;
-(void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2 ;
-(void)setFrame:(CGRect)arg1 withReflectionHeight:(double)arg2 ;
-(id)albumArtImage;
-(void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2 ;
-(BOOL)squareImage;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
@end

