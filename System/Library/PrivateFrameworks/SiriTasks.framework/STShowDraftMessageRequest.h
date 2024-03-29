/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {

	NSURL* _draftMessageIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(id)_initWithDraftMessageIdentifier:(id)arg1 ;
-(id)draftMessageIdentifier;
-(id)createUsageResult;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)message;
@end

