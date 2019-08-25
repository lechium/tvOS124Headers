/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@protocol UINamedLayerImage;
@class NSObject, UIImage, NSString;

@interface TVNamedLayerImage : NSObject <UINamedLayerImage> {

	int _blendMode;
	NSObject*<UINamedLayerImage> _namedLayerImage;
	UIImage* _image;

}

@property (nonatomic,retain) NSObject*<UINamedLayerImage> namedLayerImage;              //@synthesize namedLayerImage=_namedLayerImage - In the implementation block
@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int blendMode;                                             //@synthesize blendMode=_blendMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (assign,nonatomic) BOOL fixedFrame; 
+(id)namedLayerImageFromNamedLayerImage:(id)arg1 ;
+(id)namedLayerImageFromNamedLayerImage:(id)arg1 decodeImmediately:(BOOL)arg2 ;
+(id)namedLayerImageWithImage:(id)arg1 decodeImmediately:(BOOL)arg2 ;
+(id)namedLayerImageWithImage:(id)arg1 ;
-(void)setNamedLayerImage:(NSObject*<UINamedLayerImage>)arg1 ;
-(NSObject*<UINamedLayerImage>)namedLayerImage;
-(id)init;
-(NSString *)name;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(CGRect)frame;
-(double)opacity;
-(id)_init;
-(id)imageObj;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setBlendMode:(int)arg1 ;
@end

