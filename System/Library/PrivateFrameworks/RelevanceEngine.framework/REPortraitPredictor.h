/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@class NSMutableDictionary;

@interface REPortraitPredictor : REPredictor {

	NSMutableDictionary* _namedEntityScores;

}
+(double)updateInterval;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(float)userAffinityToContent:(id)arg1 ;
-(void)_loadStoreIfNeeded;
-(id)init;
-(void)dealloc;
-(void)update;
@end

