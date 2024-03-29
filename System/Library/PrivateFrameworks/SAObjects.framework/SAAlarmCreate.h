/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAAlarmAlarmAction.h>

@class SAAlarmObject, NSString;

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property (nonatomic,retain) SAAlarmObject * alarmToCreate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)create;
+(id)createWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAAlarmObject *)alarmToCreate;
-(void)setAlarmToCreate:(SAAlarmObject *)arg1 ;
@end

