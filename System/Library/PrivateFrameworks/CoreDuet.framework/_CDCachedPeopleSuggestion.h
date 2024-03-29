/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings, NSArray;

@interface _CDCachedPeopleSuggestion : NSObject {

	NSDate* _date;
	_CDPeopleSuggesterContext* _context;
	_CDPeopleSuggesterSettings* _settings;
	NSArray* _suggestions;

}

@property (retain) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (retain) _CDPeopleSuggesterContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) _CDPeopleSuggesterSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) NSArray * suggestions;                              //@synthesize suggestions=_suggestions - In the implementation block
-(NSArray *)suggestions;
-(BOOL)isValidForContext:(id)arg1 settings:(id)arg2 timeoutSeconds:(double)arg3 ;
-(BOOL)isValidForContext:(id)arg1 ;
-(BOOL)isValidForSettings:(id)arg1 ;
-(void)setContext:(_CDPeopleSuggesterContext *)arg1 ;
-(_CDPeopleSuggesterContext *)context;
-(NSDate *)date;
-(_CDPeopleSuggesterSettings *)settings;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSettings:(_CDPeopleSuggesterSettings *)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
@end

