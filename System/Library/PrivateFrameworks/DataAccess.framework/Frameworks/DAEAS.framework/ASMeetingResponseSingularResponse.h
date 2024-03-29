/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMeetingResponseSingularResponse : ASItem {

	NSString* _requestId;
	NSNumber* _status;
	NSString* _eventId;
	NSString* _instanceId;

}

@property (nonatomic,retain) NSString * requestId;               //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSNumber * status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * eventId;                 //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,retain) NSString * instanceId;              //@synthesize instanceId=_instanceId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setEventId:(NSString *)arg1 ;
-(NSString *)eventId;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)instanceId;
-(void)setInstanceId:(NSString *)arg1 ;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
@end

