/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@interface UIKeyboardCandidateLogButton : UIButton {

	SCD_Struct_UI58 _visualStyling;

}

@property (assign,nonatomic) SCD_Struct_UI58 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
-(SCD_Struct_UI58)visualStyling;
-(void)setVisualStyling:(SCD_Struct_UI58)arg1 ;
-(void)log;
-(id)initWithFrame:(CGRect)arg1 visualStyling:(SCD_Struct_UI58)arg2 ;
-(void)updateLabelColor;
@end
