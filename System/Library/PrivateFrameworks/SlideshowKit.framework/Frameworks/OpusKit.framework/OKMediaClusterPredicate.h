/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OKMediaClusterPredicate : NSObject {

	NSString* _uniqueID;
	unsigned long long _category;

}

@property (nonatomic,copy) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
+(id)nameForCategory:(unsigned long long)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)title;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
@end

