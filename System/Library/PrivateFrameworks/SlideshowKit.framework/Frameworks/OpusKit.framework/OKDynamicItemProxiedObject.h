/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class OKWidgetView;


@protocol OKDynamicItemProxiedObject <NSObject>
@property (nonatomic,readonly) OKWidgetView * parentWidgetView; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@required
-(OKWidgetView *)parentWidgetView;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(void)setCenter:(CGPoint)arg1;
-(CGPoint)center;

@end

