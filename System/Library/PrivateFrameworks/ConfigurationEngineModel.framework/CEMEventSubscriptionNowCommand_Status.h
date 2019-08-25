/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase {

	NSArray* _statusInactiveEvents;
	NSArray* _statusUnknownEvents;

}

@property (nonatomic,copy) NSArray * statusInactiveEvents;              //@synthesize statusInactiveEvents=_statusInactiveEvents - In the implementation block
@property (nonatomic,copy) NSArray * statusUnknownEvents;               //@synthesize statusUnknownEvents=_statusUnknownEvents - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInactiveEvents:(NSArray *)arg1 ;
-(void)setStatusUnknownEvents:(NSArray *)arg1 ;
-(NSArray *)statusInactiveEvents;
-(NSArray *)statusUnknownEvents;
@end

