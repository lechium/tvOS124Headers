/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCacheEntry : NSObject {

	id _object;
	lruEntry* _entry;

}
-(lruEntry*)lruListEntry;
-(void)dealloc;
-(id)object;
-(void)setObject:(id)arg1 ;
@end

