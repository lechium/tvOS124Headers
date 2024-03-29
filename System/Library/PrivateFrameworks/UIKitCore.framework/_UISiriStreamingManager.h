/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CABehaviorDelegate.h>

@class UITextView, UIView, NSLayoutManager, NSTextStorage, NSTextContainer, NSMutableArray, NSArray, NSString;

@interface _UISiriStreamingManager : NSObject <CABehaviorDelegate> {

	UITextView* _textView;
	UIView* _siriItemView;
	NSLayoutManager* _streamingLayoutManager;
	NSTextStorage* _streamingTextStorage;
	NSTextContainer* _streamingTextContainer;
	NSMutableArray* _words;
	NSMutableArray* _wordTokens;
	NSArray* _wordsToSetAfterAnimations;
	unsigned long long _firstIndexToRemoveAfterLineChangeClearingAnimation;
	struct {
		unsigned isPerformingLineChangeClearingAnimation : 1;
		unsigned commitResultsAfterDynamicsFinish : 1;
		unsigned waitingForDynamicsBehaviorToStop : 1;
		unsigned didFinalize : 1;
		unsigned didCleanUp : 1;
	}  _ssmFlags;

}

@property (nonatomic,copy) NSArray * words;                                           //@synthesize words=_words - In the implementation block
@property (nonatomic,readonly) NSLayoutManager * streamingLayoutManager;              //@synthesize streamingLayoutManager=_streamingLayoutManager - In the implementation block
@property (nonatomic,readonly) NSTextContainer * streamingTextContainer;              //@synthesize streamingTextContainer=_streamingTextContainer - In the implementation block
@property (nonatomic,readonly) NSTextStorage * streamingTextStorage;                  //@synthesize streamingTextStorage=_streamingTextStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTextView:(id)arg1 ;
-(void)commitFinalResults;
-(void)setWords:(NSArray *)arg1 ;
-(void)_commitFinalResults;
-(void)animateText;
-(void)behaviorDidStop:(id)arg1 ;
-(void)ensureCleanedUp;
-(NSArray *)words;
-(NSLayoutManager *)streamingLayoutManager;
-(NSTextContainer *)streamingTextContainer;
-(NSTextStorage *)streamingTextStorage;
@end

