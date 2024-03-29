/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) BOOL logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
@property (nonatomic,readonly) double simulatedDateForNowOffset; 
+(id)shared;
-(BOOL)logAutoFlush;
-(BOOL)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(double)simulatedDateForNowOffset;
-(NSString *)logFilePath;
-(id)init;
@end

