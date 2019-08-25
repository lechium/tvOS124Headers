/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TUMomentDescriptor : NSObject <NSSecureCoding> {

	NSString* _photosAssetIdentifier;

}

@property (nonatomic,readonly) NSURL * photoViewingAppURL; 
@property (nonatomic,copy,readonly) NSString * photosAssetIdentifier;              //@synthesize photosAssetIdentifier=_photosAssetIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)photosAssetIdentifier;
-(id)initWithPhotosAppAssetIdentifier:(id)arg1 ;
-(NSURL *)photoViewingAppURL;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
