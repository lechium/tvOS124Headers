/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REContentRanker;

@interface REMLSentimentAnalyzer : NSObject <NSCopying> {

	REContentRanker* _contentRanker;

}
-(id)sentimentForTokens:(id)arg1 ;
-(id)initWithContentRanker:(id)arg1 ;
-(id)sentimentForText:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
