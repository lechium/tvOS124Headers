/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray, UIView;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	UIView* projectionView;
	CGRect* relativeViewFrames;

}
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(id)arg3 ;
-(void)_computeRelativeViewFrames;
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(void)invalidateView:(id)arg1 ;
-(void)dealloc;
@end

