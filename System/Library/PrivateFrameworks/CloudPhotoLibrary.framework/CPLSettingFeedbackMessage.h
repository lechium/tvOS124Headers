/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage {

	NSString* _settingName;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
@property (nonatomic,readonly) NSString * value;                    //@synthesize value=_value - In the implementation block
+(id)feedbackType;
-(id)serverMessage;
-(id)initWithSetting:(id)arg1 value:(id)arg2 ;
-(NSString *)settingName;
-(NSString *)value;
@end

