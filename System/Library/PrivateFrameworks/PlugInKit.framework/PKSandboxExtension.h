/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	NSString* _token;
	long long _handle;

}

@property (retain) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;              //@synthesize handle=_handle - In the implementation block
-(void)expel;
-(long long)handle;
-(void)consume;
-(void)setHandle:(long long)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

