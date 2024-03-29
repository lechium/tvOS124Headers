/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNObserver.h>

@class CNVirtualScheduler, NSMutableArray, CNObservableContractEnforcement, NSArray, NSString;

@interface CNTestableObserver : NSObject <CNObserver> {

	CNVirtualScheduler* _scheduler;
	NSMutableArray* _results;
	CNObservableContractEnforcement* _enforcement;

}

@property (readonly) NSArray * results;                             //@synthesize results=_results - In the implementation block
@property (readonly) NSArray * resultValues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithScheduler:(id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
-(NSArray *)resultValues;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
-(NSArray *)results;
@end

