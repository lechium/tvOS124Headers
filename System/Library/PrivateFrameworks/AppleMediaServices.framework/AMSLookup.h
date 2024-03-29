/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>

@protocol AMSLookupBagContract;
@class NSString, AMSProcessInfo;

@interface AMSLookup : AMSTask {

	NSString* _caller;
	AMSProcessInfo* _clientInfo;
	id<AMSLookupBagContract> _contract;
	NSString* _imageProfile;
	NSString* _keyProfile;
	NSString* _platform;
	long long _signatureType;
	long long _version;
	NSString* _language;

}

@property (nonatomic,retain) NSString * caller;                              //@synthesize caller=_caller - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                    //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,retain) id<AMSLookupBagContract> contract;              //@synthesize contract=_contract - In the implementation block
@property (nonatomic,retain) NSString * imageProfile;                        //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,retain) NSString * keyProfile;                          //@synthesize keyProfile=_keyProfile - In the implementation block
@property (nonatomic,retain) NSString * platform;                            //@synthesize platform=_platform - In the implementation block
@property (assign,nonatomic) long long signatureType;                        //@synthesize signatureType=_signatureType - In the implementation block
@property (assign,nonatomic) long long version;                              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * language;                            //@synthesize language=_language - In the implementation block
-(AMSProcessInfo *)clientInfo;
-(NSString *)keyProfile;
-(NSString *)imageProfile;
-(void)setImageProfile:(NSString *)arg1 ;
-(NSString *)caller;
-(void)setCaller:(NSString *)arg1 ;
-(NSString *)platform;
-(void)setKeyProfile:(NSString *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(id)initWithBagContract:(id)arg1 ;
-(id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3 ;
-(id<AMSLookupBagContract>)contract;
-(long long)signatureType;
-(id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2 ;
-(void)_addJSSignatureToRequest:(id)arg1 ;
-(id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2 ;
-(void)setContract:(id<AMSLookupBagContract>)arg1 ;
-(void)setSignatureType:(long long)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

