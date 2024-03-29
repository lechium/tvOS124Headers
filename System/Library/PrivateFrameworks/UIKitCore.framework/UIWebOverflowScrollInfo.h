/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class DOMNode;

@interface UIWebOverflowScrollInfo : NSObject {

	BOOL _isUserScroll;
	DOMNode* _node;
	CGPoint _offset;

}

@property (nonatomic,retain) DOMNode * node;                 //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint offset;                 //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL isUserScroll;              //@synthesize isUserScroll=_isUserScroll - In the implementation block
-(void)dealloc;
-(CGPoint)offset;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(id)initWithNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)coalesceScrollForNode:(id)arg1 offset:(CGPoint)arg2 isUserScroll:(BOOL)arg3 ;
-(BOOL)isUserScroll;
-(void)setIsUserScroll:(BOOL)arg1 ;
@end

