/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIDebugLogReport : NSObject {

	unsigned long long _currentIndentLevel;
	/*^block*/id _fallbackMessagePrefixHandler;
	NSMutableArray* _statements;
	NSMutableArray* _prefixStack;

}

@property (getter=_statements,nonatomic,retain) NSMutableArray * statements;                //@synthesize statements=_statements - In the implementation block
@property (getter=_prefixStack,nonatomic,retain) NSMutableArray * prefixStack;              //@synthesize prefixStack=_prefixStack - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (assign,nonatomic) unsigned long long currentIndentLevel;                         //@synthesize currentIndentLevel=_currentIndentLevel - In the implementation block
@property (nonatomic,copy) id fallbackMessagePrefixHandler;                                 //@synthesize fallbackMessagePrefixHandler=_fallbackMessagePrefixHandler - In the implementation block
-(id)init;
-(void)incrementIndentLevelAndPushMessagePrefix:(id)arg1 ;
-(void)addMessageWithFormat:(id)arg1 ;
-(void)addMessage:(id)arg1 ;
-(void)decrementIndentLevelAndPopMessagePrefix;
-(void)pushMessagePrefix:(id)arg1 ;
-(void)popMessagePrefix;
-(void)incrementIndentLevel;
-(void)decrementIndentLevel;
-(void)addLineBreak;
-(void)resetIndentLevel;
-(id)_statements;
-(unsigned long long)currentIndentLevel;
-(id)_messagePrefixAtIndentLevel:(unsigned long long)arg1 ;
-(void)setCurrentIndentLevel:(unsigned long long)arg1 ;
-(id)_prefixStack;
-(id)fallbackMessagePrefixHandler;
-(unsigned long long)messageCount;
-(void)pushMessagePrefixHandler:(/*^block*/id)arg1 ;
-(void)clearAllMessagePrefixes;
-(void)setFallbackMessagePrefixHandler:(id)arg1 ;
-(void)setStatements:(NSMutableArray *)arg1 ;
-(void)setPrefixStack:(NSMutableArray *)arg1 ;
@end

