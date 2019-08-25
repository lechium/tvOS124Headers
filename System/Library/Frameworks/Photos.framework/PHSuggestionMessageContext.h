/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDateInterval, NSMutableDictionary;

@interface PHSuggestionMessageContext : NSObject {

	NSArray* _messages;
	NSDateInterval* _dateInterval;
	unsigned long long _numberOfParticipants;
	NSArray* _cnParticipants;
	NSArray* _phParticipants;
	NSMutableDictionary* _suggestionMatchingResultsBySuggestionIdentifier;
	NSArray* _resolvedParticipants;
	NSArray* _messageTokens;

}

@property (nonatomic,readonly) NSArray * cnParticipants;                                                           //@synthesize cnParticipants=_cnParticipants - In the implementation block
@property (nonatomic,readonly) NSArray * phParticipants;                                                           //@synthesize phParticipants=_phParticipants - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * suggestionMatchingResultsBySuggestionIdentifier;              //@synthesize suggestionMatchingResultsBySuggestionIdentifier=_suggestionMatchingResultsBySuggestionIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * resolvedParticipants;                                                       //@synthesize resolvedParticipants=_resolvedParticipants - In the implementation block
@property (nonatomic,retain) NSArray * messageTokens;                                                              //@synthesize messageTokens=_messageTokens - In the implementation block
@property (nonatomic,readonly) NSArray * messages;                                                                 //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                                                      //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfParticipants;                                            //@synthesize numberOfParticipants=_numberOfParticipants - In the implementation block
-(NSDateInterval *)dateInterval;
-(id)detailedDescription;
-(id)initWithMessages:(id)arg1 ;
-(id)_suggestionsMatchingType:(long long)arg1 ;
-(NSArray *)resolvedParticipants;
-(NSArray *)messageTokens;
-(id)matchingResultWithSuggestion:(id)arg1 ;
-(NSMutableDictionary *)suggestionMatchingResultsBySuggestionIdentifier;
-(id)_mostRecentSuggestionFromSuggestions:(id)arg1 ;
-(id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2 ;
-(void)setCnParticipants:(NSArray *)arg1 ;
-(void)setPhParticipants:(NSArray *)arg1 ;
-(NSArray *)cnParticipants;
-(NSArray *)phParticipants;
-(void)setResolvedParticipants:(NSArray *)arg1 ;
-(void)setMessageTokens:(NSArray *)arg1 ;
-(unsigned long long)numberOfParticipants;
-(NSArray *)messages;
-(id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2 ;
-(void)matchWithSuggestions:(id)arg1 ;
-(id)confidentMatchSuggestionUsingStrategy:(unsigned long long)arg1 ;
-(id)description;
@end

