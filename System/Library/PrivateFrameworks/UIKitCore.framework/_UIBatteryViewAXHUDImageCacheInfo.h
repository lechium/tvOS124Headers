/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIColor;

@interface _UIBatteryViewAXHUDImageCacheInfo : NSObject {

	BOOL _showBolt;
	BOOL _reverseLayoutDirection;
	UIImage* _cachedImage;
	UIColor* _fillColor;
	double _capacity;
	double _scale;

}

@property (nonatomic,retain) UIImage * cachedImage;                    //@synthesize cachedImage=_cachedImage - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) BOOL showBolt;                            //@synthesize showBolt=_showBolt - In the implementation block
@property (assign,nonatomic) BOOL reverseLayoutDirection;              //@synthesize reverseLayoutDirection=_reverseLayoutDirection - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(void)setScale:(double)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(double)capacity;
-(BOOL)showBolt;
-(BOOL)reverseLayoutDirection;
-(BOOL)cacheMatchesCapacity:(double)arg1 fillColor:(id)arg2 showingBolt:(BOOL)arg3 reverseLayout:(BOOL)arg4 scale:(double)arg5 ;
-(UIImage *)cachedImage;
-(void)setCachedImage:(UIImage *)arg1 ;
-(void)setCapacity:(double)arg1 ;
-(void)setShowBolt:(BOOL)arg1 ;
-(void)setReverseLayoutDirection:(BOOL)arg1 ;
@end

