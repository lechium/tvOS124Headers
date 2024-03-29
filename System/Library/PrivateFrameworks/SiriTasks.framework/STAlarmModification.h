/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSURL, NSNumber, NSString;

@interface STAlarmModification : STSiriModelObject {

	long long _addedFrequency;
	NSURL* _alarmId;
	NSNumber* _enabled;
	NSNumber* _hour;
	NSString* _label;
	NSNumber* _minute;
	long long _removedFrequency;

}
+(BOOL)supportsSecureCoding;
-(id)alarmId;
-(long long)addedFrequency;
-(long long)removedFrequency;
-(id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)label;
-(id)enabled;
-(id)hour;
-(id)minute;
@end

