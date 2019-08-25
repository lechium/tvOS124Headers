/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVRowHosting.h>

@class UIView, NSString;

@interface _TVShowcaseContainerView : UIView <TVRowHosting> {

	BOOL _reversedBehavior;
	UIView* _contentView;
	long long _showcaseBehavior;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isBehaviorReversed,nonatomic) BOOL reversedBehavior;              //@synthesize reversedBehavior=_reversedBehavior - In the implementation block
@property (assign,nonatomic) long long showcaseBehavior;                                   //@synthesize showcaseBehavior=_showcaseBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withSizeCalculation:(/*^block*/id)arg2 ;
-(void)setShowcaseBehavior:(long long)arg1 ;
-(BOOL)shouldFade;
-(BOOL)isBehaviorReversed;
-(long long)showcaseBehavior;
-(BOOL)shouldCollapse;
-(void)setReversedBehavior:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 ;
-(void)tv_setShowcaseFactor:(double)arg1 ;
@end

