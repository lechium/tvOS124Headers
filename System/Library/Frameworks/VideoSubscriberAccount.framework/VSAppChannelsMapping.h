/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject {

	NSString* _appAdamID;
	NSArray* _channelIDs;

}

@property (nonatomic,copy) NSString * appAdamID;              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSArray * channelIDs;              //@synthesize channelIDs=_channelIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAppAdamID:(NSString *)arg1 ;
-(NSString *)appAdamID;
-(void)setChannelIDs:(NSArray *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)channelIDs;
@end

