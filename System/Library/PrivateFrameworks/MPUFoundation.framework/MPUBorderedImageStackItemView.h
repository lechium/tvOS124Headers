/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUImageStackItemView.h>

@class UIImageView, MPUBorderConfiguration, MPUBorderDrawingCache;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {

	UIImageView* _borderImageView;
	MPUBorderConfiguration* _borderConfiguration;
	MPUBorderDrawingCache* _borderDrawingCache;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (nonatomic,retain) MPUBorderDrawingCache * borderDrawingCache;              //@synthesize borderDrawingCache=_borderDrawingCache - In the implementation block
-(void)_updateBorderImageView;
-(void)_borderDrawingCacheWasInvalidated:(id)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(void)setBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(MPUBorderConfiguration *)borderConfiguration;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

