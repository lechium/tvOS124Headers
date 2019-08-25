/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreNameParser/CoreNameParser-Structs.h>
@class NPNameComponentsData, NPHMMClassifier;

@interface NPNameParser : NSObject {

	double _confidenceThreshold;
	NPNameComponentsData* _nameComponentsData;
	NPHMMClassifier* _classifier;

}

@property (retain) NPHMMClassifier * classifier;              //@synthesize classifier=_classifier - In the implementation block
-(id)personNameComponentsFromString:(id)arg1 ;
-(NPHMMClassifier *)classifier;
-(void)setClassifier:(NPHMMClassifier *)arg1 ;
-(id)normalizeFullname:(id)arg1 ;
-(unsigned long long)namingTraditionForName:(id)arg1 ;
-(id)parseChineseName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseJapaneseName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseKoreanName:(id)arg1 normalize:(BOOL)arg2 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg1 normalize:(BOOL)arg2 score:(double*)arg3 ;
-(BOOL)isPrefix:(id)arg1 ;
-(BOOL)isSuffix:(id)arg1 ;
-(id)personNameCompomentsFromPrefix:(id)arg1 suffix:(id)arg2 givenNames:(id)arg3 middleNames:(id)arg4 familyNames:(id)arg5 ;
-(id)normalizedAffix:(id)arg1 ;
-(id)parseLatinName:(id)arg1 score:(double*)arg2 ;
-(id)parseFullnameWithDefaultHMMClassifier:(id)arg1 ;
-(id)parseChineseName:(id)arg1 ;
-(id)parseJapaneseName:(id)arg1 ;
-(id)parseKoreanName:(id)arg1 ;
-(CFBurstTrieRef)sharedNameFrequencyTrieRef;
-(id)init;
-(void)dealloc;
@end

