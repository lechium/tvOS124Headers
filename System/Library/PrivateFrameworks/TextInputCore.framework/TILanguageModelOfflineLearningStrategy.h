/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TILanguageModelOfflineLearningTask;


@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property (readonly) TILanguageModelOfflineLearningTask * learningTask; 
@required
-(TILanguageModelOfflineLearningTask *)learningTask;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
-(id)filterMessages:(id)arg1;
-(void)didFinishLearning;

@end

