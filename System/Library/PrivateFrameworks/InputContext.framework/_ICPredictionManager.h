/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICPredictionManaging.h>

@class NSArray, _ICResultCache, NSString;

@interface _ICPredictionManager : NSObject <_ICPredictionManaging> {

	NSArray* _predictionSources;
	_ICResultCache* _cache;

}

@property (retain) _ICResultCache * cache;                          //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPredictionSources:(id)arg1 ;
-(void)predictedItemSelected:(id)arg1 ;
-(id)searchForMeCardRegions;
-(id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id*)arg4 ;
-(id)workLocation;
-(void)hibernate;
-(void)warmUp;
-(id)lastCachedResultWithInitialCharacters:(id)arg1 ;
-(id)searchForMeCardEmailAddresses;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7 ;
-(void)reset;
-(void)setCache:(_ICResultCache *)arg1 ;
-(_ICResultCache *)cache;
@end
