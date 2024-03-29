/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNVoiceEvent : NSObject {

	unsigned long long _options;
	NSString* _textToSpeak;
	unsigned long long _shortPromptType;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) unsigned long long options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * textToSpeak;                     //@synthesize textToSpeak=_textToSpeak - In the implementation block
@property (nonatomic,readonly) unsigned long long shortPromptType;              //@synthesize shortPromptType=_shortPromptType - In the implementation block
@property (nonatomic,copy,readonly) id completion;                              //@synthesize completion=_completion - In the implementation block
+(BOOL)isValidShortPromptType:(unsigned long long)arg1 ;
+(id)eventWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithText:(id)arg1 fallbackPrompt:(unsigned long long)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)textToSpeak;
-(unsigned long long)shortPromptType;
-(id)initWithPrompt:(unsigned long long)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)description;
-(id)completion;
-(unsigned long long)options;
@end

