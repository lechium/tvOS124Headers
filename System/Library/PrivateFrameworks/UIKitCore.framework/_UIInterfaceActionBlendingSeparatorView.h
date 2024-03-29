/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIBlendingHighlightView.h>
#import <UIKit/UIInterfaceActionVisualSeparatorDisplaying.h>
#import <UIKit/UIInterfaceActionVisualSectionSeparatorDisplaying.h>

@class _UIInterfaceActionSeparatorConstraintController, NSString;

@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {

	_UIInterfaceActionSeparatorConstraintController* _separatorViewConstraints;

}

@property (nonatomic,retain,readonly) _UIInterfaceActionSeparatorConstraintController * separatorViewConstraints;              //@synthesize separatorViewConstraints=_separatorViewConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double constantAxisDimension; 
+(id)colorBurnColor;
+(id)plusDColor;
-(id)init;
-(void)setConstantAxisDimension:(double)arg1 ;
-(void)updateConstraints;
-(void)setConstantSizedAxis:(long long)arg1 ;
-(id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3 ;
-(double)constantAxisDimension;
-(_UIInterfaceActionSeparatorConstraintController *)separatorViewConstraints;
@end

