/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarTimeItem : _UIStatusBarItem {

	_UIStatusBarStringView* _timeView;
	_UIStatusBarStringView* _shortTimeView;
	_UIStatusBarStringView* _pillTimeView;
	_UIStatusBarStringView* _dateView;

}

@property (nonatomic,retain) _UIStatusBarStringView * timeView;                   //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * shortTimeView;              //@synthesize shortTimeView=_shortTimeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * pillTimeView;               //@synthesize pillTimeView=_pillTimeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dateView;                   //@synthesize dateView=_dateView - In the implementation block
+(id)pillTimeDisplayIdentifier;
+(id)timeDisplayIdentifier;
+(id)shortTimeDisplayIdentifier;
+(id)dateDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(_UIStatusBarStringView *)timeView;
-(_UIStatusBarStringView *)shortTimeView;
-(_UIStatusBarStringView *)pillTimeView;
-(_UIStatusBarStringView *)dateView;
-(void)setTimeView:(_UIStatusBarStringView *)arg1 ;
-(void)setShortTimeView:(_UIStatusBarStringView *)arg1 ;
-(void)setPillTimeView:(_UIStatusBarStringView *)arg1 ;
-(void)setDateView:(_UIStatusBarStringView *)arg1 ;
@end

