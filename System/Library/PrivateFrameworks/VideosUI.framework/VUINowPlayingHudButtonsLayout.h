/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUIButtonLayout;

@interface VUINowPlayingHudButtonsLayout : TVViewLayout {

	double _verticalSpacing;
	VUIButtonLayout* _buttonLayout;

}

@property (nonatomic,readonly) double verticalSpacing;                      //@synthesize verticalSpacing=_verticalSpacing - In the implementation block
@property (nonatomic,readonly) VUIButtonLayout * buttonLayout;              //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(double)verticalSpacing;
-(VUIButtonLayout *)buttonLayout;
@end
