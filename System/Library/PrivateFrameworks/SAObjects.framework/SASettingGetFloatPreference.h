/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingGetFloat.h>

@class NSString;

@interface SASettingGetFloatPreference : SASettingGetFloat

@property (nonatomic,copy) NSString * settingKey; 
+(id)getFloatPreference;
+(id)getFloatPreferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)settingKey;
-(void)setSettingKey:(NSString *)arg1 ;
@end

