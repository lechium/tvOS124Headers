/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libMemoryResourceException.dylib/FPUserProcess.h>

@interface FPCorpseProcess : FPUserProcess
-(id)initWithCorpse:(unsigned)arg1 pid:(int)arg2 name:(id)arg3 dirtyFlags:(unsigned)arg4 procFlags:(unsigned)arg5 ;
-(BOOL)_populateTask;
-(void)_gatherIdleExitStatus;
-(BOOL)_isAlive;
@end
