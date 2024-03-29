/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIActivityBundleImageConfiguration, UIImage, NSString;

@interface UISUIActivityImageConfiguration : NSObject <NSSecureCoding> {

	_UIActivityBundleImageConfiguration* _bundleImageConfiguration;
	UIImage* _image;
	NSString* _imageCreationBundleIdentifier;
	BOOL _isSettingsVariant;

}

@property (assign,nonatomic) BOOL isSettingsVariant;              //@synthesize isSettingsVariant=_isSettingsVariant - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationWithImageSpecifiedBySpecificBundleImage:(id)arg1 ;
+(id)configurationWithImageSpecifiedBySpecificImage:(id)arg1 ;
+(id)configurationWithImageSpecifiedByBundleIdentifier:(id)arg1 ;
+(id)configurationWithDefaultImage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)loadedActivityImage;
-(id)initWithImage:(id)arg1 bundleImageConfiguration:(id)arg2 imageCreationBundleIdentifier:(id)arg3 isSettingsVariant:(BOOL)arg4 ;
-(BOOL)isSettingsVariant;
-(void)setIsSettingsVariant:(BOOL)arg1 ;
@end

