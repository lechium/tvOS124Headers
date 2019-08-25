/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@interface _UIDictationPrivacySheetController : UINavigationController {

	/*^block*/id _dismissHandler;

}

@property (copy) id dismissHandler;              //@synthesize dismissHandler=_dismissHandler - In the implementation block
+(id)controllerWithDismissHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dismiss;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(id)dismissHandler;
@end

