/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DSTestAutomation : NSObject {

	BOOL _testAutomationEnabled;

}

@property (assign,nonatomic) BOOL testAutomationEnabled;              //@synthesize testAutomationEnabled=_testAutomationEnabled - In the implementation block
+(void)postInteractiveTestEvent:(id)arg1 info:(id)arg2 ;
+(void)postConfiguration:(id)arg1 ;
+(id)sharedInstance;
-(BOOL)testAutomationEnabled;
-(void)setTestAutomationEnabled:(BOOL)arg1 ;
-(id)init;
@end

