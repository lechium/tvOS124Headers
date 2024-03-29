/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor, UIImage;


@protocol UIPreviewActionItem_Internal <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long style; 
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) UIImage * image; 
@required
-(NSString *)identifier;
-(void)setTitle:(id)arg1;
-(void)setImage:(id)arg1;
-(UIImage *)image;
-(NSString *)title;
-(void)setStyle:(long long)arg1;
-(long long)style;
-(void)setIdentifier:(id)arg1;
-(id)_color;
-(void)_setColor:(id)arg1;
-(id)_effectiveColor;
-(id)_effectiveImage;

@end

