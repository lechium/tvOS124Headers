/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel;

@interface UIKBRecentInputCell : UICollectionViewCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
+(id)textColorForRenderConfig:(id)arg1 isSelected:(BOOL)arg2 ;
+(id)titleAttributesForRenderConfig:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isFocused;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setInputText:(id)arg1 ;
@end

