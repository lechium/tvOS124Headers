/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTStore.h>

@interface RTFingerprintStore : RTStore
-(void)_appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeFingerprints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)purgePredating:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

