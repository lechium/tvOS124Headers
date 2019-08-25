/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVQueueFeeder : NSObject
-(unsigned long long)numberOfPaths;
-(id)playbackInfoAtIndex:(unsigned long long)arg1 ;
-(void)contentsDidChangeByInsertingRange:(NSRange)arg1 ;
-(void)contentsDidChangeByRemovingRange:(NSRange)arg1 ;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)arg1 ;
-(double)bookmarkTimeForIndex:(unsigned long long)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)itemCount;
@end

