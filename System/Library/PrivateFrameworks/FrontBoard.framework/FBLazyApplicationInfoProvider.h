/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationInfoProvider.h>

@class NSString;

@interface FBLazyApplicationInfoProvider : NSObject <FBApplicationInfoProvider> {

	Class _applicationInfoSubclass;

}

@property (assign,nonatomic) Class applicationInfoSubclass;              //@synthesize applicationInfoSubclass=_applicationInfoSubclass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)applicationInfoForBundleIdentifier:(id)arg1 ;
-(Class)applicationInfoSubclass;
-(void)setApplicationInfoSubclass:(Class)arg1 ;
-(id)init;
@end

