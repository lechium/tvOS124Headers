/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAccessibilityCustomAction.h>

@interface UIAccessibilityBlockCustomAction : UIAccessibilityCustomAction {

	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(id)initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_handleCustomAction:(id)arg1 ;
-(id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end
