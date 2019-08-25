/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDSModeAssertionProviderObserver.h>
#import <libobjc.A.dylib/DNDSModeAssertionTransformer.h>

@protocol OS_dispatch_queue, DNDSScheduleManagerDataSource;
@class NSObject, DNDSLocalAssertionManager, NSUUID, DNDSScheduleSettings, NSString;

@interface DNDSScheduleManager : NSObject <DNDSModeAssertionProviderObserver, DNDSModeAssertionTransformer> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDSLocalAssertionManager* _localAssertionManager;
	NSUUID* _currentAssertionUUID;
	DNDSScheduleSettings* _currentScheduleSettings;
	id<DNDSScheduleManagerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<DNDSScheduleManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refresh;
-(void)modeAssertionProvider:(id)arg1 didPerformInvalidations:(id)arg2 ;
-(void)_queue_refreshWithDate:(id)arg1 ;
-(id)transformedModeIdentifierForModeAssertion:(id)arg1 ;
-(id)transformedLifetimeForModeAssertion:(id)arg1 ;
-(id)initWithLocalAssertionManager:(id)arg1 ;
-(id<DNDSScheduleManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSScheduleManagerDataSource>)arg1 ;
@end
