/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XCTestObservation.h>

@protocol IMUnitTestRunnerDelegate;
@class NSString;

@interface IMUnitTestRunner : NSObject <XCTestObservation> {

	id<IMUnitTestRunnerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IMUnitTestRunnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * defaultPathToXCTestFramework; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dateFormatter;
-(NSString *)defaultPathToXCTestFramework;
-(id)loadTestBundle:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadXCTestFramework;
-(id)descriptionFromResult:(id)arg1 ;
-(id)pathToPluginBundle:(id)arg1 ;
-(id)runTestsInBundleAtPath:(id)arg1 error:(id*)arg2 ;
-(void)testLogWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(void)writeOutputToStdout:(id)arg1 ;
-(void)testLogWithFormat:(id)arg1 ;
-(void)testSuiteWillStart:(id)arg1 ;
-(void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)testSuiteDidFinish:(id)arg1 ;
-(void)testCaseWillStart:(id)arg1 ;
-(void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 ;
-(void)testCaseDidFinish:(id)arg1 ;
-(id)runTestsInBundleNamed:(id)arg1 error:(id*)arg2 ;
-(id)logFileHandle;
-(void)setDelegate:(id<IMUnitTestRunnerDelegate>)arg1 ;
-(id<IMUnitTestRunnerDelegate>)delegate;
@end

