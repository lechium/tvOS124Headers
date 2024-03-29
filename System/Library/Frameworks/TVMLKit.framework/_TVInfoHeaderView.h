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

@class UIView, NSString;

@interface _TVInfoHeaderView : UIView <TVAppTemplateImpressionable> {

	UIView* _headerView;

}

@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)infoHeaderViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
@end

