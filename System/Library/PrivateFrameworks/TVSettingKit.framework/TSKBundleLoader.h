/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString;

@interface TSKBundleLoader : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                           //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
+(id)loaderWithBundle:(id)arg1 ;
-(id)loadViewController;
-(NSString *)localizedTitle;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
@end

