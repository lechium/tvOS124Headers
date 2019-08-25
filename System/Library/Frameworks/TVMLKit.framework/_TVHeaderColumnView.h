/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVHeaderColumnView : UIView {

	NSArray* _labelViews;
	double _lineSpacing;

}

@property (nonatomic,copy) NSArray * labelViews;              //@synthesize labelViews=_labelViews - In the implementation block
@property (assign,nonatomic) double lineSpacing;              //@synthesize lineSpacing=_lineSpacing - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(void)setLabelViews:(NSArray *)arg1 ;
-(NSArray *)labelViews;
@end

