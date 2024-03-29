/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSHolidayCalendarEventDateRuleDelegate;
@class NSString, NSArray, CLSHolidayCalendarEventRuleRequiredTraits;

@interface CLSHolidayCalendarEventRule : NSObject {

	NSString* _uuid;
	NSString* _name;
	NSArray* _dateRules;
	CLSHolidayCalendarEventRuleRequiredTraits* _requiredTraits;
	id<CLSHolidayCalendarEventDateRuleDelegate> _dateRuleDelegate;
	NSString* _localizedName;
	unsigned long long _category;

}

@property (nonatomic,readonly) NSString * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) CLSHolidayCalendarEventRuleRequiredTraits * requiredTraits;                     //@synthesize requiredTraits=_requiredTraits - In the implementation block
@property (nonatomic,readonly) NSArray * dateRules;                                                            //@synthesize dateRules=_dateRules - In the implementation block
@property (assign,nonatomic,__weak) id<CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;              //@synthesize dateRuleDelegate=_dateRuleDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isCelebration; 
@property (nonatomic,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                                       //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL allowSceneClassificationBasedEvaluation; 
+(id)localizedNameForName:(id)arg1 ;
-(id)initWithEventDescription:(id)arg1 ;
-(BOOL)evaluateOnlyTraits:(id)arg1 ;
-(BOOL)_isMatchingOnlyLocalDate:(id)arg1 ;
-(id)_dateRuleForYear:(long long)arg1 ;
-(void)setDateRuleDelegate:(id<CLSHolidayCalendarEventDateRuleDelegate>)arg1 ;
-(NSArray *)dateRules;
-(id<CLSHolidayCalendarEventDateRuleDelegate>)dateRuleDelegate;
-(CLSHolidayCalendarEventRuleRequiredTraits *)requiredTraits;
-(id)localDateByEvaluatingRuleForYear:(long long)arg1 ;
-(BOOL)isCelebration;
-(BOOL)allowSceneClassificationBasedEvaluation;
-(BOOL)evaluateWithLocalDate:(id)arg1 traits:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)uuid;
-(NSString *)localizedName;
-(unsigned long long)category;
@end

