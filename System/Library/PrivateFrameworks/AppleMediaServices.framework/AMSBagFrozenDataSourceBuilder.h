/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSBagKeySet, NSArray, NSDictionary, NSDate, NSString;

@interface AMSBagFrozenDataSourceBuilder : NSObject {

	AMSBagKeySet* _bagKeySet;
	NSArray* _cookies;
	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _logKey;
	NSString* _profile;
	NSString* _profileVersion;

}

@property (nonatomic,retain) AMSBagKeySet * bagKeySet;               //@synthesize bagKeySet=_bagKeySet - In the implementation block
@property (nonatomic,retain) NSArray * cookies;                      //@synthesize cookies=_cookies - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * logKey;                      //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSString * profile;                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * profileVersion;              //@synthesize profileVersion=_profileVersion - In the implementation block
-(NSArray *)cookies;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profileVersion;
-(void)setProfile:(NSString *)arg1 ;
-(void)setProfileVersion:(NSString *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(NSString *)profile;
-(void)setBagKeySet:(AMSBagKeySet *)arg1 ;
-(id)createFrozenDataSource;
-(id)initWithFrozenDataSource:(id)arg1 ;
-(void)setCookies:(NSArray *)arg1 ;
-(AMSBagKeySet *)bagKeySet;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
@end

