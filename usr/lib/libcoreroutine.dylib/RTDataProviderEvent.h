/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProvider.h>
#import <libobjc.A.dylib/RTDataProviderEventProtocol.h>

@class NSString;

@interface RTDataProviderEvent : RTDataProvider <RTDataProviderEventProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedEventClasses;
-(void)fetchEventsWithFilterPredicate:(id)arg1 sortDescriptors:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)supportsEventClass:(Class)arg1 ;
-(void)fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)__fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 filterPredicate:(id)arg3 sortDescriptors:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)fetchAllEventsWithHandler:(/*^block*/id)arg1 ;
@end

