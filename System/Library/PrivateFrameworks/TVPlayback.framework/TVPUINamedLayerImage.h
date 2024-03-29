/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class NSString, UIImage;

@interface TVPUINamedLayerImage : NSObject <UINamedLayerImage> {

	BOOL _fixedFrame;
	int _blendMode;
	CGImageRef _image;
	NSString* _name;
	double _opacity;
	UIImage* _imageObj;
	CGRect _frame;

}

@property (assign,nonatomic) CGImageRef image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                          //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;                        //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                         //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;                       //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (nonatomic,retain) UIImage * imageObj;                    //@synthesize imageObj=_imageObj - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
-(CGRect)frame;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(UIImage *)imageObj;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(void)setImageObj:(UIImage *)arg1 ;
@end

