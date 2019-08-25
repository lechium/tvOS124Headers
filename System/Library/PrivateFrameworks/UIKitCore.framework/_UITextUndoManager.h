/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager {

	UITextInputController* _inputController;

}

@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(void)removeAllActions;
-(UITextInputController *)inputController;
-(void)setInputController:(UITextInputController *)arg1 ;
@end

