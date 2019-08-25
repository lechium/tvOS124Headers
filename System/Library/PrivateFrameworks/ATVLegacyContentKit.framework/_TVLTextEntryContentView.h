/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel;

@interface _TVLTextEntryContentView : UIView {

	UIView* _textEntryView;
	UILabel* _footnoteLabel;

}

@property (nonatomic,retain) UIView * textEntryView;                 //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(UIView *)textEntryView;
-(UILabel *)footnoteLabel;
-(void)setTextEntryView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
