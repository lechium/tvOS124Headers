/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPURLMediaItem.h>

@class TVPSecureKeyDeliveryCoordinator;

@interface _TVURLMediaItem : TVPURLMediaItem {

	TVPSecureKeyDeliveryCoordinator* _secureKeyDeliveryCoordinator;

}
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(void)cleanUpMediaItem;
@end

