/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKMediaQueryResult;

@interface TVHKMediaCategoryTypesFetchControllerResult : NSObject {

	long long _queryReason;
	TVHKMediaQueryResult* _mediaCategoryTypesResult;

}

@property (assign,nonatomic) long long queryReason;                                        //@synthesize queryReason=_queryReason - In the implementation block
@property (nonatomic,retain) TVHKMediaQueryResult * mediaCategoryTypesResult;              //@synthesize mediaCategoryTypesResult=_mediaCategoryTypesResult - In the implementation block
-(long long)queryReason;
-(void)setQueryReason:(long long)arg1 ;
-(TVHKMediaQueryResult *)mediaCategoryTypesResult;
-(id)initWithQueryReason:(long long)arg1 mediaCategoryTypes:(id)arg2 ;
-(void)setMediaCategoryTypesResult:(TVHKMediaQueryResult *)arg1 ;
-(id)init;
-(id)description;
@end

