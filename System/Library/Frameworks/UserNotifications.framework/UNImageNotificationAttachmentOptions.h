/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationAttachmentOptions.h>
#import <libobjc.A.dylib/UNNotificationAttachmentThumbnailOptions.h>

@class NSNumber, NSString;

@interface UNImageNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSNumber* _thumbnailFrameNumber;
	CGRect _thumbnailClippingRect;

}

@property (nonatomic,readonly) BOOL hiddenFromDefaultExpandedView;                //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbnailFrameNumber;              //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL thumbnailHidden;                              //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (nonatomic,readonly) CGRect thumbnailClippingRect;                      //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
+(id)optionsFromOptionsDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSNumber *)thumbnailFrameNumber;
-(CGRect)thumbnailClippingRect;
-(BOOL)thumbnailHidden;
-(BOOL)hiddenFromDefaultExpandedView;
-(id)initWithThumbnailHidden:(BOOL)arg1 thumbnailClippingRect:(CGRect)arg2 thumbnailFrameNumber:(id)arg3 hiddenFromDefaultExpandedView:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

