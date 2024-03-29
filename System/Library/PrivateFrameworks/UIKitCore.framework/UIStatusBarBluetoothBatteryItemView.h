/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage;

@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _accessibilityCachedHUDCapacity;
	UIImage* _accessibilityCachedHUDImage;

}
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(double)_normalizedCapacity;
-(UIEdgeInsets)_accessibilityHUDBatteryInsidesInsets;
-(double)extraLeftPadding;
@end

