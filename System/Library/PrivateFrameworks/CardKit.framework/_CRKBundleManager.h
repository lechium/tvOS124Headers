/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface _CRKBundleManager : NSObject {

	NSMutableSet* _bundles;

}

@property (nonatomic,readonly) NSSet * bundles; 
+(Class)bundleClass;
+(id)bundleDirectoryPath;
+(id)sharedInstance;
-(void)loadBundles;
-(void)registerBundle:(id)arg1 ;
-(NSSet *)bundles;
-(id)init;
@end

