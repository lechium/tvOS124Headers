/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPAVErrorResolverDelegate.h>

@class MPAVErrorResolver, NSString;

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate> {

	MPAVErrorResolverBlockHandler* _strongSelf;
	MPAVErrorResolver* _errorResolver;
	/*^block*/id _resolutionHandler;

}

@property (nonatomic,readonly) MPAVErrorResolver * errorResolver;              //@synthesize errorResolver=_errorResolver - In the implementation block
@property (nonatomic,copy) id resolutionHandler;                               //@synthesize resolutionHandler=_resolutionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithErrorResolver:(id)arg1 ;
-(void)resolveError:(id)arg1 ;
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3 ;
-(MPAVErrorResolver *)errorResolver;
-(id)resolutionHandler;
-(void)setResolutionHandler:(id)arg1 ;
@end

