/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFHotspotHelperNetwork : NSObject {

	NSString* _ssid;
	NSString* _password;
	NSString* _label;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * ssid;                          //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * password;                      //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(id)initWithSSID:(id)arg1 bundleIdentifier:(id)arg2 password:(id)arg3 label:(id)arg4 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)ssid;
-(NSString *)bundleIdentifier;
-(id)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)password;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

