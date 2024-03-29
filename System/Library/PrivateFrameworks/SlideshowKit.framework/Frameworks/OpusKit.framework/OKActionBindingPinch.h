/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OFUITrackingPinchGestureRecognizer, NSMutableDictionary, NSString;

@interface OKActionBindingPinch : OKActionBinding <UIGestureRecognizerDelegate> {

	OFUITrackingPinchGestureRecognizer* _pinchGestureRecognizer;
	CGPoint _startLocation;
	double _isRotating;
	double _startAngle;
	NSMutableDictionary* _actionContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned long long)arg2 ;
-(BOOL)respondsToAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(BOOL)ownsGestureRecognizer:(id)arg1 ;
-(void)performActionWithState:(unsigned long long)arg1 location:(CGPoint)arg2 touchCount:(unsigned long long)arg3 scale:(double)arg4 angle:(double)arg5 translation:(CGPoint)arg6 velocity:(double)arg7 context:(id)arg8 ;
-(id)init;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(void)handlePinch:(id)arg1 ;
@end

