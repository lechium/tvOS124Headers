/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, NSArray, NSString;

@interface _MKGradientView : UIView {

	CAGradientLayer* _gradient;

}

@property (copy) NSArray * gradientColors; 
@property (copy) NSArray * gradientLocations; 
@property (assign) CGPoint gradientEndPoint; 
@property (assign) CGPoint gradientStartPoint; 
@property (copy) NSString * gradientType; 
+(Class)layerClass;
-(NSArray *)gradientLocations;
-(void)setGradientLocations:(NSArray *)arg1 ;
-(CGPoint)gradientEndPoint;
-(void)setGradientEndPoint:(CGPoint)arg1 ;
-(CGPoint)gradientStartPoint;
-(void)setGradientStartPoint:(CGPoint)arg1 ;
-(NSString *)gradientType;
-(void)setGradientType:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
@end

