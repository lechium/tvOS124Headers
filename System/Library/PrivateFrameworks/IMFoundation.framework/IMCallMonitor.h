/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CXCallObserver, NSDate;

@interface IMCallMonitor : NSObject {

	CXCallObserver* _callCenter;
	BOOL _wasOnCall;
	NSDate* _lastCallDate;

}

@property (nonatomic,readonly) BOOL isOnCall; 
@property (nonatomic,retain,readonly) NSDate * dateLastCallEnded;              //@synthesize lastCallDate=_lastCallDate - In the implementation block
+(id)sharedInstance;
-(BOOL)isOnCall;
-(NSDate *)dateLastCallEnded;
-(id)init;
-(void)dealloc;
@end

