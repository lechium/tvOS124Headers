/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, NSArray;

@interface HMDAppleAccountContext : HMFObject <HMFObject> {

	NSString* _identifier;
	NSString* _username;
	NSString* _alternateDSID;

}

@property (copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * username;                                    //@synthesize username=_username - In the implementation block
@property (copy,readonly) NSString * alternateDSID;                               //@synthesize alternateDSID=_alternateDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
-(id)initWithAccount:(id)arg1 ;
-(NSArray *)attributeDescriptions;
-(NSString *)alternateDSID;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)username;
@end

