/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIRemoveControl, UIControl, UIView;

@interface _UITableViewCellOldEditingData : NSObject {

	UIRemoveControl* _removeControl;
	UIControl* _grabber;
	UIView* _separator;

}

@property (nonatomic,retain) UIControl * reorderControl;              //@synthesize grabber=_grabber - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                  //@synthesize separator=_separator - In the implementation block
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(BOOL)dataRequired;
-(UIControl *)reorderControl;
-(void)setReorderControl:(UIControl *)arg1 ;
@end

