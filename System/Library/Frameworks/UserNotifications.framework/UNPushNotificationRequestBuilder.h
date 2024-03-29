/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {

	NSDictionary* _payload;
	NSString* _bundleIdentifier;
	NSString* _identifier;

}
-(id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)buildNotificationRequest;
-(id)buildSafePayload;
-(id)_sanitizeStringArray:(id)arg1 ;
-(id)_sanitizeAPSDictionary:(id)arg1 ;
-(id)_sanitizeAlert:(id)arg1 ;
-(id)_sanitizeSound:(id)arg1 ;
-(id)_sanitizeFlag:(id)arg1 ;
-(id)_sanitizeTopicIdentifier:(id)arg1 ;
-(id)_sanitizeLocalizationArgumentsArray:(id)arg1 ;
-(id)_sanitizeUnsignedInteger:(id)arg1 ;
-(id)_sanitizeVolume:(id)arg1 ;
@end

