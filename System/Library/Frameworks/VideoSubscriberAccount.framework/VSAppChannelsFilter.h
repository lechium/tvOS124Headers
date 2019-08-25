/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray;

@interface VSAppChannelsFilter : NSObject {

	NSSet* _personalChannelIDs;
	NSArray* _allChannelMappings;
	NSSet* _personalAppAdamIDs;
	NSSet* _genericAppAdamIDs;

}

@property (nonatomic,copy) NSSet * genericAppAdamIDs;                 //@synthesize genericAppAdamIDs=_genericAppAdamIDs - In the implementation block
@property (nonatomic,copy) NSSet * personalAppAdamIDs;                //@synthesize personalAppAdamIDs=_personalAppAdamIDs - In the implementation block
@property (nonatomic,copy) NSSet * personalChannelIDs;                //@synthesize personalChannelIDs=_personalChannelIDs - In the implementation block
@property (nonatomic,copy) NSArray * allChannelMappings;              //@synthesize allChannelMappings=_allChannelMappings - In the implementation block
-(NSArray *)allChannelMappings;
-(NSSet *)personalChannelIDs;
-(void)setPersonalAppAdamIDs:(NSSet *)arg1 ;
-(void)setGenericAppAdamIDs:(NSSet *)arg1 ;
-(void)_updateAdamIDs;
-(void)setAllChannelMappings:(NSArray *)arg1 ;
-(void)setPersonalChannelIDs:(NSSet *)arg1 ;
-(NSSet *)personalAppAdamIDs;
-(NSSet *)genericAppAdamIDs;
-(id)init;
@end

