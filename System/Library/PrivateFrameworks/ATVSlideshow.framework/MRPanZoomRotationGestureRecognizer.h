/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MRGestureRecognizer.h>

@class NSString;

@interface MRPanZoomRotationGestureRecognizer : MRGestureRecognizer {

	NSString* _type;
	double _factor;
	int _direction;
	BOOL _isMaster;

}

@property (readonly) int direction;              //@synthesize direction=_direction - In the implementation block
-(void)_postProcess;
-(void)_addSpecificObjectToAction:(id)arg1 ;
-(void)touchEnded:(id)arg1 ;
-(id)initWithRenderer:(id)arg1 startAction:(id)arg2 direction:(int)arg3 andSender:(id)arg4 ;
-(id)initWithRenderer:(id)arg1 masterAction:(id)arg2 direction:(int)arg3 andSender:(id)arg4 ;
-(void)dealloc;
-(int)direction;
-(void)touchMoved:(id)arg1 ;
@end

