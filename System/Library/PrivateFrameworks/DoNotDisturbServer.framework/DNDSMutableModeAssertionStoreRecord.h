/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSModeAssertionStoreRecord.h>

@class NSNumber, NSArray;

@interface DNDSMutableModeAssertionStoreRecord : DNDSModeAssertionStoreRecord

@property (nonatomic,copy) NSNumber * storeLastCompleteInvalidationTimestamp; 
@property (nonatomic,copy) NSArray * storeAssertionRecords; 
-(void)setStoreLastCompleteInvalidationTimestamp:(NSNumber *)arg1 ;
-(void)setStoreAssertionRecords:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

