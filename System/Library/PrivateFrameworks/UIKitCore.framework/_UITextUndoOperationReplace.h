/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSUndoTextOperation.h>

@class NSAttributedString;

@interface _UITextUndoOperationReplace : NSUndoTextOperation {

	NSRange _replacementRange;
	NSAttributedString* _attributedString;

}
-(void)undoRedo;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
@end

