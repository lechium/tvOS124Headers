/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, NSArray, NSString;

@interface ICMediaApplicationBannerSyncResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSArray* _commands;
	NSString* _status;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * commands;                             //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSString * status;                              //@synthesize status=_status - In the implementation block
-(NSArray *)commands;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)status;
@end

