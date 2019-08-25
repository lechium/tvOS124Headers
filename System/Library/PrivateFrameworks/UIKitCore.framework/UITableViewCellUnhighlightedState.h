/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface UITableViewCellUnhighlightedState : NSObject {

	BOOL _opaque;
	BOOL _highlighted;
	UIColor* _backgroundColor;

}

@property (assign) BOOL opaque;                            //@synthesize opaque=_opaque - In the implementation block
@property (assign) BOOL highlighted;                       //@synthesize highlighted=_highlighted - In the implementation block
@property (retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(UIColor *)backgroundColor;
-(BOOL)opaque;
@end

