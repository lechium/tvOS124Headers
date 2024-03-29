/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSString;

@interface SSSoftwareUpdate : NSObject {

	NSDictionary* _dictionary;
	NSDate* _installDate;
	long long _updateState;

}

@property (nonatomic,readonly) NSDictionary * updateDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                             //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (assign,nonatomic) long long updateState;                          //@synthesize updateState=_updateState - In the implementation block
-(long long)updateState;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
-(long long)storeItemIdentifier;
-(void)dealloc;
-(NSString *)bundleIdentifier;
@end

