/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPeriodicScheduler.h>

@protocol _CDPeriodicScheduler <NSObject>
@required
-(void)registerJob:(id)arg1;
-(void)unregisterJob:(id)arg1;

@end


@class NSString;

@interface _CDPeriodicScheduler : NSObject <_CDPeriodicScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)registerJob:(id)arg1 ;
-(void)unregisterJob:(id)arg1 ;
-(void)updateExecutionCriteriaOnJob:(id)arg1 ;
@end

