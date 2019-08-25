/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDMarkNotificationsReadOperation : CKDOperation {

	/*^block*/id _notificationMarkedRead;
	NSArray* _notificationIDs;
	NSMutableDictionary* _errorByNotificationID;
	NSMutableSet* _successfulNotificationIDs;

}

@property (nonatomic,retain) NSArray * notificationIDs;                                //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorByNotificationID;              //@synthesize errorByNotificationID=_errorByNotificationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulNotificationIDs;                 //@synthesize successfulNotificationIDs=_successfulNotificationIDs - In the implementation block
@property (nonatomic,copy) id notificationMarkedRead;                                  //@synthesize notificationMarkedRead=_notificationMarkedRead - In the implementation block
+(long long)isPredominatelyDownload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setNotificationMarkedRead:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)notificationIDs;
-(NSMutableSet *)successfulNotificationIDs;
-(NSMutableDictionary *)errorByNotificationID;
-(void)_handleNotificationID:(id)arg1 withResponse:(id)arg2 ;
-(id)notificationMarkedRead;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(void)setErrorByNotificationID:(NSMutableDictionary *)arg1 ;
-(void)setSuccessfulNotificationIDs:(NSMutableSet *)arg1 ;
-(void)main;
@end
