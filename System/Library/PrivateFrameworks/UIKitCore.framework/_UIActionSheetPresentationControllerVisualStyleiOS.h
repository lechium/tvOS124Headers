/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActionSheetPresentationControllerVisualStyle.h>

@class UIColor, UIActionSheetiOSDismissActionView, NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {

	UIActionSheetiOSDismissActionView* _dismissActionView;

}

@property (nonatomic,retain) UIActionSheetiOSDismissActionView * dismissActionView;              //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double dismissToContentSpacing; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
-(id)init;
-(UIEdgeInsets)contentInsetsForContainerView:(id)arg1 ;
-(double)cornerRadius;
-(UIActionSheetiOSDismissActionView *)dismissActionView;
-(void)setDismissActionView:(UIActionSheetiOSDismissActionView *)arg1 ;
-(UIColor *)dimmingViewColor;
-(double)dismissToContentSpacing;
@end

