/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface ICURLBagLibraryDAAPConfiguration : NSObject {

	NSDictionary* _bagDictionary;

}

@property (nonatomic,readonly) long long databaseID; 
@property (nonatomic,readonly) NSString * databaseName; 
@property (nonatomic,readonly) NSString * baseURL; 
@property (getter=isOnlineGeniusForMatchEnabled,nonatomic,readonly) BOOL onlineGeniusForMatchEnabled; 
@property (nonatomic,readonly) long long playDataBatchIntervalInMinutes; 
@property (nonatomic,readonly) long long subscribedContainerPollingFrequencySeconds; 
@property (nonatomic,readonly) long long updatePollingFrequencySeconds; 
@property (nonatomic,readonly) long long autoUpdatePollingFrequencySeconds; 
@property (nonatomic,readonly) unsigned long long maxSyncRetryIntervalSeconds; 
-(NSString *)baseURL;
-(id)initWithBagLibraryDAAPDictionary:(id)arg1 ;
-(BOOL)isOnlineGeniusForMatchEnabled;
-(long long)playDataBatchIntervalInMinutes;
-(long long)subscribedContainerPollingFrequencySeconds;
-(long long)updatePollingFrequencySeconds;
-(long long)autoUpdatePollingFrequencySeconds;
-(unsigned long long)maxSyncRetryIntervalSeconds;
-(long long)databaseID;
-(NSString *)databaseName;
-(id)description;
@end

