/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface _TVLSMDocumentLoader : NSObject {

	NSMutableDictionary* _loadingRequestsByURL;
	NSMutableArray* _loadingProxies;

}

@property (nonatomic,retain) NSMutableDictionary * loadingRequestsByURL;              //@synthesize loadingRequestsByURL=_loadingRequestsByURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * loadingProxies;                         //@synthesize loadingProxies=_loadingProxies - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)loadingRequestsByURL;
-(NSMutableArray *)loadingProxies;
-(void)_updatePriorityForRequest:(id)arg1 ;
-(void)loadProxy:(id)arg1 onlyIfCached:(BOOL)arg2 ;
-(void)cancelProxy:(id)arg1 ;
-(void)setLoadingRequestsByURL:(NSMutableDictionary *)arg1 ;
-(void)setLoadingProxies:(NSMutableArray *)arg1 ;
-(id)init;
@end

