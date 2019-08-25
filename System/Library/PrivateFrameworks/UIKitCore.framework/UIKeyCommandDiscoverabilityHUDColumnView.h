/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol UIKeyCommandDiscoverabilityHUDColumnViewDelegate;
@class UIKeyCommandDiscoverabilityHUDVisualStyle, UIFont, UILayoutGuide, NSArray;

@interface UIKeyCommandDiscoverabilityHUDColumnView : UIView {

	id<UIKeyCommandDiscoverabilityHUDColumnViewDelegate> _delegate;
	UIKeyCommandDiscoverabilityHUDVisualStyle* _visualStyle;
	UIFont* _baseFont;
	UILayoutGuide* _descriptionColumnLayoutGuide;
	UILayoutGuide* _modifiersColumnLayoutGuide;
	UILayoutGuide* _inputStringColumnLayoutGuide;
	NSArray* _descriptionViews;
	NSArray* _modifierViews;
	NSArray* _inputStringViews;
	NSArray* _constraints;
	double _fontScaleFactor;

}

@property (assign,nonatomic) double fontScaleFactor;              //@synthesize fontScaleFactor=_fontScaleFactor - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setKeyCommands:(id)arg1 withVisualStyle:(id)arg2 ;
-(void)setFontScaleFactor:(double)arg1 ;
-(double)fontScaleFactor;
@end

