/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOAutomobileOptions, GEOTransitOptions;


@protocol _MKInfoCardController <NSObject>
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate; 
@property (assign,nonatomic) double contentAlpha; 
@required
+(double)headerHeightInMinimalMode;
-(void)setAutomobileOptions:(id)arg1;
-(void)setTransitOptions:(id)arg1;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(double)contentAlpha;
-(void)hideTitle:(BOOL)arg1;
-(void)setContentAlpha:(double)arg1;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id)arg1;

@end
