/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVImageRepresentation.h>

@class NSBundle, NSString, UITraitCollection;

@interface __TVNamedImageRepresentation : _TVImageRepresentation {

	NSBundle* _bundle;
	NSString* _imageName;
	UITraitCollection* _traitCollection;

}
-(id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
-(id)_originalImageCacheKey;
-(CGImageRef)_originalImage;
@end

