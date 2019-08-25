/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SPCoreSpotlightExtensionsTask : NSObject {

	/*^block*/id _filterBlock;
	/*^block*/id _performBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id filterBlock;                  //@synthesize filterBlock=_filterBlock - In the implementation block
@property (nonatomic,copy) id performBlock;                 //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)performBlock;
-(id)filterBlock;
-(void)_performWithExtensionsEnumerator:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setFilterBlock:(id)arg1 ;
-(void)start;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)setPerformBlock:(id)arg1 ;
@end

