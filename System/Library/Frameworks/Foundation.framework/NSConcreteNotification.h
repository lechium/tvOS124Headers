/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSNotification.h>

@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {

	NSString* name;
	id object;
	NSDictionary* userInfo;
	BOOL dyingObject;

}
+(id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)recycle;
-(void)dealloc;
-(id)userInfo;
-(id)name;
-(id)object;
@end

