/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSNovDetector : NSObject {

	void* _novDetect;

}
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(void)resetBest;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)getOptionValue:(id)arg1 ;
-(void)dealloc;
-(void)reset;
@end
