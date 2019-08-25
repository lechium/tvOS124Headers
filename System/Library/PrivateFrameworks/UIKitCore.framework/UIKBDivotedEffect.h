/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString, UIKBGradient;

@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect> {

	double _weight;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                          //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)CGColor;
-(BOOL)isValid;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(BOOL)usesRGBColors;
-(UIKBGradient *)gradient;
@end

