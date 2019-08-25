/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject, NSString, NSMutableArray, NSData;

@interface ReporterFilter : NSObject {

	NSObject*<OS_dispatch_source> _finalTimer;
	BOOL _timingInProgress;
	sym_filter* _transportFilters;
	BOOL _symptomFilterChanged;
	unsigned _reporterId;
	NSString* _reporterName;
	NSMutableArray* _symptomFilters;
	NSData* _filterMessage;

}

@property (nonatomic,readonly) unsigned reporterId;                          //@synthesize reporterId=_reporterId - In the implementation block
@property (nonatomic,readonly) NSString * reporterName;                      //@synthesize reporterName=_reporterName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * symptomFilters;              //@synthesize symptomFilters=_symptomFilters - In the implementation block
@property (assign,nonatomic) BOOL symptomFilterChanged;                      //@synthesize symptomFilterChanged=_symptomFilterChanged - In the implementation block
@property (nonatomic,readonly) NSData * filterMessage;                       //@synthesize filterMessage=_filterMessage - In the implementation block
+(id)filterForName:(id)arg1 id:(id)arg2 ;
+(void)enumerateReporterFiltersUsingBlock:(/*^block*/id)arg1 ;
+(id)filterForId:(unsigned)arg1 ;
+(void)initialize;
-(int)configureSymptomFilter:(id)arg1 ;
-(NSMutableArray *)symptomFilters;
-(BOOL)hasFinalTimer;
-(void)setFinalTimer:(long long)arg1 ;
-(void)updateTransportFilters;
-(void)pushTransportFilters;
-(void)pushFinalFilters;
-(void)setSymptomFilter:(id)arg1 ;
-(unsigned)reporterId;
-(NSString *)reporterName;
-(BOOL)symptomFilterChanged;
-(void)setSymptomFilterChanged:(BOOL)arg1 ;
-(NSData *)filterMessage;
-(id)init;
-(id)description;
@end

