/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIView;

@interface TVPTableViewSectionDividerView : UITableViewHeaderFooterView {

	UIView* _lineView;
	double _topPadding;
	long long _dividerType;

}

@property (assign,nonatomic) long long dividerType;              //@synthesize dividerType=_dividerType - In the implementation block
+(double)heightForDividerType:(long long)arg1 ;
-(void)_updatePadding;
-(void)setDividerType:(long long)arg1 ;
-(long long)dividerType;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
