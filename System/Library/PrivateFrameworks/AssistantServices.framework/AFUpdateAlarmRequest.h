/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFUpdateAlarmRequest : AFSiriRequest {

	NSArray* _alarms;

}

@property (nonatomic,copy) NSArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)createResponse;
-(id)alarm;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

