/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGSharingSuggestionSource : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * details; 
@property (nonatomic,readonly) double weight; 
-(id)sourceDescription;
-(NSString *)details;
-(BOOL)canRunWithOptions:(id)arg1 ;
-(BOOL)canRunWithInput:(id)arg1 ;
-(id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2 ;
-(id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2 ;
-(id)suggestionResultWithPerson:(id)arg1 ;
-(id)suggestionResultsWithPersons:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(double)weight;
@end
