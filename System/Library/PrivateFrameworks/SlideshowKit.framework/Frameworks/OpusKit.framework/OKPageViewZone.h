/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusKit/OpusKit-Structs.h>
@class NSMutableSet;

@interface OKPageViewZone : NSObject {

	CGRect _frame;
	NSMutableSet* _widgetViews;

}

@property (nonatomic,readonly) CGRect frame;                                   //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * widgetViews;              //@synthesize widgetViews=_widgetViews - In the implementation block
-(NSMutableSet *)widgetViews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)frame;
@end
