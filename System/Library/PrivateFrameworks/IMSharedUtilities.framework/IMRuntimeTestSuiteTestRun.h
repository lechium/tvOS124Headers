/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMRuntimeTestRun.h>

@class NSMutableArray, NSArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {

	NSMutableArray* _testRuns;
	NSArray* _testRun;

}

@property (copy,readonly) NSArray * testRuns;              //@synthesize testRun=_testRun - In the implementation block
-(void)addTestRun:(id)arg1 ;
-(NSArray *)testRuns;
-(id)init;
@end

