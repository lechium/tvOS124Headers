/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary, NSLock;

@interface REAppNameCache : RESingleton {

	NSMutableDictionary* _nameCache;
	NSLock* _lock;

}
-(id)localizedNameForApplicationWithIdentifier:(id)arg1 ;
-(id)init;
@end

