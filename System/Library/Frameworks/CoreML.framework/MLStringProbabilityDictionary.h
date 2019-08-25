/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLProbabilityDictionary.h>

@interface MLStringProbabilityDictionary : MLProbabilityDictionary {

	map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long> > >* _mapStrLabelToIndex;

}

@property (assign,nonatomic) map<std::__1::basic_string<char> mapStrLabelToIndex;              //@synthesize mapStrLabelToIndex=_mapStrLabelToIndex - In the implementation block
+(id)probabilityDictionaryForStringLabels:(id)arg1 ;
-(id)initWithStrLabels:(id)arg1 ;
-(map<std::__1::basic_string<char>)mapStrLabelToIndex;
-(void)setMapStrLabelToIndex:(map<std::__1::basic_string<char>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)copy;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
@end

