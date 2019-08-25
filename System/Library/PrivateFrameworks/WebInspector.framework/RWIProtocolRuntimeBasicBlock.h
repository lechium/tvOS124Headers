/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (assign,nonatomic) int startOffset; 
@property (assign,nonatomic) int endOffset; 
@property (assign,nonatomic) BOOL hasExecuted; 
@property (assign,nonatomic) int executionCount; 
-(void)setEndOffset:(int)arg1 ;
-(void)setHasExecuted:(BOOL)arg1 ;
-(void)setExecutionCount:(int)arg1 ;
-(id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(BOOL)arg3 executionCount:(int)arg4 ;
-(BOOL)hasExecuted;
-(int)executionCount;
-(int)startOffset;
-(int)endOffset;
-(void)setStartOffset:(int)arg1 ;
@end

