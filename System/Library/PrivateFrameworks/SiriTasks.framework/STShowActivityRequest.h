/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@interface STShowActivityRequest : AFSiriRequest {

	long long _dataType;
	long long _view;

}
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(long long)dataType;
-(id)_initWithDataType:(long long)arg1 view:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)view;
@end

