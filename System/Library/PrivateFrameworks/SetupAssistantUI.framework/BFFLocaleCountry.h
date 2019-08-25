/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BFFLocaleCountry : NSObject {

	NSString* _name;
	NSString* _code;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * code;              //@synthesize code=_code - In the implementation block
+(/*^block*/id)comparatorForLocale:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSString *)code;
@end
