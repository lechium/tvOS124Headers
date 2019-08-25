/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKPresentationViewAllGestureRecognizer, NSString;

@interface OKPresentationViewProxy : OFUIView <UIGestureRecognizerDelegate> {

	OKPresentationViewAllGestureRecognizer* _allGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentationViewController;
-(void)handleAllGesture:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)commonInit;
@end
