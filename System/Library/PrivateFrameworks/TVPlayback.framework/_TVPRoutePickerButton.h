/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPRoundButton.h>
#import <libobjc.A.dylib/AVRoutePickerViewDelegate.h>

@class AVRoutePickerView, NSString;

@interface _TVPRoutePickerButton : TVPRoundButton <AVRoutePickerViewDelegate> {

	AVRoutePickerView* _avRoutePickerView;

}

@property (nonatomic,retain) AVRoutePickerView * avRoutePickerView;              //@synthesize avRoutePickerView=_avRoutePickerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVRoutePickerView *)avRoutePickerView;
-(void)setAvRoutePickerView:(AVRoutePickerView *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
@end

