/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject {

	long long _fetchReason;
	NSArray* _fetchResponses;
	NSArray* _fetchResponseChanges;

}

@property (assign,nonatomic) long long fetchReason;                     //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponses;                    //@synthesize fetchResponses=_fetchResponses - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponseChanges;              //@synthesize fetchResponseChanges=_fetchResponseChanges - In the implementation block
-(id)init;
-(id)description;
-(long long)fetchReason;
-(NSArray *)fetchResponses;
-(NSArray *)fetchResponseChanges;
-(void)setFetchResponseChanges:(NSArray *)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2 ;
-(void)setFetchReason:(long long)arg1 ;
-(void)setFetchResponses:(NSArray *)arg1 ;
@end

