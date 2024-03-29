/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject {

	NSUserDefaults* _textInputDefaults;
	BOOL _textInputEnabled;
	BOOL _HTTForTextInputEnabled;
	BOOL _siriMiniIsEnabled;
	BOOL _streamingDictationIsEnabled;

}
+(id)sharedInstance;
-(BOOL)isTextInputEnabled;
-(BOOL)isHTTForTextInputEnabled;
-(BOOL)isSiriMiniEnabled;
-(BOOL)isStreamingDictationEnabled;
-(void)_updatePreferences;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

