/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLSystemSound, NSURL;

@interface TLAlertTone : NSObject {

	unsigned _actualSoundID;
	unsigned _previewSoundID;
	TLSystemSound* _actualSound;
	TLSystemSound* _previewSound;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                      //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) TLSystemSound * actualSound; 
@property (nonatomic,readonly) TLSystemSound * previewSound; 
-(id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned)arg2 previewSoundID:(unsigned)arg3 ;
-(TLSystemSound *)actualSound;
-(NSURL *)soundFileURL;
-(TLSystemSound *)previewSound;
@end
