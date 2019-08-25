/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString;

@interface CMKShutterIndicatorView : UIView {

	NSAttributedString* __indicatorText;

}

@property (nonatomic,readonly) NSAttributedString * _indicatorText;              //@synthesize _indicatorText=__indicatorText - In the implementation block
-(void)_commonCMKShutterIndicatorViewInitialization;
-(NSAttributedString *)_indicatorText;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
@end
