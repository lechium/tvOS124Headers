/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NLLexiconCompletion : NSObject {

	unsigned _tokenID;
	double _score;

}
-(double)score;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 ;
-(unsigned)tokenID;
-(id)description;
@end
