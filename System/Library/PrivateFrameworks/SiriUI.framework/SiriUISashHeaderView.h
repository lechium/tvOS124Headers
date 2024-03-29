/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, NSString, SiriUISnippetViewController;

@interface SiriUISashHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	NSString* _titleText;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(id)elementKind;
+(double)defaultHeight;
+(id)reuseIdentifier;
-(NSString *)titleText;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(NSString *)arg1 ;
@end

