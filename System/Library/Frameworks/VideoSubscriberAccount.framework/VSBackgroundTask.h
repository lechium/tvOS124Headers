/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSBackgroundTaskDelegate;
@class NSString, BKSProcessAssertion;

@interface VSBackgroundTask : NSObject {

	NSString* _name;
	id<VSBackgroundTaskDelegate> _delegate;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;                           //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<VSBackgroundTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDelegate:(id<VSBackgroundTaskDelegate>)arg1 ;
-(id<VSBackgroundTaskDelegate>)delegate;
-(BOOL)begin;
-(void)end;
@end

