/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)defaultScreen;
-(double)contentCornerRadius;
-(UIEdgeInsets)contentMargin;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(CGSize)minimumActionContentSize;
-(BOOL)selectByPressGestureRequired;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)_preferredActionFont;
-(id)_regularActionFont;
-(id)_normalActionTitleLabelColorForViewState:(id)arg1 ;
-(id)_highlightedActionTitleLabelColorForViewState:(id)arg1 ;
@end

