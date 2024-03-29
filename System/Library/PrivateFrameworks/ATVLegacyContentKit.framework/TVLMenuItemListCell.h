/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVTableViewCell.h>
#import <libobjc.A.dylib/TVLMenuItemCell.h>

@class TVLMenuItemView, NSString;

@interface TVLMenuItemListCell : TVTableViewCell <TVLMenuItemCell> {

	TVLMenuItemView* _menuItemView;

}

@property (readonly) TVLMenuItemView * menuItemView;                //@synthesize menuItemView=_menuItemView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithMenuItemElement:(id)arg1 ;
-(TVLMenuItemView *)menuItemView;
-(id)labelForMarquee;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

