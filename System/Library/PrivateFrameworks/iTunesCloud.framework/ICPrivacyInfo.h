/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICPrivacyInfo : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMedia; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMusic; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForVideos; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForBooks; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForApplications; 
+(id)sharedPrivacyInfo;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForMusic;
-(BOOL)privacyAcknowledgementRequiredForVideos;
-(BOOL)privacyAcknowledgementRequiredForBooks;
-(BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForMedia;
-(BOOL)privacyAcknowledgementRequiredForApplications;
-(id)init;
@end

