/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVLoggingIdentifier.h>

@class AVAssetLoggingIdentifierInternal, NSString;

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier> {

	AVAssetLoggingIdentifierInternal* _priv;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
-(void)finalize;
-(id)makeDerivedIdentifier;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(NSString *)description;
@end
