/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo {

	NSArray* _notificationIDs;

}

@property (nonatomic,retain) NSArray * notificationIDs;              //@synthesize notificationIDs=_notificationIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

