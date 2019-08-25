/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	SCD_Struct_UI20 _datePickerContentViewFlags;
	BOOL _isModern;
	UILabel* _titleLabel;
	double _titleLabelMaxX;
	long long _titleAlignment;
	_UIDatePickerMode* _mode;

}

@property (nonatomic,retain) _UIDatePickerMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelMaxX;                 //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) BOOL isAmPm; 
@property (assign,nonatomic) long long titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (assign,nonatomic) BOOL isModern;                         //@synthesize isModern=_isModern - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleAlignment:(long long)arg1 ;
-(long long)titleAlignment;
-(_UIDatePickerMode *)mode;
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(id)initWithMode:(id)arg1 ;
-(BOOL)_canBeReusedInPickerView;
-(BOOL)isAmPm;
-(void)setIsAmPm:(BOOL)arg1 ;
-(void)setTitleLabelMaxX:(double)arg1 ;
-(double)titleLabelMaxX;
-(BOOL)isModern;
-(void)setIsModern:(BOOL)arg1 ;
@end

