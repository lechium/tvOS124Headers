/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class __UIAtomLayoutView;

@interface __UIAtomAttachment : NSTextAttachment {

	__UIAtomLayoutView* _atomView;
	id _representedObject;

}

@property (nonatomic,readonly) __UIAtomLayoutView * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,readonly) id representedObject;                       //@synthesize representedObject=_representedObject - In the implementation block
+(id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(id)representedObject;
-(__UIAtomLayoutView *)atomView;
-(id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
@end

