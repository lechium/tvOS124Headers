/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
+(id)sharedAggregateDictionary;
-(void)significantTimeChanged;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)decrementKey:(id)arg1 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)clearDistributionKey:(id)arg1 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
-(BOOL)isEnabled;
-(int)commit;
-(void)incrementKey:(id)arg1 ;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
@end

