/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol TVCKStoreContentMetadataFetchOperationDelegate;
@class NSSet, NSString, NSValueTransformer, NSDictionary, NSOperationQueue, NSArray;

@interface TVCKStoreContentMetadataFetchOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	NSSet* _adamIDs;
	NSString* _keyProfile;
	long long _personalizationStyle;
	id<TVCKStoreContentMetadataFetchOperationDelegate> _delegate;
	NSValueTransformer* _lookupItemValueTransformer;
	NSDictionary* _lookupItemsByAdamID;
	NSOperationQueue* _requestQueue;

}

@property (nonatomic,retain) NSDictionary * lookupItemsByAdamID;                                              //@synthesize lookupItemsByAdamID=_lookupItemsByAdamID - In the implementation block
@property (nonatomic,retain) NSOperationQueue * requestQueue;                                                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * adamIDs;                                                          //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyProfile;                                                    //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;                                                //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKStoreContentMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * lookupItems; 
@property (nonatomic,retain) NSValueTransformer * lookupItemValueTransformer;                                 //@synthesize lookupItemValueTransformer=_lookupItemValueTransformer - In the implementation block
-(NSOperationQueue *)requestQueue;
-(void)setRequestQueue:(NSOperationQueue *)arg1 ;
-(NSString *)keyProfile;
-(long long)personalizationStyle;
-(BOOL)isConcurrent;
-(id)lookupItemForAdamID:(id)arg1 ;
-(id)initWithAdamIDs:(id)arg1 keyProfile:(id)arg2 personalizationStyle:(long long)arg3 ;
-(NSArray *)lookupItems;
-(id)initWithAdamIDs:(id)arg1 ;
-(NSDictionary *)lookupItemsByAdamID;
-(void)setLookupItemsByAdamID:(NSDictionary *)arg1 ;
-(NSValueTransformer *)lookupItemValueTransformer;
-(NSSet *)adamIDs;
-(void)_obtainedLookupItems:(id)arg1 withExpirationDate:(id)arg2 ;
-(void)setLookupItemValueTransformer:(NSValueTransformer *)arg1 ;
-(id)init;
-(void)setDelegate:(id<TVCKStoreContentMetadataFetchOperationDelegate>)arg1 ;
-(id<TVCKStoreContentMetadataFetchOperationDelegate>)delegate;
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

