/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDLaunchableAppsResponse : ASDRequestResponse {

	NSArray* _bundleIDs;

}

@property (nonatomic,readonly) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (assign) BOOL success; 
+(BOOL)supportsSecureCoding;
-(id)initWithBundleIDs:(id)arg1 ;
-(NSArray *)bundleIDs;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

