/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNotificationSettingsPayload : MCPayload {

	NSArray* _notificationSettings;

}

@property (nonatomic,retain) NSArray * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)validatedNotificationSettings:(id)arg1 outError:(id*)arg2 ;
-(void)setNotificationSettings:(NSArray *)arg1 ;
-(NSArray *)notificationSettings;
@end

