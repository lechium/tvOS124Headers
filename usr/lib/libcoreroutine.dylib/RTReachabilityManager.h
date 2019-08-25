/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@interface RTReachabilityManager : RTService {

	SCNetworkReachabilityRef _reachabilityRef;
	long long _currentReachability;

}

@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;              //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,readonly) long long currentReachability;                       //@synthesize currentReachability=_currentReachability - In the implementation block
+(long long)_processReachabilityChange:(unsigned)arg1 ;
+(id)reachabilityToString:(long long)arg1 ;
-(void)setCurrentReachability:(long long)arg1 ;
-(long long)currentReachability;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(SCNetworkReachabilityRef)reachabilityRef;
-(BOOL)_getCurrentReachability:(unsigned*)arg1 ;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(id)currentReachabilityString;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)processReachabilityChange:(unsigned)arg1 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(id)init;
-(id)description;
@end

