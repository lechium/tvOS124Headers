/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSArray, NSString;

@interface _TVInfoCellView : UIView <TVAppTemplateImpressionable> {

	BOOL _headerOnLeading;
	UIView* _headerContentView;
	NSArray* _dataViews;
	double _headerWidth;
	double _headerMaxWidth;
	double _headerMinWidth;
	double _normalizedHeaderWidth;
	UIEdgeInsets _headerMargin;

}

@property (nonatomic,retain) UIView * headerContentView;                //@synthesize headerContentView=_headerContentView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                       //@synthesize dataViews=_dataViews - In the implementation block
@property (assign,nonatomic) BOOL headerOnLeading;                      //@synthesize headerOnLeading=_headerOnLeading - In the implementation block
@property (assign,nonatomic) double headerWidth;                        //@synthesize headerWidth=_headerWidth - In the implementation block
@property (assign,nonatomic) double headerMaxWidth;                     //@synthesize headerMaxWidth=_headerMaxWidth - In the implementation block
@property (assign,nonatomic) double headerMinWidth;                     //@synthesize headerMinWidth=_headerMinWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargin;                 //@synthesize headerMargin=_headerMargin - In the implementation block
@property (assign,nonatomic) double normalizedHeaderWidth;              //@synthesize normalizedHeaderWidth=_normalizedHeaderWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoCellViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(UIView *)headerContentView;
-(void)setHeaderContentView:(UIView *)arg1 ;
-(void)setHeaderWidth:(double)arg1 ;
-(void)setHeaderMaxWidth:(double)arg1 ;
-(void)setHeaderMinWidth:(double)arg1 ;
-(void)setHeaderMargin:(UIEdgeInsets)arg1 ;
-(void)setHeaderOnLeading:(BOOL)arg1 ;
-(double)headerWidth;
-(double)headerMaxWidth;
-(double)headerMinWidth;
-(double)normalizedHeaderWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 withHeaderWidth:(double)arg2 ;
-(double)minimumHeaderWidth;
-(BOOL)headerOnLeading;
-(UIEdgeInsets)headerMargin;
-(void)setNormalizedHeaderWidth:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(NSArray *)dataViews;
-(void)setDataViews:(NSArray *)arg1 ;
@end

