/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDInteractionRanking.h>

@class NSDate, NSArray, NSString, NSSet;

@interface _CDGenericInteractionRanker : NSObject <_CDInteractionRanking> {

	BOOL _requireAllSeedContacts;
	NSDate* _referenceDate;
	NSArray* _seedContacts;
	NSString* _referenceLocationUUID;
	NSSet* _referenceKeywords;
	NSSet* _allowedIdentifiers;
	NSSet* _allowedPersonIds;
	NSSet* _allowedPersonIdType;
	NSString* _contactPrefix;
	double _timeHalfLife;
	double _timeOfDayHalfLife;
	double _timeOfWeekHalfLife;
	double _timeWeight;
	double _timeOfDayWeight;
	double _timeOfWeekWeight;
	double _c;
	double _sameWeekPeriodWeight;
	double _diffWeekPeriodWeight;
	double _outgoingWeight;
	double _socialWeight;
	double _locationWeight;
	double _keywordWeight;
	double _contactNameKeywordMatchWeight;
	unsigned long long _rankAggregationMethod;

}

@property (retain) NSDate * referenceDate;                                          //@synthesize referenceDate=_referenceDate - In the implementation block
@property (retain) NSArray * seedContacts;                                          //@synthesize seedContacts=_seedContacts - In the implementation block
@property (retain) NSString * referenceLocationUUID;                                //@synthesize referenceLocationUUID=_referenceLocationUUID - In the implementation block
@property (retain) NSSet * referenceKeywords;                                       //@synthesize referenceKeywords=_referenceKeywords - In the implementation block
@property (retain) NSSet * allowedIdentifiers;                                      //@synthesize allowedIdentifiers=_allowedIdentifiers - In the implementation block
@property (retain) NSSet * allowedPersonIds;                                        //@synthesize allowedPersonIds=_allowedPersonIds - In the implementation block
@property (retain) NSSet * allowedPersonIdType;                                     //@synthesize allowedPersonIdType=_allowedPersonIdType - In the implementation block
@property (retain) NSString * contactPrefix;                                        //@synthesize contactPrefix=_contactPrefix - In the implementation block
@property (assign) double timeHalfLife;                                             //@synthesize timeHalfLife=_timeHalfLife - In the implementation block
@property (assign) double timeOfDayHalfLife;                                        //@synthesize timeOfDayHalfLife=_timeOfDayHalfLife - In the implementation block
@property (assign) double timeOfWeekHalfLife;                                       //@synthesize timeOfWeekHalfLife=_timeOfWeekHalfLife - In the implementation block
@property (assign) double timeWeight;                                               //@synthesize timeWeight=_timeWeight - In the implementation block
@property (assign) double timeOfDayWeight;                                          //@synthesize timeOfDayWeight=_timeOfDayWeight - In the implementation block
@property (assign) double timeOfWeekWeight;                                         //@synthesize timeOfWeekWeight=_timeOfWeekWeight - In the implementation block
@property (c) double c;                                                             //@synthesize c=_c - In the implementation block
@property (assign) double sameWeekPeriodWeight;                                     //@synthesize sameWeekPeriodWeight=_sameWeekPeriodWeight - In the implementation block
@property (assign) double diffWeekPeriodWeight;                                     //@synthesize diffWeekPeriodWeight=_diffWeekPeriodWeight - In the implementation block
@property (assign) double outgoingWeight;                                           //@synthesize outgoingWeight=_outgoingWeight - In the implementation block
@property (assign) double socialWeight;                                             //@synthesize socialWeight=_socialWeight - In the implementation block
@property (assign) BOOL requireAllSeedContacts;                                     //@synthesize requireAllSeedContacts=_requireAllSeedContacts - In the implementation block
@property (assign) double locationWeight;                                           //@synthesize locationWeight=_locationWeight - In the implementation block
@property (assign) double keywordWeight;                                            //@synthesize keywordWeight=_keywordWeight - In the implementation block
@property (assign) double contactNameKeywordMatchWeight;                            //@synthesize contactNameKeywordMatchWeight=_contactNameKeywordMatchWeight - In the implementation block
@property (assign,nonatomic) unsigned long long rankAggregationMethod;              //@synthesize rankAggregationMethod=_rankAggregationMethod - In the implementation block
+(BOOL)isDateInWeekend:(id)arg1 ;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(void)setContactPrefix:(NSString *)arg1 ;
-(id)rankInteraction:(id)arg1 ;
-(BOOL)contactIsAllowed:(id)arg1 ;
-(BOOL)canRankContacts;
-(double)rankContact:(id)arg1 ;
-(unsigned long long)rankAggregationMethod;
-(void)setRankAggregationMethod:(unsigned long long)arg1 ;
-(NSArray *)seedContacts;
-(void)setSeedContacts:(NSArray *)arg1 ;
-(NSString *)referenceLocationUUID;
-(void)setReferenceLocationUUID:(NSString *)arg1 ;
-(NSSet *)allowedIdentifiers;
-(void)setAllowedIdentifiers:(NSSet *)arg1 ;
-(NSSet *)allowedPersonIds;
-(void)setAllowedPersonIds:(NSSet *)arg1 ;
-(NSSet *)allowedPersonIdType;
-(void)setAllowedPersonIdType:(NSSet *)arg1 ;
-(NSString *)contactPrefix;
-(double)timeHalfLife;
-(void)setTimeHalfLife:(double)arg1 ;
-(double)timeOfDayHalfLife;
-(void)setTimeOfDayHalfLife:(double)arg1 ;
-(double)timeOfWeekHalfLife;
-(void)setTimeOfWeekHalfLife:(double)arg1 ;
-(double)timeWeight;
-(void)setTimeWeight:(double)arg1 ;
-(double)timeOfDayWeight;
-(void)setTimeOfDayWeight:(double)arg1 ;
-(double)timeOfWeekWeight;
-(void)setTimeOfWeekWeight:(double)arg1 ;
-(double)c;
-(void)setC:(double)arg1 ;
-(double)sameWeekPeriodWeight;
-(void)setSameWeekPeriodWeight:(double)arg1 ;
-(double)diffWeekPeriodWeight;
-(void)setDiffWeekPeriodWeight:(double)arg1 ;
-(double)outgoingWeight;
-(void)setOutgoingWeight:(double)arg1 ;
-(double)socialWeight;
-(void)setSocialWeight:(double)arg1 ;
-(BOOL)requireAllSeedContacts;
-(void)setRequireAllSeedContacts:(BOOL)arg1 ;
-(double)locationWeight;
-(void)setLocationWeight:(double)arg1 ;
-(double)keywordWeight;
-(void)setKeywordWeight:(double)arg1 ;
-(double)contactNameKeywordMatchWeight;
-(void)setContactNameKeywordMatchWeight:(double)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceKeywords:(NSSet *)arg1 ;
-(NSSet *)referenceKeywords;
-(id)init;
@end

