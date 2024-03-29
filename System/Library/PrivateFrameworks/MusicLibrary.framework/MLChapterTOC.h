/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface MLChapterTOC : NSObject
-(ChapterDataRef)chapterDataRef;
-(unsigned)chapterIndexAtTimeLocationInMS:(unsigned)arg1 ;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(BOOL)hasDataForProperty:(int)arg1 ;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)countOfChapters;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
@end

