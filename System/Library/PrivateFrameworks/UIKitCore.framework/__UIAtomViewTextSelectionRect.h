/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@interface __UIAtomViewTextSelectionRect : UITextSelectionRect {

	BOOL containsStart;
	BOOL containsEnd;
	BOOL isVertical;
	long long writingDirection;
	CGRect rect;

}

@property (assign,nonatomic) CGRect rect; 
@property (assign,nonatomic) long long writingDirection; 
@property (assign,nonatomic) BOOL containsStart; 
@property (assign,nonatomic) BOOL containsEnd; 
@property (assign,nonatomic) BOOL isVertical; 
-(CGRect)rect;
-(BOOL)isVertical;
-(BOOL)containsStart;
-(long long)writingDirection;
-(BOOL)containsEnd;
-(void)setRect:(CGRect)arg1 ;
-(void)setWritingDirection:(long long)arg1 ;
-(void)setContainsStart:(BOOL)arg1 ;
-(void)setContainsEnd:(BOOL)arg1 ;
-(void)setIsVertical:(BOOL)arg1 ;
@end

