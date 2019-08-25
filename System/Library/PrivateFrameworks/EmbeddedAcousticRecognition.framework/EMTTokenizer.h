/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _EARFormatter, NSObject, NSLocale;

@interface EMTTokenizer : NSObject {

	_EARFormatter* _formatter;
	NSObject*<OS_dispatch_queue> _queue;
	NSLocale* _outputLocale;

}

@property (nonatomic,readonly) NSLocale * outputLocale;              //@synthesize outputLocale=_outputLocale - In the implementation block
-(id)format:(id)arg1 ;
-(id)initWithModelURL:(id)arg1 ;
-(id)format:(id)arg1 preToPostItnMap:(id)arg2 ;
-(NSLocale *)outputLocale;
@end

