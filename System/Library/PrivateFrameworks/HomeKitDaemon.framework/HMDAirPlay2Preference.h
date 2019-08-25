/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMFSystemPreference, NSString, NSArray;

@interface HMDAirPlay2Preference : HMFPreference <HMFObject> {

	HMFSystemPreference* _airPlayPreference;
	HMFSystemPreference* _homeKitPreference;

}

@property (readonly) HMFSystemPreference * airPlayPreference;                     //@synthesize airPlayPreference=_airPlayPreference - In the implementation block
@property (readonly) HMFSystemPreference * homeKitPreference;                     //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(void)load;
-(NSString *)propertyDescription;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)numberValue;
-(HMFSystemPreference *)homeKitPreference;
-(HMFSystemPreference *)airPlayPreference;
-(BOOL)boolValue;
-(id)stringValue;
@end

