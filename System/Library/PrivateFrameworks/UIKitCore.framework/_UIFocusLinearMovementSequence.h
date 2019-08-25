/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject {

	BOOL _looping;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSArray * items;                       //@synthesize items=_items - In the implementation block
@property (getter=isLooping,nonatomic,readonly) BOOL looping;              //@synthesize looping=_looping - In the implementation block
+(id)sequenceWithItems:(id)arg1 loops:(BOOL)arg2 ;
-(id)init;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 loops:(BOOL)arg2 ;
-(BOOL)isLooping;
@end

